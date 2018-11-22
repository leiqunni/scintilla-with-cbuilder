//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	HMODULE hmod = LoadLibrary(L"SciLexer.DLL");

	if (hmod == NULL) {
		MessageBox(this->Handle,
		L"The Scintilla DLL could not be loaded.",
		L"Error loading Scintilla",
		MB_OK | MB_ICONERROR);
        exit(1);
	} else {
		hwndScintilla = CreateWindowEx(0,
			L"Scintilla", L"", WS_CHILD | WS_VISIBLE | WS_TABSTOP | WS_CLIPCHILDREN,
			0, 0, 640, 360, this->Handle, NULL, NULL, NULL);
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormResize(TObject *Sender)
{
	SetWindowPos(hwndScintilla, HWND_TOP, 0, 0, this->ClientWidth, this->ClientHeight, SWP_SHOWWINDOW);
}
//---------------------------------------------------------------------------
