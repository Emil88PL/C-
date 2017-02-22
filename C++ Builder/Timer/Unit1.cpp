//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "trayicon"
#pragma resource "*.dfm"
TForm1 *Form1;

        int s = 1210;



//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
       s--;


       int hours,min,sec;
       AnsiString h,m,se;

       hours = s / 3600;
       h = IntToStr(hours);
       if(hours<10)h="0"+h ;

       min = (s - hours * 3600) /60;
       m = IntToStr(min);
       if(min<10)m="0"+m ;

       sec = s - hours*3600 - min*60;
       se = IntToStr(sec);
       if(sec<10)se="0"+se ;

       Label1->Caption = h + ":" + m + ":" + se;

       if(s<=0){
           Label1->Caption="End of Time!";
           Timer1->Enabled = false;

       }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::TrayIcon1Click(TObject *Sender)
{
 Show();
  Application->BringToFront();
}
//---------------------------------------------------------------------------
