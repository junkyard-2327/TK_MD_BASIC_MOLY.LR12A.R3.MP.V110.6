#from imgtec import codescape
import sys
import time
import os
import gdb
import Tkinter, tkFileDialog

#get full path of python script
file_path = os.path.dirname(os.path.abspath(__file__))
#append python path into system path
sys.path.append(file_path)

import load_dsp

app = None

# load all elf
def load_all_elf(elf_path):
    time_str = time.time()
    print "=== Start Loading ELF ==="
    print "Image path: " + elf_path
    if(os.path.exists(elf_path) == False):
        print "[Error] UMOLY ELF doesn't exist: %s" %(elf_path)
    else:
        elf_path = elf_path.replace('\\', '/')
        gdb_cmd = 'symbol-file '+ elf_path
        print gdb_cmd
        gdb.execute(gdb_cmd)
        print "Load SYMBOL successfully"
        # Add debug point
        gdb_cmd = 'hb general_ex_vector'
        gdb.execute(gdb_cmd)
        gdb_cmd = 'lo '+ elf_path
        print gdb_cmd
        gdb.execute(gdb_cmd)
        print "Load ELF successfully"
    time_end = time.time()
    print("All loading is done .... Elapsed time: {:.3f} sec".format(time_end-time_str))

# load all symbol only
def load_all_sym(elf_path):
    time_str = time.time()
    print "=== Start Loading SYMBOL ==="
    print "Image path: " + elf_path
    if(os.path.exists(elf_path) == False):
        print "[Error] UMOLY ELF doesn't exist: %s" %(elf_path)
    else:
        elf_path = elf_path.replace('\\', '/')
        gdb_cmd = 'symbol-file '+ elf_path
        print gdb_cmd
        gdb.execute(gdb_cmd)
        print "Load SYMBOL successfully"
        # Add debug point
        gdb_cmd = 'hb general_ex_vector'
        gdb.execute(gdb_cmd)
    time_end = time.time()
    print("All loading is done .... Elapsed time: {:.3f} sec".format(time_end-time_str))

# load dsp bin file
#def load_dsp_bin(dsp_path):
#    time_str = time.time()
#    print "=== Start load dsp bin ==="
#    print "Dsp bin path: " + dsp_path
#    if(os.path.exists(dsp_path) == False):
#        print "[Error] UMOLY DSP binary doesn't exist: %s" %(dsp_path)
#    else:
#        gdb_cmd='thread 1'
#        gdb.execute(gdb_cmd)
#        ## a) need parsing: 0x13a0000 <dsp_bin_ro>
#        ##symbol_name='&dsp_bin_ro'
#        ##dsp_addr = gdb.parse_and_eval(symbol_name)
#        ## b) need parsing: $3 = 0x13a0000
#        ##gdb_cmd='p/x &dsp_bin_ro'
#        ##dsp_addr = gdb.execute(gdb_cmd, False, True)
#        symbol_name='dsp_bin_ro'
#        dsp_addr = gdb.parse_and_eval(symbol_name)
#        dsp_addr = str(dsp_addr.address).split(" ")
#        gdb_cmd = 'restore ' + dsp_path + ' binary ' + str(dsp_addr[0])
#        print gdb_cmd
#        gdb.execute(gdb_cmd)
#    time_end = time.time()
#    print("loading dsp is done .... Elapsed time: {:.3f} sec".format(time_end-time_str))

def thread_memory_Write(mem_addr, set_value):
		gdb_cmd = 'set *' + str(mem_addr) + '=' + str(set_value)
		gdb.execute(gdb_cmd)

def thread_memory_Read(mem_addr):
		gdb_cmd = 'x/x ' + str(mem_addr)
		mem_value = gdb.execute(gdb_cmd, to_string=True)
		mem_value = mem_value[12:23]
		hex_int = int(mem_value, 16)
		return hex_int


class gui_tk(Tkinter.Tk):
    def __init__(self, parent):
        Tkinter.Tk.__init__(self, parent)
        elf_path = ""
        dsp_path = ""
        dsp_addr = ""
        self.file_opt = options = {}
        options['title'] = 'Choose a file'
        self.parent = parent
        self.initialize()

    def initialize(self):
        self.grid()
        elf_button = Tkinter.Button(self, text=u"Load elf", command=self.elf_OnButtonClick)
        elf_button.grid(column=0, row=1, sticky='W')

        sym_button = Tkinter.Button(self, text=u"Load symbol", command=self.sym_OnButtonClick)
        sym_button.grid(column=0, row=2, sticky='W')

        dsp_button = Tkinter.Button(self, text=u"Load DSP bin", command=self.dsp_OnButtonClick)
        dsp_button.grid(column=0, row=3, sticky='W')

    def elf_OnButtonClick(self):
        elf_path = tkFileDialog.askopenfilename(**self.file_opt)
        if len(elf_path) > 0:
            print "You chose %s" % elf_path
        load_all_elf(elf_path)
        self.quit()

    def sym_OnButtonClick(self):
        elf_path = tkFileDialog.askopenfilename(**self.file_opt)
        if len(elf_path) > 0:
            print "You chose %s" % elf_path
        load_all_sym(elf_path)
        self.quit()

    def dsp_OnButtonClick(self):
        dsp_path = tkFileDialog.askopenfilename(**self.file_opt)
        if len(dsp_path) > 0:
            print "You chose %s" % dsp_path
        load_dsp.load_dsp_bin(dsp_path)
        self.quit()

    def quit(self):
        global app
        print "=== Close Easy Loader ==="
        app.destroy()

if __name__ == "__main__":
    print "=== Start Easy Loader ==="
    app = gui_tk(None)
    app.title('Easy Loader')
    app.mainloop()

