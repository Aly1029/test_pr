//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "test_1.h"
#include <jpeg.hpp>
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
if (OpenPictureDialog1->Execute())

{

Image1->Picture->LoadFromFile(OpenPictureDialog1->FileName);

}

}
//---------------------------------------------------------------------------

