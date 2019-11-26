#pragma once


namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Students : public System::Windows::Forms::Form
	{
	public:
		Students(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Students()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::TextBox^ StudentId;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ StudentName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ CourseId;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Button^ View;
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::TextBox^ Gpa;
	private: System::Windows::Forms::Label^ label4;

	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->StudentId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StudentName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CourseId = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->View = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->Gpa = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(6, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1562, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// StudentId
			// 
			this->StudentId->Location = System::Drawing::Point(200, 94);
			this->StudentId->Name = L"StudentId";
			this->StudentId->Size = System::Drawing::Size(259, 31);
			this->StudentId->TabIndex = 1;
			this->StudentId->Text = L"StudentId";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(90, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"StudentId";
			// 
			// StudentName
			// 
			this->StudentName->Location = System::Drawing::Point(202, 186);
			this->StudentName->Name = L"StudentName";
			this->StudentName->Size = System::Drawing::Size(256, 31);
			this->StudentName->TabIndex = 3;
			this->StudentName->Text = L"StudentName";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"StudentName";
			// 
			// CourseId
			// 
			this->CourseId->Location = System::Drawing::Point(202, 267);
			this->CourseId->Name = L"CourseId";
			this->CourseId->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->CourseId->Size = System::Drawing::Size(256, 31);
			this->CourseId->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(96, 275);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"CourseId";
			// 
			// View
			// 
			this->View->Location = System::Drawing::Point(1012, 701);
			this->View->Name = L"View";
			this->View->Size = System::Drawing::Size(146, 38);
			this->View->TabIndex = 9;
			this->View->Text = L"View";
			this->View->UseVisualStyleBackColor = true;
			// 
			// exitButton
			// 
			this->exitButton->Location = System::Drawing::Point(1265, 703);
			this->exitButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(112, 36);
			this->exitButton->TabIndex = 10;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &Students::exitButton_Click);
			// 
			// Gpa
			// 
			this->Gpa->Location = System::Drawing::Point(922, 185);
			this->Gpa->Name = L"Gpa";
			this->Gpa->Size = System::Drawing::Size(273, 31);
			this->Gpa->TabIndex = 11;
			this->Gpa->Text = L"gpa";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(860, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 25);
			this->label4->TabIndex = 12;
			this->label4->Text = L"GPA";
			// 
			// Students
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1562, 847);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Gpa);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->View);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->CourseId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->StudentName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->StudentId);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Students";
			this->Text = L"Students";
			this->Load += gcnew System::EventHandler(this, &Students::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripDropDownB(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolStripDropDownButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	};
}