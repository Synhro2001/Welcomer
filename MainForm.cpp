#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")

#include "MainForm.h"
#include "Hello.h"

using namespace System;
using namespace System::Windows::Forms;

int main()
{
	srand((unsigned)time(NULL)); 
	Application::EnableVisualStyles();
	Lab1Krasovskis::MainForm form; // Lab1Krasovskis procject name
	Application::Run(% form);

}
