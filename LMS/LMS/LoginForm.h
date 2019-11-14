#pragma once

namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ inputUsername;
	private: System::Windows::Forms::TextBox^ inputPassword;


	private: System::Windows::Forms::Label^ labelUsername;
	private: System::Windows::Forms::Label^ labelPassword;
	private: System::Windows::Forms::Button^ buttonLogin;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ labelTitle;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->inputUsername = (gcnew System::Windows::Forms::TextBox());
			this->inputPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// inputUsername
			// 
			this->inputUsername->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->tableLayoutPanel1->SetColumnSpan(this->inputUsername, 2);
			this->inputUsername->Location = System::Drawing::Point(371, 375);
			this->inputUsername->Margin = System::Windows::Forms::Padding(10);
			this->inputUsername->Name = L"inputUsername";
			this->inputUsername->Size = System::Drawing::Size(355, 31);
			this->inputUsername->TabIndex = 1;
			// 
			// inputPassword
			// 
			this->inputPassword->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->tableLayoutPanel1->SetColumnSpan(this->inputPassword, 2);
			this->inputPassword->Location = System::Drawing::Point(371, 426);
			this->inputPassword->Margin = System::Windows::Forms::Padding(10);
			this->inputPassword->Name = L"inputPassword";
			this->inputPassword->Size = System::Drawing::Size(355, 31);
			this->inputPassword->TabIndex = 2;
			this->inputPassword->UseSystemPasswordChar = true;
			// 
			// labelUsername
			// 
			this->labelUsername->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->labelUsername->AutoSize = true;
			this->labelUsername->Location = System::Drawing::Point(235, 378);
			this->labelUsername->Margin = System::Windows::Forms::Padding(10);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(116, 25);
			this->labelUsername->TabIndex = 3;
			this->labelUsername->Text = L"Username:";
			this->labelUsername->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelPassword
			// 
			this->labelPassword->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->labelPassword->AutoSize = true;
			this->labelPassword->Location = System::Drawing::Point(239, 429);
			this->labelPassword->Margin = System::Windows::Forms::Padding(10);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(112, 25);
			this->labelPassword->TabIndex = 4;
			this->labelPassword->Text = L"Password:";
			this->labelPassword->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// buttonLogin
			// 
			this->buttonLogin->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonLogin->AutoSize = true;
			this->buttonLogin->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonLogin->Location = System::Drawing::Point(494, 477);
			this->buttonLogin->Margin = System::Windows::Forms::Padding(10);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Padding = System::Windows::Forms::Padding(10);
			this->buttonLogin->Size = System::Drawing::Size(95, 55);
			this->buttonLogin->TabIndex = 0;
			this->buttonLogin->Text = L"Login";
			this->buttonLogin->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->inputPassword, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelPassword, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->inputUsername, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelTitle, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelUsername, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->buttonLogin, 1, 3);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1084, 833);
			this->tableLayoutPanel1->TabIndex = 6;
			// 
			// labelTitle
			// 
			this->labelTitle->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->labelTitle->AutoSize = true;
			this->tableLayoutPanel1->SetColumnSpan(this->labelTitle, 3);
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitle->Location = System::Drawing::Point(369, 198);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Padding = System::Windows::Forms::Padding(10);
			this->labelTitle->Size = System::Drawing::Size(345, 167);
			this->labelTitle->TabIndex = 5;
			this->labelTitle->Text = L"LMS";
			this->labelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1084, 833);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"LoginForm";
			this->Text = L"LMS";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
