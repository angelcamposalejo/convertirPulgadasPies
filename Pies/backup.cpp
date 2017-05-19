#include "stdafx.h"  //________________________________________ Pies.cpp
#include "Pies.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Pies app;
	return app.BeginDialog(IDI_Pies, hInstance);
}

void Pies::Window_Open(Win::Event& e)
{
}

void Pies::btConvertir_Click(Win::Event& e)
{
}

