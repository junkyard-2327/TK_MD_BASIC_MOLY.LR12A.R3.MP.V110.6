import sys, os, shutil, gc
import glob, gzip
import ConfigParser
import xml.dom.minidom
from xml.dom.minidom import Document
from win32com.client import Dispatch  
import win32com.client
import thread, threading, time

# Global init ==============================================================
app_version = "v1.0.0"
lid_doc = Document()
lid_info = lid_doc.createElement('LID_INFO')
lid_doc.appendChild(lid_info)
OutputArray = False
OutputBit = False
BypassNoDes = False
DebugMode = False

# EditorParser Class =======================================================
class EditorParser:
  def __init__(self, filename=None):
    self.offset = 0
    self.header = ['','','']
    f = open(filename, "r")
    self.lines = f.readlines()
    f.close()
    
  def FindLidHeader(self):
    if(self.offset >= len(self.lines)):
      return -1
    for i in range(self.offset, (len(self.lines)-3)):
      if(self.lines[i].find('* LID_NAME') >= 0):
        self.offset = (i + 1)
        return i
    return -1
  
  def GetLidHeader(self):
    i = self.offset
    self.header[0] = self.lines[i][2:999].strip()
    while(1):
      i += 1
      if(self.lines[i].strip() != "*"):
        break
    if(self.lines[i].find('DESCRIPTION') < 0):
      return -1
    i += 1
    self.header[1] = ""
    while(1):
      if(self.lines[i][0:3] != "*  "):
        break
      str = self.lines[i][2:999].strip()
      self.header[1] = (self.header[1] + str + "\n")
      i += 1
    self.header[2] = ""
    if(self.lines[i].find('INFOMATION') < 0):
      return self.header
    i += 1
    while(1):
      if(self.lines[i][0:3] != "*  "):
        break
      str = self.lines[i][2:999].strip()
      self.header[2] = (self.header[2] + str + "\n")
      i += 1
    return self.header

# StructEntry Class ========================================================
class StructEntry:
  def __init__(self):
    self.name = ""
    self.description = ""
    self.offset = 0
    self.size = 0
    self.bit_data = []
    self.bit_offset = 0
    self.bit_count = 0
    self.byte_offset = 0
    self.array_size = 0

# MDDBParser Class
class MDDBParser:
  def __init__(self, filename=None):
    self.lid_struct = []
    self.description_deep = 0
    self.entry_deep = 0
    doc = xml.dom.minidom.parse(filename)
    root = doc.documentElement
    self.LIDs = root.getElementsByTagName('NVRAM_LIDs')[0].getElementsByTagName('NVRAM_LID')
    self.Structs = root.getElementsByTagName('Structs')[0].getElementsByTagName('Struct')
    self.Unions = root.getElementsByTagName('Unions')[0].getElementsByTagName('Union')
    self.Typedefs = root.getElementsByTagName('Typedefs')[0].getElementsByTagName('Typedef')
    self.Platform = root.getElementsByTagName('Platform')[0].getElementsByTagName('Information')
    
  def GetLidCount(self):
    return len(self.LIDs)
  
  def GetLidInfo(self, idx):
    if(idx >= len(self.LIDs)):
      return -1
    self.lid_name = self.LIDs[idx].getAttribute("name")
    self.lid_type = self.LIDs[idx].getAttribute("type_name")
    self.record_count = int(self.LIDs[idx].getAttribute("record_count"))
    self.description_deep = 0
    self.entry_deep = 0
    return idx
  
  def GetPlatformInfo(self, infoName):
    for i in range(0, len(self.Platform)):
      if(self.Platform[i].getAttribute("name") == infoName):
        return self.Platform[i].getAttribute("value")
    return ""

  def ConvertTypedef(self, typeName):
    for i in range(0, len(self.Typedefs)):
      if(self.Typedefs[i].getAttribute("name") == typeName):
        return self.Typedefs[i].getAttribute("defined_type_name")
    return typeName

  def ConvertArray(self, arrayStr, baseStr="", entryRet=[]):
    if(arrayStr == "" or OutputArray == False):
      return [""]
    if(baseStr == ""):
      entryRet = []
      gc.collect()
    s = arrayStr.find(",")  
    cnt = int(arrayStr) if(s == -1) else int(arrayStr[0:s])
    for i in range(0, cnt):
      if(s == -1):
        entryRet.append(baseStr + "[" + str(i) + "]")
      else:
        self.ConvertArray(arrayStr[s+1:], baseStr + "[" + str(i) + "]", entryRet)
    return entryRet
  
  def RecursiveBitEntry(self, entry, entry_idx, type_name):
    entries = entry[entry_idx].bit_data
    pre_name = entry[entry_idx].name
    pre_offset = entry[entry_idx].offset
    pre_size = entry[entry_idx].size
    pre_description = entry[entry_idx].description
    pre_array_size = entry[entry_idx].array_size
    for i in range(0, len(entries)):
      if(i > 0):
        entry.append(StructEntry())
        entry_idx = (len(entry) - 1)
      entry[entry_idx].byte_offset = int(entries[i].getAttribute("byte_offset"))
      entry[entry_idx].bit_offset = int(entries[i].getAttribute("bit_offset"))
      entry[entry_idx].bit_count = int(entries[i].getAttribute("bit_count"))
      #entry[entry_idx].name = pre_name + ":" + entries[i].getAttribute("name")
      #entry[entry_idx].description = pre_description + "(" + entries[i].getAttribute("description") +")"
      entry[entry_idx].description = entries[i].getAttribute("description")
      entry[entry_idx].offset = pre_offset
      entry[entry_idx].size = pre_size
      entry[entry_idx].bit_data = entries[i].getElementsByTagName("Bit_Value")
      entry[entry_idx].array_size = pre_array_size
      entry[entry_idx].byte_offset -= entry[entry_idx].offset
      if((entry[entry_idx].bit_count == pre_array_size*8) and (entry[entry_idx].bit_offset == 0)):
        entry[entry_idx].name = pre_name + "[" + str(entry[entry_idx].byte_offset / pre_array_size) + "]"
      elif(entry[entry_idx].bit_count == 1):
        entry[entry_idx].name = pre_name + "[" + str(entry[entry_idx].byte_offset / pre_array_size) + "]:" + str(entry[entry_idx].bit_offset)
      else:
        entry[entry_idx].name = pre_name + "[" + str(entry[entry_idx].byte_offset / pre_array_size) + "]:" + str(entry[entry_idx].bit_offset) + "~" + str(entry[entry_idx].bit_offset + entry[entry_idx].bit_count - 1)
    gc.collect()

  def ReturnStructEntry(self, structName):
    structName = self.ConvertTypedef(structName)
    for i in range(0, len(self.Structs)):
      if(self.Structs[i].getAttribute("name") == structName):
        return self.Structs[i].getElementsByTagName("Field")
    for i in range(0, len(self.Unions)):
      if(self.Unions[i].getAttribute("name") == structName):
        return [self.Unions[i].getElementsByTagName("Field")[0]]
    return []
      
  def RecursiveStructEntry(self, entry, entry_idx, type_name, deep, deep_limit):
    if(deep_limit < 1):
      return []
    entries = self.ReturnStructEntry(type_name)
    pre_name = entry[entry_idx].name
    pre_offset = entry[entry_idx].offset
    for i in range(0, len(entries)):
      if(entries[i].getAttribute("type") in ["struct","union"]):
        array = entries[i].getAttribute("array_sizes")
        array = self.ConvertArray(array)
      else:
        array = [""]
      array_size = entries[i].getAttribute("array_sizes")
      array_size = len(self.ConvertArray(array_size))
      array_size = 1 if(array_size == '') else int(entries[i].getAttribute("size"))/int(array_size)        
      for j in range(0, len(array)):
        if((i > 0) or (j > 0)):
          entry.append(StructEntry())
          entry_idx = (len(entry) - 1)
        entry[entry_idx].name = pre_name + "." + entries[i].getAttribute("name") + array[j]
        entry[entry_idx].description = entries[i].getAttribute("description")
        if(self.entry_deep < deep):
          self.entry_deep = deep
        if((len(entry[entry_idx].description) > 0) and (self.description_deep < deep)):
          self.description_deep = deep
        entry_offset = 0 if(entries[i].getAttribute("offset")=="") else entries[i].getAttribute("offset")
        entry[entry_idx].offset = pre_offset + int(entry_offset) + (int(entries[i].getAttribute("size")) / len(array) * j)
        entry[entry_idx].size = (int(entries[i].getAttribute("size")) / len(array))
        entry[entry_idx].bit_data = entries[i].getElementsByTagName("NVRAM_Bit_Data")
        entry[entry_idx].array_size = array_size
        if(entries[i].getAttribute("type") in ["struct","union"]):
          self.RecursiveStructEntry(entry, entry_idx, entries[i].getAttribute("type_name"), (deep + 1), (deep_limit - 1))
        else:
          if((len(entry[entry_idx].bit_data) > 0) and OutputBit):
            self.RecursiveBitEntry(entry, entry_idx, entries[i].getAttribute("type_name"))          
    gc.collect()
    
  def GetLidStructure(self, deep_limit):
    if(deep_limit < 1):
      return []
    self.description_deep = 0
    self.entry_deep = 0    
    entries = self.ReturnStructEntry(self.lid_type)
    entry = []
    for i in range(0, len(entries)):
      if(entries[i].getAttribute("type") in ["struct","union"]):
        array = entries[i].getAttribute("array_sizes")
        array = self.ConvertArray(array)
      else:
        array = [""]
      array_size = entries[i].getAttribute("array_sizes")
      array_size = len(self.ConvertArray(array_size))
      array_size = 1 if(array_size == '') else int(entries[i].getAttribute("size"))/int(array_size)
      for j in range(0, len(array)):
        entry.append(StructEntry())
        entry_idx = (len(entry) - 1)
        entry[entry_idx].name = entries[i].getAttribute("name") + array[j]
        entry[entry_idx].description = entries[i].getAttribute("description")
        if(self.entry_deep == 0):
          self.entry_deep = 1
        if((len(entry[entry_idx].description) > 0) and (self.description_deep == 0)):
          self.description_deep = 1
        entry[entry_idx].offset = int(entries[i].getAttribute("offset")) + (int(entries[i].getAttribute("size")) / len(array) * j)
        entry[entry_idx].size = (int(entries[i].getAttribute("size")) / len(array))
        entry[entry_idx].bit_data = entries[i].getElementsByTagName("NVRAM_Bit_Data")
        entry[entry_idx].array_size = array_size
        if(entries[i].getAttribute("type") in ["struct","union"]):
          self.RecursiveStructEntry(entry, entry_idx, entries[i].getAttribute("type_name"), 2, (deep_limit - 1))
        else:
          if((len(entry[entry_idx].bit_data) > 0) and OutputBit):
            self.RecursiveBitEntry(entry, entry_idx, entries[i].getAttribute("type_name"))
    gc.collect()
    # Rebuild entry
    if(BypassNoDes and (self.description_deep < self.entry_deep)):
      del entry
      entry = self.GetLidStructure(self.description_deep)
    return entry

# Excel Editor Class =======================================================
class easyExcel_class:
    def __init__(self, xlBook):
        self.xlBook = xlBook
    def getCell(self, sheet, row, col):  
        "Get value of one cell"  
        sht = self.xlBook.Worksheets(sheet)  
        return sht.Cells(row, col).Value  
    def setCell(self, sheet, row, col, value):  
        "set value of one cell"  
        sht = self.xlBook.Worksheets(sheet)  
        sht.Cells(row, col).Value = value
    def copyRow(self, sheet, row1s, row1e, row2):  
        "copy value from one cell"  
        sht = self.xlBook.Worksheets(sheet)
        sht.Range(sht.Rows(row1s), sht.Rows(row1e)).copy
        sht.Rows(row2).PasteSpecial(-4104)
    def deleteRow(self, sheet, row1s, row1e):  
        "delete entry row"  
        sht = self.xlBook.Worksheets(sheet)
        sht.Range(sht.Rows(row1s), sht.Rows(row1e)).delete
    def copyInsertRow(self, sheet, row1s, row1e, row2):  
        "copy value from one cell"  
        sht = self.xlBook.Worksheets(sheet)
        sht.Range(sht.Rows(row1s), sht.Rows(row1e)).copy
        sht.Rows(row2).Insert()
    def insertRow(self, sheet, row):  
        "insert new row above current row"  
        sht = self.xlBook.Worksheets(sheet)
        sht.Rows(row).Insert()
    def setColor(self, sheet, row1, row2, color):
        "Set background color"
        sht = self.xlBook.Worksheets(sheet)
        if(color == 1):
              bColor = sht.Cells(10,1).Interior.Color
        else:
              bColor = sht.Cells(9,1).Interior.Color
        sht.Range(sht.Cells(row1, 1), sht.Cells(row2, 9)).Interior.Color = bColor
    def getRange(self, sheet, row1, col1, row2, col2):  
        "return a 2d array (i.e. tuple of tuples)"  
        sht = self.xlBook.Worksheets(sheet)  
        return sht.Range(sht.Cells(row1, col1), sht.Cells(row2, col2)).Value

class ExcelEditor():
  def __init__(self, filename):
    try:
      shutil.copy("nvram_gen_excel.xltx", filename)
      self.xlApp = win32com.client.Dispatch('Excel.Application')
      if(DebugMode == True):
        self.xlApp.Visible = True
      #self.xlApp.DisplayAlerts = False
      self.filename = filename  
      self.xlBook = self.xlApp.Workbooks.Open(os.path.realpath(filename))
      self.CurrentRow = 30
      self.color = 0
      self.easyExcel = easyExcel_class(self.xlBook)
      self.easyExcel.copyRow(1, 7, 7, 29) #header
    except:
      print "ExcelEditor init fail."
      print "Please check Excel setup or kill background excel."
      os.system("pause")
      os._exit(0)
    return

  def __del__(self):
    #self.xlApp.Visible = True
    self.easyExcel.deleteRow(1, 4, 27)
    self.xlBook.Save()
    self.xlBook.Close(SaveChanges=0)
    del self.xlApp
    return

  def Save(self):
    self.xlBook.Save()
    return
	
  def CreateRow(self, record, entry):
    if((record > 1) and (entry > 1)):
      self.easyExcel.copyRow(1, 11, 14, self.CurrentRow)
      if(record > 2):
        for i in range(2, record):
          self.easyExcel.copyInsertRow(1, 11, 12, (self.CurrentRow + 2))
      if(entry > 2):
        for i in range(0, record):
          for j in range(2, entry):
            self.easyExcel.insertRow(1, (self.CurrentRow + (entry * i) + 1))
    elif((record > 1) and (entry == 1)):
      self.easyExcel.copyRow(1, 15, 16, self.CurrentRow)
      if(record > 2):
        for i in range(2, record):
          self.easyExcel.insertRow(1, (self.CurrentRow + 1))
    elif((record == 1) and (entry > 1)):
      self.easyExcel.copyRow(1, 8, 9, self.CurrentRow)
      if(entry > 2):
        for i in range(2, entry):
          self.easyExcel.insertRow(1, (self.CurrentRow + 1))
    elif((record == 1) and (entry == 1)):
      self.easyExcel.copyRow(1, 10, 10, self.CurrentRow)
    else:
      return
    startRow = self.CurrentRow
    self.CurrentRow += (record * entry)
    self.easyExcel.setColor(1, startRow, (self.CurrentRow - 1), self.color)
    self.color = 1 if(self.color == 0) else 0
    return startRow

  def __ConvertLSB(self, str):
    s = ""
    for i in range(0, len(str), 2):
      s = str[i:i+2] + s
    return s
  
  def GetValueStr(self, value, entry):
    if(entry.name == u'byte23[0]:0*3'):
      print "debug use"
    if(value == "0x00"):
      value = "00" * entry.size
      entry.offset = 0
    elif(value == "0xFF"):
      value = "FF" * entry.size
      entry.offset = 0
    value = value[(entry.offset*2):((entry.offset + entry.size)*2)]
    if(entry.bit_count > 0):
      byte_size = ((entry.bit_count - 1) / 8 + 1)
      value = value[(entry.byte_offset*2):((entry.byte_offset + byte_size)*2)]
      value = self.__ConvertLSB(value)
      mask = ("1" * entry.bit_count)
      value = hex((int(value, 16) >> entry.bit_offset) & int(mask, 2))
      value = self.__ConvertLSB(value[2:])
    return value
  
  def FillEntry(self, lid_name, startRow, record, entry):
    #fill LID header
    entry_cnt = len(entry)
    self.easyExcel.setCell(1, startRow, 1, lid_name)
    lid = lid_info.getElementsByTagName(lid_name)
    self.easyExcel.setCell(1, startRow, 2, lid[0].getAttribute("DESCRIPTION"))
    self.easyExcel.setCell(1, startRow, 3, lid[0].getAttribute("INFORMATION"))
    default_val = lid[0].getAttribute("defaultByteFill")
    record_val = lid[0].getElementsByTagName("Record")
    record_size = lid[0].getAttribute("record_size")
    #fill LID structure
    str_mask_size = 0
    for i in range(0, record):
      currentRow = ((entry_cnt * i) + startRow)
      self.easyExcel.setCell(1, currentRow, 4, str(i))
      if(i >= len(record_val)):
        print "  NVRAMReader_XML record idx is not match."
        DefaultData = ""
        realtime_val = ""
      else:
        DefaultData = record_val[i].getAttribute("DefaultData") if(len(record_val)) else ""
        realtime_val = record_val[i].getAttribute("RawData") if(len(record_val)) else ""
        realtime_val = realtime_val if(len(realtime_val) == (int(record_size) * 2)) else ""
      if(len(DefaultData) == (int(record_size) * 2)):
        default_val = DefaultData 
      else:
        print "  NVRAMReader_XML data length is not match."      
      for j in range(0, entry_cnt):
        print "   " + entry[j].name
        self.easyExcel.setCell(1, (currentRow + j), 5, entry[j].name)
        self.easyExcel.setCell(1, (currentRow + j), 6, entry[j].description)
        #fill default value
        value = self.GetValueStr(default_val, entry[j]) if((default_val in ["0x00", "0xFF"]) or (default_val.find("()") < 0)) else ""
        self.easyExcel.setCell(1, (currentRow + j), 7, value)
        #fill real-time value
        value = self.GetValueStr(realtime_val, entry[j]) if(len(realtime_val) > 0) else ""
        self.easyExcel.setCell(1, (currentRow + j), 8, value)
        bit_description = ""
        for k in range(0, len(entry[j].bit_data)):
          bit_description = bit_description + entry[j].bit_data[k].getAttribute("description")
          bit_description += "\n" if((k + 1) != len(entry[j].bit_data)) else ""
        self.easyExcel.setCell(1, (currentRow + j), 9, bit_description)
    #fill bit description
    return
  
# Global funtion ===========================================================
def SortFilterConfig(filter):
  cnt = len(filter)
  for i in range(0, cnt):
    for j in range(i+1, cnt):
      if(len(filter[j][0]) > len(filter[i][0])):
        filter[i],filter[j] = filter[j],filter[i]

def CompareFilterConfig(filter, lid_name):
  cnt = len(filter)
  for i in range(0, cnt):
    if(lid_name.lower().find(filter[i][0].lower().replace('*','')) == 0):
      return filter[i][1]
  return -1

#Write collected info for debug
def WriteEditorInfo(): 
  f = open('EditorInfo.xml','w')
  f.write(lid_doc.toprettyxml(indent = ''))
  f.close()

#Load collected info for debug
def LoadEditorInfo():
  global lid_doc
  global lid_info
  lid_doc = xml.dom.minidom.parse('EditorInfo.xml')
  lid_info = lid_doc.documentElement
  
def CollectEditorInfo(path):
  for parent,dirname,filenames in os.walk(path):
    for fname in filenames:
      if(fname.find('_editor.h')>0 or fname=='nvram_editor_data_item.h'):
        # find editor file
        parser = EditorParser(parent+"\\"+fname)
        while(parser.FindLidHeader() >= 0):
          header = parser.GetLidHeader()
          lid = lid_doc.createElement(header[0])
          lid.setAttribute('LID_NAME', header[0])
          lid.setAttribute('DESCRIPTION', header[1])
          lid.setAttribute('INFORMATION', header[2])
          lid_info.appendChild(lid)
        # retrieve memory
        del parser
        gc.collect()
    break

# Main funtion ===========================================================
if __name__ == "__main__":
  print "MTK NVRAM Description Generator " + app_version
  print "---------------------------------------"
  try:
    os.chdir(os.path.dirname(os.path.realpath(sys.argv[0])))
    cf = ConfigParser.ConfigParser()
    cf.read(sys.argv[1])
    if(cf.has_section('Config')==False or cf.has_section('Filter')==False):
      print "Please input valid config.ini"
      os.system("pause")
      os._exit(0)
  except:
    print "Please input config.ini"
    os.system("pause")
    sys.exit()

  # Load input_config.ini
  filter = cf.items("Filter")
  SortFilterConfig(filter)
  ExcelOutput = cf.get("Config", "Excel_Output") 
  OutputArray = (str(cf.get("Config", "Output_Array")).lower() == "true")
  OutputBit = (str(cf.get("Config", "Output_Possible_Val")).lower() == "true")
  BypassNoDes = (str(cf.get("Config", "Bypass_No_Description")).lower() == "true")
  print "Load config file success."
  
  # Parsing editor.h to xml
  build_path = os.path.realpath(cf.get("Config", "Build_Path"))
  mcu_path = os.path.realpath(build_path + '\\..\\..\\..\\')
  CollectEditorInfo(mcu_path + '\\common\\interface\\service\\nvram')
  CollectEditorInfo(mcu_path + '\\pcore\\custom\\driver\\common')
  CollectEditorInfo(mcu_path + '\\pcore\\custom\\middleware\\common')
  CollectEditorInfo(mcu_path + '\\pcore\\custom\\modem\\common\\ps')
  if(DebugMode == True):
	WriteEditorInfo()
  del mcu_path
  print "Parsing editor.h success."
  
  # Merge custom_nvram_lid_cat.xml
  try:
    cat_path = os.path.realpath(build_path + '\\nvram_auto_gen\\custom_nvram_lid_cat.xml')
    doc = xml.dom.minidom.parse(cat_path)
    root = doc.documentElement
    nvitem = root.getElementsByTagName('NVRAMITEM')
    for i in range(0, len(nvitem)):
      def_val = nvitem[i].getElementsByTagName("DEFAULT_VALUE")
      def_fill = def_val[0].getAttribute("defaultByteFill")
      if(def_val[0].firstChild != None):
        def_fill = def_val[0].firstChild.data
        def_fill = def_fill.replace("0x","").replace(",","").replace(" ","").replace("\n","").replace("[","").replace("]","")
      lid = lid_info.getElementsByTagName(nvitem[i].getAttribute("id"))
      if(lid == []):
        lid = lid_doc.createElement(nvitem[i].getAttribute("id"))
        lid.setAttribute('LID_NAME', nvitem[i].getAttribute("id"))
        lid.setAttribute('record_size', nvitem[i].getAttribute("record_size"))
        lid.setAttribute('total_record', nvitem[i].getAttribute("total_record"))
        lid.setAttribute('defaultByteFill', def_fill)
        lid_info.appendChild(lid)
      else:
        lid[0].setAttribute('record_size', nvitem[i].getAttribute("record_size"))
        lid[0].setAttribute('total_record', nvitem[i].getAttribute("total_record"))
        lid[0].setAttribute('defaultByteFill', def_fill)
	if(DebugMode == True):
		WriteEditorInfo()
    del cat_path, nvitem, root, doc
    gc.collect()
    print "Load custom_nvram_lid_cat.xml success."
  except:
    print build_path + "\\nvram_auto_gen\\custom_nvram_lid_cat.xml load fail."
    os.system("pause")
    sys.exit()  
  
  # Merge nvram_reader.xml
  try:
    reader_path = os.path.realpath(cf.get("Config", "NVRAMReader_XML"))
    doc = xml.dom.minidom.parse(reader_path)
    root = doc.documentElement
    nveditor = root.getElementsByTagName('NVRamData')
    for i in range(0, len(nveditor)):
      record = nveditor[i].getElementsByTagName("Record")
      lid = lid_info.getElementsByTagName(nveditor[i].getAttribute("LID"))
      if(lid != []):
        for j in range(0, len(record)):
          lid[0].appendChild(record[j])
    WriteEditorInfo()
    del reader_path, nveditor, root, doc
    gc.collect()
    print "Load NVRAMReader XML success."
  except:
    print "NVRAMReader XML load fail."
    os.system("pause")
  #if(DebugMode == True):
  #	LoadEditorInfo()

  # Unzip MD database *.GZ
  try:
    dhl_path = os.path.realpath(build_path + '\\dhl\\database')
    dhl_path = glob.glob(dhl_path + "\\*.GZ")
    g=gzip.GzipFile(mode='rb', fileobj=open(dhl_path[0],'rb'))
    open(r'MDDB.XML','wb').write(g.read())
    g.close()
    del dhl_path, g
    gc.collect()
    print "Unzip MD database success."
  except:
    print "DHL database unzip fail."
    os.system("pause")
    sys.exit()  

  # Parsing MD database
  #try:
  MDDB = MDDBParser("MDDB.XML")
  if(DebugMode == False):
    os.remove(r'MDDB.XML')
  MDDB_len = MDDB.GetLidCount()
  Excel = ExcelEditor(ExcelOutput)

  print "Output version to Excel"
  #Excel.easyExcel
  Excel.easyExcel.setCell(1,1,2, MDDB.GetPlatformInfo("MTK_TARGET_SW_VERSION_FOR_CATCHER"))
  Excel.easyExcel.setCell(1,2,2, MDDB.GetPlatformInfo("@PROJECT_NAME@MTK"))
  for i in range(0, MDDB_len):
    if(MDDB.GetLidInfo(i) == -1):
      break
    filterDeep = CompareFilterConfig(filter, MDDB.lid_name)
    if(filterDeep == -1):
      continue
    entry = MDDB.GetLidStructure(int(filterDeep))
    if(len(entry) == 0):
      continue
    print "Output " + MDDB.lid_name + " to Excel"
    #for j in range(0, len(entry)):
    #  print "  " + entry[j].name + " : " + entry[j].description + ", " + str(entry[j].offset) + ", " + str(entry[j].size)
    startRow = Excel.CreateRow(MDDB.record_count, len(entry))
    #Excel.CurrentRow = 522 #debug
    #startRow = 30 #debug
    Excel.FillEntry(MDDB.lid_name, startRow, MDDB.record_count, entry)
    Excel.Save()
    
  #except:
  #  print "DHL parsing fail."
  #  sys.exit()
  del Excel
  print "Done."
  os.system("pause")
  sys.exit()