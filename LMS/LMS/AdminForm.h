#pragma once

namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ studentLabel;
	private: System::Windows::Forms::ComboBox^ studentSelect;


	private: System::Windows::Forms::Label^ titleLabel;
	private: System::Windows::Forms::Label^ adminLabel;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CourseNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CourseName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Credits;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Grade;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ dropClassButton;

	private: System::Windows::Forms::Button^ addClassButton;
	private: System::Windows::Forms::Button^ viewExamsButton;
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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->studentLabel = (gcnew System::Windows::Forms::Label());
			this->studentSelect = (gcnew System::Windows::Forms::ComboBox());
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->adminLabel = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->CourseNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CourseName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Credits = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Grade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->dropClassButton = (gcnew System::Windows::Forms::Button());
			this->addClassButton = (gcnew System::Windows::Forms::Button());
			this->viewExamsButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->studentLabel, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->studentSelect, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->titleLabel, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->adminLabel, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 3);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(836, 711);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// studentLabel
			// 
			this->studentLabel->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->studentLabel->AutoSize = true;
			this->studentLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentLabel->Location = System::Drawing::Point(296, 80);
			this->studentLabel->Name = L"studentLabel";
			this->studentLabel->Size = System::Drawing::Size(119, 20);
			this->studentLabel->TabIndex = 1;
			this->studentLabel->Text = L"Select Student:";
			// 
			// studentSelect
			// 
			this->studentSelect->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->studentSelect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentSelect->FormattingEnabled = true;
			this->studentSelect->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Tyler Thornton", L"Eric Martinez", L"Simon Phan",
					L"Lim Nguyen", L"Zeus Banda"
			});
			this->studentSelect->Location = System::Drawing::Point(421, 76);
			this->studentSelect->Name = L"studentSelect";
			this->studentSelect->Size = System::Drawing::Size(412, 28);
			this->studentSelect->TabIndex = 0;
			// 
			// titleLabel
			// 
			this->titleLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->titleLabel->AutoSize = true;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(127, 0);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(164, 73);
			this->titleLabel->TabIndex = 2;
			this->titleLabel->Text = L"LMS";
			// 
			// adminLabel
			// 
			this->adminLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->adminLabel->AutoSize = true;
			this->adminLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminLabel->Location = System::Drawing::Point(581, 26);
			this->adminLabel->Name = L"adminLabel";
			this->adminLabel->Size = System::Drawing::Size(92, 20);
			this->adminLabel->TabIndex = 3;
			this->adminLabel->Text = L"Admin View";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->CourseNumber,
					this->CourseName, this->Credits, this->Grade
			});
			this->tableLayoutPanel1->SetColumnSpan(this->dataGridView1, 2);
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 110);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(830, 296);
			this->dataGridView1->TabIndex = 4;
			// 
			// CourseNumber
			// 
			this->CourseNumber->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->CourseNumber->HeaderText = L"Course Number";
			this->CourseNumber->Name = L"CourseNumber";
			this->CourseNumber->Width = 96;
			// 
			// CourseName
			// 
			this->CourseName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->CourseName->HeaderText = L"Course Name";
			this->CourseName->Name = L"CourseName";
			// 
			// Credits
			// 
			this->Credits->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Credits->HeaderText = L"Credits";
			this->Credits->Name = L"Credits";
			this->Credits->Width = 64;
			// 
			// Grade
			// 
			this->Grade->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Grade->HeaderText = L"Grade";
			this->Grade->Name = L"Grade";
			this->Grade->Width = 61;
			// 
			// panel1
			// 
			this->tableLayoutPanel1->SetColumnSpan(this->panel1, 2);
			this->panel1->Controls->Add(this->exitButton);
			this->panel1->Controls->Add(this->dropClassButton);
			this->panel1->Controls->Add(this->addClassButton);
			this->panel1->Controls->Add(this->viewExamsButton);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(3, 412);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(830, 296);
			this->panel1->TabIndex = 6;
			// 
			// exitButton
			// 
			this->exitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->exitButton->Location = System::Drawing::Point(418, 116);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(192, 49);
			this->exitButton->TabIndex = 8;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &AdminForm::exitButton_Click);
			// 
			// dropClassButton
			// 
			this->dropClassButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->dropClassButton->Location = System::Drawing::Point(220, 116);
			this->dropClassButton->Name = L"dropClassButton";
			this->dropClassButton->Size = System::Drawing::Size(192, 49);
			this->dropClassButton->TabIndex = 7;
			this->dropClassButton->Text = L"Drop Class";
			this->dropClassButton->UseVisualStyleBackColor = true;
			// 
			// addClassButton
			// 
			this->addClassButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->addClassButton->Location = System::Drawing::Point(220, 61);
			this->addClassButton->Name = L"addClassButton";
			this->addClassButton->Size = System::Drawing::Size(192, 49);
			this->addClassButton->TabIndex = 6;
			this->addClassButton->Text = L"Add Class";
			this->addClassButton->UseVisualStyleBackColor = true;
			// 
			// viewExamsButton
			// 
			this->viewExamsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->viewExamsButton->Location = System::Drawing::Point(418, 61);
			this->viewExamsButton->Name = L"viewExamsButton";
			this->viewExamsButton->Size = System::Drawing::Size(192, 49);
			this->viewExamsButton->TabIndex = 5;
			this->viewExamsButton->Text = L"View Exam Grades";
			this->viewExamsButton->UseVisualStyleBackColor = true;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 735);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
