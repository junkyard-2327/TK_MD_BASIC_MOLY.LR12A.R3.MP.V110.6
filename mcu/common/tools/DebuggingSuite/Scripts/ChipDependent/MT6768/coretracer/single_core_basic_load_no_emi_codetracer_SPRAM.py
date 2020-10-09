# <$ Name: Region Script $>

import struct
import re
#import wx
import os
import time
##import CSUtils
##from imgtec import codescape
from time import sleep
##from CSUtils import DA
import gdb
import io
import sys
import Tkinter, tkFileDialog

def get_selected_inferior():
    """
    Return the selected inferior in gdb.
    """
    # Woooh, another bug in gdb! Is there an end in sight?
    # http://sourceware.org/bugzilla/show_bug.cgi?id=12212
    return gdb.inferiors()[0]
    
    selected_thread = gdb.selected_thread()
    
    for inferior in gdb.inferiors():
        for thread in inferior.threads():
            if thread == selected_thread:
                return inferior

class gui_tk(Tkinter.Tk):
    elf_path = ""
    sym_path = ""
    def __init__(self, parent):
        Tkinter.Tk.__init__(self, parent)
        self.file_opt = options = {}
        options['title'] = 'Choose ELF and sym file'
        self.parent = parent
        self.initialize()

    def initialize(self):
        self.grid()
        global elf_addr_entry
        elf_addr_entry = Tkinter.Entry(self)
        elf_addr_entry.grid(column=1, row=3)
        elf_addr_entry.insert(20, "Choose ELF and sym")
        
        elf_button = Tkinter.Button(self, text=u"Choose ELF file", command=self.elf_OnButtonClick)
        elf_button.grid(column=0, row=4, sticky='W')

        sym_button = Tkinter.Button(self, text=u"Choose sym file", command=self.sym_OnButtonClick)
        sym_button.grid(column=2, row=4, sticky='W')

        load_button = Tkinter.Button(self, text=u"Load all", command=self.load_OnButtonClick)
        load_button.grid(column=4, row=4, sticky='W')

    def elf_OnButtonClick(self):
        self.elf_path = tkFileDialog.askopenfilename(**self.file_opt)
        if len(self.elf_path) > 0:
            print "ELF file: %s" % self.elf_path

    def sym_OnButtonClick(self):
        self.sym_path = tkFileDialog.askopenfilename(**self.file_opt)
        if len(self.sym_path) > 0:
            print "sym file: %s" % self.sym_path

    def load_OnButtonClick(self):
        self.load_all_elf()

    def load_all_elf(self):
        if(os.path.exists(self.elf_path) == False):
            print "[Error] ELF doesn't exist: %s" %(self.elf_path)
            return
        else:
            print "Using ELD file: %s" %(self.elf_path)
                
        if(os.path.exists(self.sym_path) == False):
            print "[Error] sym file doesn't exist: %s" %(self.sym_path)
            return
        else:
            print "Using sym file: %s" %(self.sym_path)
        
        regexp_spram = r'(\s*)(\d*)(\s*)(.SPRAM\d)(\s*)([a-fA-F\d]+)(\s*)([a-fA-F\d]+)(\s*)([a-fA-F\d]+)(\s*)([a-fA-F\d]+)(.*)'
        pattern_spram = re.compile(regexp_spram)

        regexp_spram_zi = r'(\s*)(\d*)(\s*)(.SPRAM\d_ZI)(\s*)([a-fA-F\d]+)(\s*)([a-fA-F\d]+)(\s*)([a-fA-F\d]+)(\s*)([a-fA-F\d]+)(.*)'
        pattern_spram_zi= re.compile(regexp_spram_zi)

        regexp_rom = r'(\s*)(\d*)(\s*)(EXTSRAM)(\s*)([a-fA-F\d]+)(\s*)([a-fA-F\d]+)(\s*)([a-fA-F\d]+)(\s*)([a-fA-F\d]+)(.*)'
        pattern_rom = re.compile(regexp_rom)

        regexp_extsram_zi = r'(\s*)(\d*)(\s*)(EXTSRAM_ZI)(\s*)([a-fA-F\d]+)(\s*)([a-fA-F\d]+)(\s*)([a-fA-F\d]+)(\s*)([a-fA-F\d]+)(.*)'
        pattern_extsram_zi = re.compile(regexp_extsram_zi)

        ispram_size = [0,0]
        ispram_load_size = [0,0]
        ispram_offset = [0,0]
        ispram_addr = [0,0]

        dspram_size = [0,0]
        dspram_load_size = [0,0]
        dspram_load_addr = [0,0]
        dspram_offset = [0,0]
        dspram_addr = [0,0]

        dspram_zi_size = [0,0]
        dspram_zi_addr = [0,0]

        print "Finding ROM"
        with open(self.sym_path,'r') as sym_file:
            for line in sym_file:
                if " EXTSRAM " in line:
                    p = pattern_rom.search(line)
                    load_size = int(p.group(6),16)
                    load_addr = int(p.group(8),16)
                    load_offset = int(p.group(12),16)
                    break
            if load_size != 0:
                print "ROM found at offset: 0x%x, load address: 0x%x, size %d bytes" %(load_offset, load_addr, load_size)
            else:
                print "ROM is empty!"

        print "Finding EXTSRAM_ZI"
        with open(self.sym_path,'r') as sym_file:
            for line in sym_file:
                if " EXTSRAM_ZI " in line:
                    p = pattern_extsram_zi.search(line)
                    load_zi_size = int(p.group(6),16)
                    load_zi_addr = int(p.group(8),16)
                    break
            if load_size != 0:
                print "EXTSRAM_ZI found, address: 0x%x, size %d bytes" %(load_zi_addr, load_zi_size)
            else:
                print "EXTSRAM_ZI is empty!"

        print "Finding ISPRAM"
        with open(self.sym_path,'r') as sym_file:
            for core_idx in range(0, 2):
                for line in sym_file:
                    if "ISPRAM0A" in line:
                        continue
                    if "ISPRAM0B" in line:
                        continue
                    if "ISPRAM0C" in line:
                        continue
                    if "ISPRAM" + str(core_idx) in line:
                        p = pattern_spram.search(line)
                        ispram_load_size[core_idx] = int(p.group(6),16)
                        ispram_offset[core_idx] = int(p.group(12),16)
                        break
                if ispram_load_size[core_idx] != 0:
                    print "ISPRAM%d found at offset: 0x%x, size %d bytes" %(core_idx, ispram_offset[core_idx], ispram_load_size[core_idx])
                else:
                    print "ISPRAM%d is empty" %(core_idx)

        print "Finding DSPRAM"
        with open(self.sym_path,'r') as sym_file:
            for core_idx in range(0, 2):
                for line in sym_file:
                    if "DSPRAM" + str(core_idx) in line:
                        p = pattern_spram.search(line)
                        dspram_load_size[core_idx] = int(p.group(6),16)
                        dspram_load_addr[core_idx] = int(p.group(8),16)
                        dspram_offset[core_idx] = int(p.group(12),16)
                        break
                if dspram_load_size[core_idx] != 0:
                    print "DSPRAM%d found at offset: 0x%x, size %d bytes" %(core_idx, dspram_offset[core_idx], dspram_load_size[core_idx])
                else:
                    print "DSPRAM%d is empty" %(core_idx)

        print "Finding DSPRAM_ZI"
        with open(self.sym_path,'r') as sym_file:
            for core_idx in range(0, 2):
                for line in sym_file:
                    if "DSPRAM" + str(core_idx) + "_ZI" in line:
                        p = pattern_spram_zi.search(line)
                        dspram_zi_size[core_idx] = int(p.group(6),16)
                        dspram_zi_addr[core_idx] = int(p.group(8),16)
                        break
                if dspram_zi_size[core_idx] != 0:
                    print "DSPRAM%d_ZI found, address 0x%x, size %d bytes" %(core_idx, dspram_zi_addr[core_idx], dspram_zi_size[core_idx])
                else:
                    print "DSPRAM%d_ZI is empty" %(core_idx)

        gdb.execute('thread 1') 
        # load binary only on VPE0 of 0 core
        gdb.execute('set *0x1F000020=0xF') 
        gdb.execute('set *0x1F000090=0xA0000000') 
        gdb.execute('set *0x1F000098=0xE0000002') 
        gdb.execute('set *0x1F0000A0=0xC0000000') 
        gdb.execute('set *0x1F0000A8=0xC0000002') 
        gdb.execute('set *0xA0060060=0x03231111') 

        # SPRAM1 L2 override to UC
        gdb.execute('set *0x1F0000C0=0x9F200000') 
        gdb.execute('set *0x1F0000C8=0xFFE00055') 
        # L2 override to Cached
        gdb.execute('set *0x1F0000B0=0x90000000') 
        gdb.execute('set *0x1F0000B8=0xFFE00071') 

        # Diable WDT
        print("WDT disable ...")
        mdrgu = (int((gdb.parse_and_eval('*0xA00F0100'))) & 0xFFFFFFFC) | 0x55000000
        aprgu = (int((gdb.parse_and_eval('*0xC3670100'))) & 0xFFFFFFFE) | 0x55000000
        gdb.execute('set *0xA00F0100=0x{0:x}'.format(mdrgu))
        gdb.execute('set *0xC3670100=0x{0:x}'.format(aprgu))
        
        gdb.execute('set *0x1F000060=0x1E000001') 

        ispram_size[0] = 180*1024
        dspram_size[0] = 36*1024
        ispram_size[1] = 144*1024
        dspram_size[1] = 24*1024

        gdb.execute('set *0x1E0000C0=0x{0:x}'.format(ispram_size[0])) 
        gdb.execute('set *0x1E0000C4=0x{0:x}'.format(dspram_size[0])) 
        gdb.execute('set *0x1E0000C8=0x{0:x}'.format(ispram_size[1])) 
        gdb.execute('set *0x1E0000CC=0x{0:x}'.format(dspram_size[1])) 

        for core_idx in range(0, 2):
            gdb.execute('thread {0:d}'.format(core_idx + 1)) 

            gdb.execute('monitor mips32 fastchannel 0 0')

            ispram_addr[core_idx] = 0x9F000000 + (0x200000 * core_idx)
            dspram_addr[core_idx] = 0x9F100000 + (0x200000 * core_idx)

            # Enable CDMM
            C0_CDMMBase = int(gdb.parse_and_eval('$cdmmbase'))
            print "[Core%d] C0_CDMMBase before: 0x%x" % (core_idx, C0_CDMMBase)
            C0_CDMMBase = C0_CDMMBase | (1 << 10)
            gdb.execute('set $cdmmbase=0x{0:x}'.format(C0_CDMMBase)) 
            C0_CDMMBase = int(gdb.parse_and_eval('$cdmmbase'))
            print "[Core%d] C0_CDMMBase after: 0x%x" % (core_idx, C0_CDMMBase)

            # Make bank9 cached
            MPU_SEGMENT_CTRL2 = int(gdb.parse_and_eval('*0x1FC100D8'))
            print "[Core%d] MPU_SEGMENT_CTRL2 before: 0x%x" % (core_idx, MPU_SEGMENT_CTRL2)
            gdb.execute('set *0x1FC100D8=0x02020502') 
            MPU_SEGMENT_CTRL2 = int(gdb.parse_and_eval('*0x1FC100D8'))
            print "[Core%d] MPU_SEGMENT_CTRL2 after: 0x%x" % (core_idx, MPU_SEGMENT_CTRL2)

            # Enable Segment Ctrl
            MPU_CONFIG = int(gdb.parse_and_eval('*0x1FC100C8')) & 0xFFFFFFFF
            print "[Core%d] MPU_CONFIG before: 0x%x" % (core_idx, MPU_CONFIG)
            MPU_CONFIG = MPU_CONFIG | 0x80000000
            gdb.execute('set *0x1FC100C8=0x{0:x}'.format(MPU_CONFIG)) 
            MPU_CONFIG = int(gdb.parse_and_eval('*0x1FC100C8')) & 0xFFFFFFFF
            print "[Core%d] MPU_CONFIG after: 0x%x" % (core_idx, MPU_CONFIG)

            print "zero mpu configuration"
            address = 0x1FC100E0
            for i in range(0,48):
                gdb.execute('set *0x{0:x}=0'.format(address)) 
                address += 4
            
            # Configure SPRAM region MPU
            print "start mpu configuration"
            if core_idx == 0:
                gdb.execute('set *0x1FC100E0=0x9F300000') 
                gdb.execute('set *0x1FC100E4=0x0000C88A') 
                
                gdb.execute('set *0x1FC100E8=0x9F200000') 
                gdb.execute('set *0x1FC100EC=0x0000C882')
                
                gdb.execute('set *0x1FC100F0=0x9F100000') 
                gdb.execute('set *0x1FC100F4=0x0000C88A') 
                
                gdb.execute('set *0x1FC100F8=0x9F000000') 
                gdb.execute('set *0x1FC100FC=0x0000C802') 
                
                gdb.execute('set *0x1FC10100=0x90000000')
                gdb.execute('set *0x1FC10104=0x0000C802')
                
                gdb.execute('set *0x1FC10108=0x00000000') 
                gdb.execute('set *0x1FC1010C=0x0000D03A')
            else:
                gdb.execute('set *0x1FC100E0=0x9F300000') 
                gdb.execute('set *0x1FC100E4=0x0000C88A') 
                
                gdb.execute('set *0x1FC100E8=0x9F200000') 
                gdb.execute('set *0x1FC100EC=0x0000C882')
                
                gdb.execute('set *0x1FC100F0=0x9F100000') 
                gdb.execute('set *0x1FC100F4=0x0000C88A') 
                
                gdb.execute('set *0x1FC100F8=0x9F000000') 
                gdb.execute('set *0x1FC100FC=0x0000C802') 
                
                gdb.execute('set *0x1FC10100=0x90000000')
                gdb.execute('set *0x1FC10104=0x0000C802')
                
                gdb.execute('set *0x1FC10108=0x00000000') 
                gdb.execute('set *0x1FC1010C=0x0000D03A')

            gdb.execute('thread {0:d}'.format(core_idx + 1))
            gdb.execute('set $status=0x0')
            gdb.execute('set $ebase=0x9ff{0:x}0800'.format(4*core_idx))
            #gdb.execute('set $config5=0x0')
            C0_CAUSE = int(gdb.parse_and_eval("$cause"))
            gdb.execute('set $cause=0x{0:x}'.format(C0_CAUSE & 0xffbfffff))
            print "Initializind Core %d SPRAM. ISPRAM addr 0x%x, DSPRAM addr 0x%x" %(core_idx, ispram_addr[core_idx], dspram_addr[core_idx])

            C0_ERRCTL = int(gdb.parse_and_eval("$errctl"))
            gdb.execute('set $errctl=0x{0:x}'.format(C0_ERRCTL | (1 << 28)))
            
            #Init SPRAM base addr
            gdb.execute('set $dtaglo=0x{0:x}'.format(dspram_addr[core_idx] | (1 << 7)))
            gdb.execute('monitor mips32 cacheop 0 0 9')
            gdb.execute('set $itaglo=0x{0:x}'.format(ispram_addr[core_idx] | (1 << 7)))
            gdb.execute('monitor mips32 cacheop 0 0 8')
            #gdb.execute('handle SIGTRAP pass')
            #gdb.execute('set $pc=0x90000000')
            gdb.execute('set $ra=0x9ff{0:x}0000'.format(4*core_idx))
            #return
            gdb.execute('set $errctl=0x{0:x}'.format(C0_ERRCTL))
            #return
            # Load memory init code
            if True:#load_size != 0:
                #with io.open(self.elf_path, 'rb',0) as elf_file:
                #    elf_file.seek(load_offset, 1)
                #    gdb.selected_inferior().write_memory(load_addr, elf_file.read(load_size), load_size)
                

                tmp_ispram_array = [0x8d050000,0x8d060004,0x4085e001,0x4086e801,0x000000c0,0xbd2c0000,0x0000000f,0x21080008,0x21290008,0x214afff8,0x1540fff5,0x00000000,0x03e00008,0x00000000,0xad200000,0x21290004,0x214afffc,0x1540fffc,0x00000000,0x03e00008,0x00000000,0x00000000]
                with io.open(self.elf_path, 'rb',0) as elf_file:
                    elf_file.seek(ispram_offset[0]+0x300, 1)
                    #for i in range(0, 0x50/4):
                    #    bytesFromELF = elf_file.read(4)
                    #    print "Read from ELF: 0x%x", bytesFromELF.encode("hex")
                    #    gdb.selected_inferior().write_memory(ispram_addr[0]+(i*0x4), bytesFromELF, 0x4)
                    #    print "offset 0x%x, value: %s\n" % (i*0x4, bytesFromELF.encode("hex"))
                    gdb.selected_inferior().write_memory(ispram_addr[0]+0x300, elf_file.read(0x54), 0x54)
                ##### try errCtrl + cacheop on ispram #####
                #C0_ERRCTL = int(gdb.parse_and_eval("$errctl"))
                #gdb.execute('set $errctl=0x{0:x}'.format(C0_ERRCTL | (1 << 28)))

                #tmp_ispram_addr = 0x9f000300
                #
                #print "size(tmp_ispram_array) = %d" %(len(tmp_ispram_array))
                #tmp_gpr_base = int(gdb.parse_and_eval("$t8"))
                #for i in range(0, 11):
                #    print "iidatahi = 0x%x, idatalo=0x%x" %(tmp_ispram_array[2*i+1],tmp_ispram_array[2*i])
                #    gdb.execute('set $t8=0x{0:x}'.format(tmp_ispram_addr))
                #    gdb.execute('set $idatahi=0x{0:x}'.format(tmp_ispram_array[2*i+1]))
                #    gdb.execute('set $idatalo=0x{0:x}'.format(tmp_ispram_array[2*i]))
                #    gdb.execute('monitor mips32 cacheop 24 0 12')
                #    #gdb.execute('handle SIGTRAP pass')
                #    #gdb.execute('set $pc=0x90000000')
                #    gdb.execute('set $ra=0x9ff{0:x}0000'.format(4*core_idx))
                #    #return
                #    tmp_ispram_addr = tmp_ispram_addr + 0x8
                #gdb.execute('set $errctl=0x{0:x}'.format(C0_ERRCTL))
                ##### try errCtrl + cacheop on ispram #####
                print "Init code Loaded"
            #gdb.execute('set $errctl=0x{0:x}'.format(C0_ERRCTL | (1 << 28)))
            #time.sleep(1)
            gdb.execute('info threads')
            gdb.execute('d')
            if ispram_size[core_idx] != 0:
                C0_ERRCTL = int(gdb.parse_and_eval("$errctl"))
                gdb.execute('set $errctl=0x{0:x}'.format(C0_ERRCTL | (1 << 28)))
                load_len = int(8 * round(ispram_load_size[core_idx]/8)) + 8
                print "Load ISPRAM%d to 0x%x, size: %d" %(core_idx, ispram_addr[core_idx], load_len)
                for load_round in range(0,6):
                    print "Load ISPRAM%d round %d to 0x%x"%(core_idx, load_round, ispram_addr[core_idx] + (dspram_size[core_idx] * load_round))                
                    gdb.execute('set $t0=0x{0:x}'.format(dspram_addr[core_idx]))
                    #time.sleep(1)
                    gdb.execute('set $t1=0x{0:x}'.format(ispram_addr[core_idx] + (dspram_size[core_idx] * load_round)))
                    #time.sleep(1)
                    if load_len >= dspram_size[core_idx]:
                        gdb.execute('set $t2=0x{0:x}'.format(dspram_size[core_idx]))
                        time.sleep(1)
                        print "Load binary to DSPRAM"
                        with io.open(self.elf_path, 'rb',0) as elf_file:
                            elf_file.seek(ispram_offset[core_idx] + (dspram_size[core_idx] * load_round), 1)
                            print "Target:0x%x size:0x%x" % (dspram_addr[core_idx],dspram_size[core_idx]) 
                            gdb.execute('info threads')
                            get_selected_inferior().write_memory(dspram_addr[core_idx], elf_file.read(dspram_size[core_idx]), dspram_size[core_idx])
                            print "DSPRAM chunk loaded"
                        time.sleep(1)
                        gdb.execute('hb *0x9ff{0:x}0008 thread {1:x}'.format(4*core_idx,core_idx+1))
                        gdb.execute('set $pc=0x9ff{0:x}000c'.format(4*core_idx))
                        gdb.execute('set $gp=ispram_load_code')
                        print "Load Done"
                        gdb.execute('info b')
                        gdb.execute('p /x $pc')
                        gdb.execute('p /x $gp')

                        gdb.execute('c')
                        #return
                        gdb.execute('d')                      
                        #print "sleep done"
                        load_round = load_round + 1
                        load_len = load_len - dspram_size[core_idx]
                    elif load_len != 0:
                        gdb.execute('set $t2=0x{0:x}'.format(load_len))
                        with io.open(self.elf_path, 'rb') as elf_file:
                            elf_file.seek(ispram_offset[core_idx] + (dspram_size[core_idx] * load_round), 1)
                            print "Target:0x%x size:0x%x" % (dspram_addr[core_idx],load_len) 
                            get_selected_inferior().write_memory(dspram_addr[core_idx], elf_file.read(load_len), load_len)
                        gdb.execute('set $pc=0x9ff{0:x}000c'.format(4*core_idx))
                        gdb.execute('set $gp=ispram_load_code')
                        gdb.execute('hb *0x9ff{0:x}0008 thread {1:x}'.format(4*core_idx,core_idx+1))                      
                        gdb.execute('c')

                        gdb.execute('d')
                        break
                gdb.execute('set $errctl=0x{0:x}'.format(C0_ERRCTL))
                print "Load ISPRAM%d done"%(core_idx)
            else:
                print "ISPRAM%d image is empty"%(core_idx)
                
        
        for core_idx in range(0, 2):
            gdb.execute('thread 1') 
            print "Loading DSPRAM%d image to: 0x%x" %(core_idx, dspram_load_addr[core_idx])
            if dspram_load_size[core_idx] != 0:
                with io.open(self.elf_path, 'rb') as elf_file:
                    elf_file.seek(dspram_offset[core_idx], 1)
                    get_selected_inferior().write_memory(dspram_load_addr[core_idx], elf_file.read(dspram_load_size[core_idx]), dspram_load_size[core_idx])
                # Load DSPRAM always on core 0 to ensure L1 cache coherency
                #gdb.execute('thread 1') 

            print "Initializing DSPRAM%d_ZI to: 0x%x" %(core_idx, dspram_zi_addr[core_idx])
            if dspram_zi_size[core_idx] != 0:
                # Do DSPRAM ZI always on core 0 to ensure L1 cache coherency
                gdb.execute('thread 1') 
                gdb.execute('set $t1=0x{0:x}'.format(dspram_zi_addr[core_idx]))
                gdb.execute('set $t2=0x{0:x}'.format(dspram_zi_size[core_idx]))
                gdb.execute('set $pc=0x9ff{0:x}000c'.format(4*core_idx))
                gdb.execute('set $gp=dspram_zi_loop')
                gdb.execute('hb *0x9ff{0:x}0008 thread {1:x}'.format(4*core_idx,core_idx+1))                      
                gdb.execute('c')
                gdb.execute('d')
                #time.sleep(4)
            print "Load DSPRAM%d image done" %(core_idx)
            #if core_idx != 0:
            #    gdb.execute('thread %d'%(core_idx + 1)) 
            #    gdb.execute('set $pc=0x9FF40000')

        
        gdb.execute('thread 1') 
        #print "Load and lock L2 cache done"
        gdb.execute('set *0x1FC10100=0x90000000')
        gdb.execute('set *0x1FC10104=0x0000C805')
        
        gdb.execute('thread 2') 
        #print "Load and lock L2 cache done"
        gdb.execute('set *0x1FC10100=0x90000000')
        gdb.execute('set *0x1FC10104=0x0000C805')
        
        gdb.execute('thread 1') 
        #print "Load and lock L2 cache from 0x%x size 0x%x" %(load_zi_addr, load_zi_size)
        #return
        '''
        if load_zi_size != 0:
            print "EXTSRAM_ZI found, address: 0x%x, size %d bytes" %(load_zi_addr, load_zi_size)
            load_zi_size = int(64 * round(load_zi_size/64))
            print "EXTSRAM_ZI found, address: 0x%x, size %d bytes" %(load_zi_addr, load_zi_size)
            gdb.execute('hb *0x9ff00008 thread 1')
            
            
            while load_zi_size > 0:
                print "WRITE 64 bytes from: 0x%x. STILL %d bytes to go" %(load_zi_addr, load_zi_size)
                gdb.execute('info threads')
                gdb.execute('set $t1=0x{0:x}'.format(load_zi_addr))
                gdb.execute('set $t2=0x40')
                gdb.execute('set $pc=0x9ff0000c')
                gdb.execute('set $gp=l2_zi_loop')
                load_zi_addr = load_zi_addr + 0x40
                load_zi_size = load_zi_size - 0x40
                gdb.execute('c')
            
            #load_zi_size = 65536
            #gdb.execute('info threads')
            #gdb.execute('set $t1=0x{0:x}'.format(load_zi_addr))
            #gdb.execute('set $t2=0x{0:x}'.format(load_zi_size))
            #gdb.execute('set $pc=0x9ff0000c')
            #gdb.execute('set $gp=l2_zi_loop')
            
            #return                   
            gdb.execute('c')
            gdb.execute('d')
            #time.sleep(60)

            return
        '''
        gdb.execute('set $pc=INT_Vectors')
        gdb.execute('hb *0x9f005180')
        #gdb.execute('hb itc_init thread 2')
        print "All loading is done"

    def my_quit(self):
        global app
        print "=== Close Easy Loader ==="
        app.destroy()

if __name__ == "__main__":
    app = gui_tk(None)
    app.title("Load ELF")
    app.mainloop()

