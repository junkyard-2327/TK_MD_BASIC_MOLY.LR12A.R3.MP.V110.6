#from imgtec import codescape
import sys
import time
import os
import gdb
import binascii
import Tkinter, tkFileDialog

app = None
dsp_header = 0x0
dsp_magic = "4d4d4d01"

# load dsp bin file
def load_dsp_bin(dsp_path):
    global dsp_header
    time_str = time.time()
    print "=== Start load dsp bin ==="
    print "Dsp bin path: " + dsp_path
    if(os.path.exists(dsp_path) == False):
        print "DSP bin doesn't exist: %s" %(dsp_path)
        print "[Error] Load DSP bin failed"
        return
    else:
        with open(dsp_path, "rb") as dsp_bin:
            magic_word = dsp_bin.read(4)
            if binascii.hexlify(magic_word) == dsp_magic:
                print "No header detected, continue"
            else:
                dsp_header = 0x200
                dsp_bin.seek(dsp_header, os.SEEK_SET)
                magic_word = dsp_bin.read(4)
                if binascii.hexlify(magic_word) == dsp_magic:
                    print "Header detected, skip first 512B"
                else:
                    print "DSP header detected at neither 0x0 nor 0x200"
                    print "Please check the bin is legal!"
                    print "[Error] Load DSP bin failed"
                    return
        gdb_cmd='thread 1'
        gdb.execute(gdb_cmd)
        ## a) need parsing: 0x13a0000 <dsp_bin_ro>
        ##symbol_name='&dsp_bin_ro'
        ##dsp_addr = gdb.parse_and_eval(symbol_name)
        ## b) need parsing: $3 = 0x13a0000
        ##gdb_cmd='p/x &dsp_bin_ro'
        ##dsp_addr = gdb.execute(gdb_cmd, False, True)
        symbol_name='dsp_bin_ro'
        dsp_addr = gdb.parse_and_eval(symbol_name)
        dsp_addr = str(dsp_addr.address).split(" ")
        dsp_addr = int(dsp_addr[0], 16) - dsp_header
        print hex(dsp_addr)
        gdb_cmd = 'monitor mips32 fastchannel 0 1'
        gdb.execute(gdb_cmd)
        gdb_cmd = 'set $cdmmbase=0x1fc1407'
        gdb.execute(gdb_cmd)
        gdb_cmd = 'set *0x1fc100d4=0x02030202'
        gdb.execute(gdb_cmd)
        gdb_cmd = " ".join(['restore', dsp_path, 'binary', hex(dsp_addr), hex(dsp_header)])
        print gdb_cmd
        gdb.execute(gdb_cmd)
        gdb_cmd = 'set *0x1fc100d4=0x02020202'
        gdb.execute(gdb_cmd)
    time_end = time.time()
    print("loading dsp is done .... Elapsed time: {:.3f} sec".format(time_end-time_str))


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

        dsp_button = Tkinter.Button(self, text=u"Load DSP bin =>", command=self.dsp_OnButtonClick)
        dsp_button.grid(column=0, row=4, sticky='W')

    def dsp_OnButtonClick(self):
        dsp_path = tkFileDialog.askopenfilename(**self.file_opt)
        if len(dsp_path) > 0:
            print "You chose %s" % dsp_path
        load_dsp_bin(dsp_path)
        self.quit()

    def quit(self):
        global app
        print "=== Close Easy Loader ==="
        app.destroy()

def load_dsp_gui():
    print "=== Start Easy Loader ==="
    global app 
    app = gui_tk(None)
    app.title('Easy Loader')
    app.mainloop()


if __name__ == "__main__":
    load_dsp_gui()

