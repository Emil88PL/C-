//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

        int x=-8;
        int y=-8;
        int leftToWin = 12;

        bool hit (TImage * ball, TImage * brick)
        {
        if (ball->Left >= brick->Left-ball->Width &&
            ball->Left <= brick->Left+brick->Width &&
            ball->Top >= brick->Top-ball->Height &&
            ball->Top <= brick->Top+brick->Height)
            {
             return true ;
            }
        else return false;
        }


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1_ballTimer(TObject *Sender)
{

 b->Left+=x;
 b->Top+=y;

  //wall left
  if(b->Left-5 <= background1->Left) x = -x;

  //wall top
  if(b->Top-5 <= background1->Top) y = -y;

  //wall right
  if(b->Left+b->Width+5 >= background1->Width) x = -x;


  //game over
  if(b->Top >= p->Top+p->Height+15){
      Timer1_ball->Enabled = false;
       b->Visible = false;
       Button1->Caption = "Game Over! Play again?";
       Button1->Visible = true;
  }else if (b->Left > p->Left-b->Width/2 && b->Left < p->Left+p->Width &&
        b->Top+b->Height > p->Top)
        {
        if  (y>0) y = -y;
        }

  if(leftToWin <= 0){
   Timer1_ball->Enabled = false;
   b->Visible = false;
   Button1->Caption = "You win! Play again?" ;
   Button1->Visible = true;
  }
     //brick1
     if(hit(b,Image1) && Image1->Visible == true){
     x = -x; y = -y; Image1->Visible = false; leftToWin--;}

     //brick2
     if(hit(b,Image2) && Image2->Visible == true){
     x = -x; y = -y; Image2->Visible = false; leftToWin--;}

     //brick3
     if(hit(b,Image3) && Image3->Visible == true){
     x = -x; y = -y; Image3->Visible = false; leftToWin--;}

     //brick4
     if(hit(b,Image4) && Image4->Visible == true){
     x = -x; y = -y; Image4->Visible = false; leftToWin--;}

     //brick5
     if(hit(b,Image5) && Image5->Visible == true){
     x = -x; y = -y; Image5->Visible = false; leftToWin--;}

     //brick6
     if(hit(b,Image6) && Image6->Visible == true){
     x = -x; y = -y; Image6->Visible = false; leftToWin--;}

     //brick7
     if(hit(b,Image7) && Image7->Visible == true){
     x = -x; y = -y; Image7->Visible = false; leftToWin--;}

     //brick8
     if(hit(b,Image8) && Image8->Visible == true){
     x = -x; y = -y; Image8->Visible = false; leftToWin--;}

     //brick9
     if(hit(b,Image9) && Image9->Visible == true){
     x = -x; y = -y; Image9->Visible = false; leftToWin--;}

     //brick10
     if(hit(b,Image10) && Image10->Visible == true){
     x = -x; y = -y; Image10->Visible = false; leftToWin--;}

     //brick11
     if(hit(b,Image11) && Image11->Visible == true){
     x = -x; y = -y; Image11->Visible = false; leftToWin--;}

     //brick12
     if(hit(b,Image12) && Image12->Visible == true){
     x = -x; y = -y; Image12->Visible = false; leftToWin--;}




}
//---------------------------------------------------------------------------
void __fastcall TForm1::leftTimer(TObject *Sender)
{
     if(p->Left > 10) p->Left -= 10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::rightTimer(TObject *Sender)
{
      if(p->Left+p->Width < background1->Width -10)  p->Left += 10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if (Key == VK_LEFT) left->Enabled = true;
    if (Key == VK_RIGHT) right->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if (Key == VK_LEFT) left->Enabled = false;
    if (Key == VK_RIGHT) right->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
      b->Left = 50;
      b->Top = 50;

      b->Visible = true;
      x=-8; y=-8;
      Timer1_ball->Enabled = true;

      Button1-> Visible = false;
      leftToWin = 12;

      Image1->Visible = true; Image5->Visible = true; Image9->Visible = true;
      Image2->Visible = true; Image6->Visible = true; Image10->Visible = true;
      Image3->Visible = true; Image7->Visible = true; Image11->Visible = true;
      Image4->Visible = true; Image8->Visible = true; Image12->Visible = true;

}
//---------------------------------------------------------------------------
