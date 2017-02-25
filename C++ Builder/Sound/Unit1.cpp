//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "mmsystem.h"    //sound2 1/2

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
      MediaPlayer1->Play();     //sound1 1/4
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
       MediaPlayer1->FileName =  "snd/sound.wav";     //sound1 2/4
       MediaPlayer1->Open();                          //sound1 3/4


}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
   MediaPlayer1->Close();   //sound1 4/4
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
        sndPlaySound("snd/sound.wav", SND_ASYNC);    //sound2 2/2
}
//---------------------------------------------------------------------------
