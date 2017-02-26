//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *File1;
        TMenuItem *Nowy1;
        TMenuItem *N1;
        TMenuItem *Open1;
        TMenuItem *Save1;
        TMenuItem *Saveus1;
        TMenuItem *N2;
        TMenuItem *Exit1;
        TMenuItem *Edit1;
        TMenuItem *Cut1;
        TMenuItem *CopyCtrlC1;
        TMenuItem *PasteCtrlV1;
        TMenuItem *View1;
        TMenuItem *WordWrap1;
        TMenuItem *Font1;
        TMenuItem *Help1;
        TMenuItem *info1;
        TMenuItem *About1;
        TMenuItem *Web1;
        TMemo *tresc;
        TOpenDialog *OpenDialog1;
        TSaveDialog *SaveDialog1;
        TFontDialog *FontDialog1;
        void __fastcall Open1Click(TObject *Sender);
        void __fastcall Saveus1Click(TObject *Sender);
        void __fastcall Save1Click(TObject *Sender);
        void __fastcall Nowy1Click(TObject *Sender);
        void __fastcall trescKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Exit1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Cut1Click(TObject *Sender);
        void __fastcall CopyCtrlC1Click(TObject *Sender);
        void __fastcall PasteCtrlV1Click(TObject *Sender);
        void __fastcall WordWrap1Click(TObject *Sender);
        void __fastcall Font1Click(TObject *Sender);
        void __fastcall About1Click(TObject *Sender);
        void __fastcall Web1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
