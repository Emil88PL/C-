//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

AnsiString  nazwa="";


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Open1Click(TObject *Sender)
{
         if (OpenDialog1->Execute()){
         try{
              tresc -> Lines->LoadFromFile(OpenDialog1->FileName);
              nazwa=OpenDialog1->FileName;
            }
        catch(...){
          ShowMessage("There is no file with that name");
        }
       }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Saveus1Click(TObject *Sender)
{
          if (SaveDialog1->Execute()){
         try{
              tresc -> Lines->SaveToFile(SaveDialog1->FileName);
              nazwa=SaveDialog1->FileName;
            }
        catch(...){
          ShowMessage("Save Error");
        }
       }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Save1Click(TObject *Sender)
{
        if (nazwa !=""){

        tresc ->Lines->SaveToFile(nazwa);
        }else{
         Form1->Saveus1Click(MainMenu1);
        }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Nowy1Click(TObject *Sender)
{
          if(Application->MessageBox("Create new file?", "Question",MB_YESNOCANCEL | MB_ICONQUESTION) == IDYES){
               tresc->Lines->Clear();
                 nazwa="";
          }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::trescKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Shift.Contains(ssCtrl)){
           if((Key == 's') || (Key == 'S')){
           Form1->Save1Click(MainMenu1);
           }
           if ((Key == 'n') || (Key == 'N')){
            Form1->Open1Click(MainMenu1);
           }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Exit1Click(TObject *Sender)
{


  if(Application->MessageBox("Close file?",
  "Question",MB_YESNO | MB_ICONQUESTION) == IDYES){
  Application->Terminate();
  }


}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  if(Application->MessageBox("Close file?",
  "Question",MB_YESNO | MB_ICONQUESTION) == IDNO){
  Action=caNone;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Cut1Click(TObject *Sender)
{
        tresc->CutToClipboard() ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CopyCtrlC1Click(TObject *Sender)
{
        tresc->CopyToClipboard()  ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PasteCtrlV1Click(TObject *Sender)
{
 tresc->PasteFromClipboard()   ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::WordWrap1Click(TObject *Sender)
{
   if(WordWrap1->Checked==true){
       WordWrap1->Checked=false;
       tresc->WordWrap=false;
       tresc->ScrollBars = ssBoth;
   }else{
    WordWrap1->Checked=true;
      tresc->WordWrap=true;
      tresc->ScrollBars=ssVertical;
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Font1Click(TObject *Sender)
{
     if(FontDialog1->Execute()){
       tresc->Font->Name = FontDialog1->Font->Name;
       tresc->Font->Color = FontDialog1->Font->Color;
       tresc->Font->Size = FontDialog1->Font->Size;
       tresc->Font->Style = FontDialog1->Font->Style;
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::About1Click(TObject *Sender)
{
        Form2->ShowModal();


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Web1Click(TObject *Sender)
{
    ShellExecute(NULL, "open", "https://github.com/Emil88PL/Cpp", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
