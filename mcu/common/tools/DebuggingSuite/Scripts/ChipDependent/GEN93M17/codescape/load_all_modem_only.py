# <$ Name: Region Script $>

import wx
import os
from imgtec import codescape
from time import sleep

umoly_path = ""
class load_all_elf(wx.Frame):
    def __init__(self, parent):
        wx.Frame.__init__(self, parent, title="[ModemOnly]LoadBin&Symbol")

        # Initialize UI
        button_width = 80
        border_size  = 5

        self.load_all_elf_btn  = wx.Button(self, pos=(0, 0), label='Load all', size=(button_width,-1))   
        self.Bind(wx.EVT_BUTTON, self.on_load_all_elf_button, self.load_all_elf_btn)

    # load all elf
    def on_load_all_elf_button(self, event):
        fileDialog = wx.FileDialog(self)
        fileDialog.ShowModal()
        umoly_path = fileDialog.GetPath()
        fileDialog.Destroy()
        
        print "Start initialization ...."
        print "Loading image: " + umoly_path
        da = codescape.GetFirstProbe()
   
        for core_idx in range(0, 3):
            if(os.path.exists(umoly_path) == False):
                print "[Error] UMOLY ELF doesn't exist: %s" %(umoly_path)
                break

            # stop all threads
            #da.cores[core_idx].StopAll()

            if(core_idx == 0):
                # load binary only on VPE0 of 0 core
                thread = da.cores[core_idx].hwthreads[0]
                thread.Stop()
                thread.LoadProgramFile(umoly_path, False, 0x83, True, "")
                print "[Core%d,VPE0] Load ELF successfully: %s" %(core_idx, umoly_path)
                
                # set start addres
                (sym, val) = thread.GetSymbolAndValue("INT_Vectors")
                thread.WriteRegister('pc', val)
                print "[Core%d,VPE0] Config PC=%s=0x%x" %(core_idx, "INT_Vectors", val)
            else:
                thread = da.cores[core_idx].hwthreads[0]
                thread.Stop()
                thread.LoadProgramFile(umoly_path, False, codescape.da_types.LoadType.symbols, False, "")
                print "[Core%d,VPE0] Load ELF successfully: %s" %(core_idx, umoly_path)

            # set VPE1
            thread = da.cores[core_idx].hwthreads[1]
            thread.Stop()
            thread.LoadProgramFile(umoly_path, False, codescape.da_types.LoadType.symbols, False, "")
            print "[Core%d,VPE1] Load ELF successfully: %s" %(core_idx, umoly_path)


        print "All loading is done"

if __name__ == "__main__":
    app = wx.App()
    frame = load_all_elf(None);
    frame.Show()
    app.MainLoop()
