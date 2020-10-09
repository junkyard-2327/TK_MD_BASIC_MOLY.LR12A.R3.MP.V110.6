# <$ Name: Region Script $>

import wx
import os
from imgtec import codescape
from time import sleep

ex_stop_symbol= "general_ex_handler"
class set_ex_bk(wx.Frame):
    def __init__(self, parent):
        wx.Frame.__init__(self, parent, title="Set ex_bk")

        # Initialize UI
        button_width = 80
        border_size  = 5

        self.set_ex_bk_btn  = wx.Button(self, pos=(0, 0), label='Set EX_BK', size=(button_width,-1))   
        self.Bind(wx.EVT_BUTTON, self.on_set_ex_bk_button, self.set_ex_bk_btn)

    # set exception breakpoint
    def on_set_ex_bk_button(self, event):
                
        print "Start initialization ...."
        
        da = codescape.GetFirstProbe()
   
        for idx in range(0, 6):
                core_idx = idx / 2   
                vpe_idx  = idx % 2     	
                # stop threads
                thread = da.cores[core_idx].hwthreads[vpe_idx]
                #thread.Stop()
                # destroy all breakpoints
                #bks = thread.GetBreakpoints()
                #bks.DestroyAll()
                # set hardware breakpoint
                thread.CreateCodeBreakpoint(ex_stop_symbol, 2)
                print "core %d, vpe %d set HW bkpts to %s" %(core_idx, vpe_idx, ex_stop_symbol)
        print "All loading is done"

if __name__ == "__main__":
    app = wx.App()
    frame = set_ex_bk(None);
    frame.Show()
    app.MainLoop()
