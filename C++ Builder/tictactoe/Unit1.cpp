//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

        char pp1,pp2,pp3,pp4,pp5,pp6,pp7,pp8,pp9;
        char who;

        void check(){
          if((pp1==pp2 && pp2==pp3 && pp1 != 'n') ||  //horizontal
            (pp4==pp5 && pp5==pp6 && pp4 != 'n') ||
            (pp7==pp8 && pp8==pp9 && pp7 != 'n') ||
            (pp1==pp4 && pp4==pp7 && pp7 != 'n') ||  //vertical
            (pp2==pp5 && pp5==pp8 && pp2 != 'n') ||
            (pp3==pp6 && pp6==pp9 && pp3 != 'n') ||

            (pp1==pp5 && pp5==pp9 && pp1 != 'n') ||
            (pp3==pp5 && pp5==pp7 && pp7 != 'n')){
               char* w;
               if (who=='x') w="The winner is O!";
               else w="The winner is X!";

               Application->MessageBox(w, "End Game", MB_OK);
            }

        }

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
   p1->Picture->LoadFromFile("img/nothing.bmp");
   p2->Picture->LoadFromFile("img/nothing.bmp");
   p3->Picture->LoadFromFile("img/nothing.bmp");
   p4->Picture->LoadFromFile("img/nothing.bmp");
   p5->Picture->LoadFromFile("img/nothing.bmp");
   p6->Picture->LoadFromFile("img/nothing.bmp");
   p7->Picture->LoadFromFile("img/nothing.bmp");
   p8->Picture->LoadFromFile("img/nothing.bmp");
   p9->Picture->LoadFromFile("img/nothing.bmp");
   t->Picture->LoadFromFile("img/osmall.bmp");

     pp1='n';   pp4='n';  pp7='n';
     pp2='n';   pp5='n';  pp8='n';
     pp3='n';   pp6='n';  pp9='n';

     who = 'o';


     p1->Enabled = true;
     p2->Enabled = true;
     p3->Enabled = true;
     p4->Enabled = true;
     p5->Enabled = true;
     p6->Enabled = true;
     p7->Enabled = true;
     p8->Enabled = true;
     p9->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p1Click(TObject *Sender)
{
   if(pp1=='n'){
    if(who=='o'){
       p1->Picture->LoadFromFile("img/o.bmp");
       pp1='o';
       who='x';
       t->Picture->LoadFromFile("img/xsmall.bmp");

    }else{
        p1->Picture->LoadFromFile("img/x.bmp");
        pp1='x';
        who='o';
        t->Picture->LoadFromFile("img/osmall.bmp");
    }
     p1->Enabled=false;
     check();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p2Click(TObject *Sender)
{
   if(pp2=='n'){
    if(who=='o'){
       p2->Picture->LoadFromFile("img/o.bmp");
       pp2='o';
       who='x';
       t->Picture->LoadFromFile("img/xsmall.bmp");

    }else{
        p2->Picture->LoadFromFile("img/x.bmp");
        pp2='x';
        who='o';
        t->Picture->LoadFromFile("img/osmall.bmp");
    }
     p2->Enabled=false;
     check();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p3Click(TObject *Sender)
{
   if(pp3=='n'){
    if(who=='o'){
       p3->Picture->LoadFromFile("img/o.bmp");
       pp3='o';
       who='x';
       t->Picture->LoadFromFile("img/xsmall.bmp");

    }else{
        p3->Picture->LoadFromFile("img/x.bmp");
        pp3='x';
        who='o';
        t->Picture->LoadFromFile("img/osmall.bmp");
    }
     p3->Enabled=false;
     check();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p4Click(TObject *Sender)
{
   if(pp4=='n'){
    if(who=='o'){
       p4->Picture->LoadFromFile("img/o.bmp");
       pp4='o';
       who='x';
       t->Picture->LoadFromFile("img/xsmall.bmp");

    }else{
        p4->Picture->LoadFromFile("img/x.bmp");
        pp4='x';
        who='o';
        t->Picture->LoadFromFile("img/osmall.bmp");
    }
     p4->Enabled=false;
     check();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p5Click(TObject *Sender)
{
     if(pp5=='n'){
    if(who=='o'){
       p5->Picture->LoadFromFile("img/o.bmp");
       pp5='o';
       who='x';
       t->Picture->LoadFromFile("img/xsmall.bmp");

    }else{
        p5->Picture->LoadFromFile("img/x.bmp");
        pp5='x';
        who='o';
        t->Picture->LoadFromFile("img/osmall.bmp");
    }
     p5->Enabled=false;
     check();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p6Click(TObject *Sender)
{
   if(pp6=='n'){
    if(who=='o'){
       p6->Picture->LoadFromFile("img/o.bmp");
       pp6='o';
       who='x';
       t->Picture->LoadFromFile("img/xsmall.bmp");

    }else{
        p6->Picture->LoadFromFile("img/x.bmp");
        pp6='x';
        who='o';
        t->Picture->LoadFromFile("img/osmall.bmp");
    }
     p6->Enabled=false;
     check();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p7Click(TObject *Sender)
{
   if(pp7=='n'){
    if(who=='o'){
       p7->Picture->LoadFromFile("img/o.bmp");
       pp7='o';
       who='x';
       t->Picture->LoadFromFile("img/xsmall.bmp");

    }else{
        p7->Picture->LoadFromFile("img/x.bmp");
        pp7='x';
        who='o';
        t->Picture->LoadFromFile("img/osmall.bmp");
    }
     p7->Enabled=false;
     check();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p8Click(TObject *Sender)
{
   if(pp8=='n'){
    if(who=='o'){
       p8->Picture->LoadFromFile("img/o.bmp");
       pp8='o';
       who='x';
       t->Picture->LoadFromFile("img/xsmall.bmp");

    }else{
        p8->Picture->LoadFromFile("img/x.bmp");
        pp8='x';
        who='o';
        t->Picture->LoadFromFile("img/osmall.bmp");
    }
     p8->Enabled=false;
     check();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p9Click(TObject *Sender)
{
        if(pp9=='n'){
    if(who=='o'){
       p9->Picture->LoadFromFile("img/o.bmp");
       pp9='o';
       who='x';
       t->Picture->LoadFromFile("img/xsmall.bmp");

    }else{
        p9->Picture->LoadFromFile("img/x.bmp");
        pp9='x';
        who='o';
        t->Picture->LoadFromFile("img/osmall.bmp");
    }
     p9->Enabled=false;
     check();
   }
}
//---------------------------------------------------------------------------
