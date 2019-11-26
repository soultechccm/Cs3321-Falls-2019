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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::Button^ View;
	private: System::Windows::Forms::Button^ exitButton;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->View = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(1041, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// StudentId
			// 
			this->StudentId->Location = System::Drawing::Point(133, 60);
			this->StudentId->Margin = System::Windows::Forms::Padding(2);
			this->StudentId->Name = L"StudentId";
			this->StudentId->Size = System::Drawing::Size(174, 22);
			this->StudentId->TabIndex = 1;
			this->StudentId->Text = L"StudentId";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 63);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"StudentId";
			// 
			// StudentName
			// 
			this->StudentName->Location = System::Drawing::Point(135, 119);
			this->StudentName->Margin = System::Windows::Forms::Padding(2);
			this->StudentName->Name = L"StudentName";
			this->StudentName->Size = System::Drawing::Size(172, 22);
			this->StudentName->TabIndex = 3;
			this->StudentName->Text = L"StudentName";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 122);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"StudentName";
			// 
			// CourseId
			// 
			this->CourseId->Location = System::Drawing::Point(135, 171);
			this->CourseId->Margin = System::Windows::Forms::Padding(2);
			this->CourseId->Name = L"CourseId";
			this->CourseId->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->CourseId->Size = System::Drawing::Size(172, 22);
			this->CourseId->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(64, 176);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"CourseId";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(419, 449);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 24);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Delete
			// 
			this->Delete->Location = System::Drawing::Point(597, 449);
			this->Delete->Margin = System::Windows::Forms::Padding(2);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(97, 24);
			this->Delete->TabIndex = 8;
			this->Delete->Text = L"Delete";
			this->Delete->UseVisualStyleBackColor = true;
			// 
			// View
			// 
			this->View->Location = System::Drawing::Point(779, 449);
			this->View->Margin = System::Windows::Forms::Padding(2);
			this->View->Name = L"View";
			this->View->Size = System::Drawing::Size(97, 24);
			this->View->TabIndex = 9;
			this->View->Text = L"View";
			this->View->UseVisualStyleBackColor = true;
			// 
			// exitButton
			// 
			this->exitButton->Location = System::Drawing::Point(915, 450);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(75, 23);
			this->exitButton->TabIndex = 10;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &Students::exitButton_Click);
			// 
			// Students
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1041, 542);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->View);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->CourseId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->StudentName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->StudentId);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
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
