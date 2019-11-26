#include "AdminForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;




[STAThread]
int main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	LMS::AdminForm form;
	Application::Run(% form);
}

