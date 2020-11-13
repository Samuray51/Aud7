#include "MyForm.h"

using namespace System;
using namespace Drawing;

int WinMain()
{
	srand(time(0));
	Project8::MyForm^ myForm = gcnew Project8::MyForm;
	System::Windows::Forms::Application::Run(myForm);




	return 0;
}