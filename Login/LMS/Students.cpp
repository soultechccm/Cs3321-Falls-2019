#include "Students.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;




[STAThread]
int main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	LMS::Students form;
	Application::Run(% form);

}
