#include "stdafx.h"  //________________________________________ Pies.cpp
#include "Pies.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Pies app;
	return app.BeginDialog(IDI_Pies, hInstance);
}

void Pies::Window_Open(Win::Event& e)
{
}

void Pies::btConvertir_Click(Win::Event& e)
{
	const int pulgadas = tbxPulgadas.IntValue;
	const int pies = pulgadas / 12;
	const int pulgadas2 = pulgadas % 12;
	wstring texto;
	Sys::Format(texto, L"%i ft and %i in", pies, pulgadas2);
	tbxPies.Text = texto;

}

