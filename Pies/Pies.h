#pragma once  //______________________________________ Pies.h  
#include "Resource.h"
class Pies : public Win::Dialog
{
public:
	Pies()
	{
	}
	~Pies()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxPulgadas;
	Win::Button btConvertir;
	Win::Textbox tbxPies;
	Win::Textbox tbxPulgadas2;
	Win::Label lb2;
	Win::Label lb3;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(513);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(115);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Pies";
		lb1.Create(NULL, L"Pulgadas", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 18, 24, 78, 25, hWnd, 1000);
		tbxPulgadas.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 110, 27, 97, 25, hWnd, 1001);
		btConvertir.Create(NULL, L"Convertir", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 226, 26, 79, 28, hWnd, 1002);
		tbxPies.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 341, 31, 97, 25, hWnd, 1003);
		tbxPulgadas2.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 339, 74, 99, 25, hWnd, 1004);
		lb2.Create(NULL, L"Ft", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 456, 30, 48, 25, hWnd, 1005);
		lb3.Create(NULL, L"In", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 456, 83, 50, 25, hWnd, 1006);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxPulgadas.Font = fontArial014A;
		btConvertir.Font = fontArial014A;
		tbxPies.Font = fontArial014A;
		tbxPulgadas2.Font = fontArial014A;
		lb2.Font = fontArial014A;
		lb3.Font = fontArial014A;
	}
	//_________________________________________________
	void btConvertir_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btConvertir.IsEvent(e, BN_CLICKED)) { btConvertir_Click(e); return true; }
		return false;
	}
};
