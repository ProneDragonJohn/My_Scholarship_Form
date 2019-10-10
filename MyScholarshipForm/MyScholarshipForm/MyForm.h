#pragma once
#include "scholarshipClassDeclared.h"
#include "scholarships.h"

namespace MyScholarshipForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBoxID;
	private: System::Windows::Forms::TextBox^  textBoxAmount;
	private: System::Windows::Forms::TextBox^  textBoxType;
	private: System::Windows::Forms::TextBox^  textBoxLength;
	private: System::Windows::Forms::TextBox^  textBoxStarts;
	private: System::Windows::Forms::TextBox^  textBoxFirstName;
	private: System::Windows::Forms::TextBox^  textBoxLastName;
	private: System::Windows::Forms::Button^  buttonPrevious;
	private: System::Windows::Forms::Button^  buttonNext;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAmount = (gcnew System::Windows::Forms::TextBox());
			this->textBoxType = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLength = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStarts = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->buttonPrevious = (gcnew System::Windows::Forms::Button());
			this->buttonNext = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(412, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cow Town College Scholarships Records";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(14, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(14, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Amount";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(14, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Type";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(14, 209);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Length";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(13, 249);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Starts";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(14, 286);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"First Name";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->Location = System::Drawing::Point(14, 329);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Last Name";
			// 
			// textBoxID
			// 
			this->textBoxID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBoxID->Location = System::Drawing::Point(118, 90);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(306, 26);
			this->textBoxID->TabIndex = 8;
			// 
			// textBoxAmount
			// 
			this->textBoxAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBoxAmount->Location = System::Drawing::Point(118, 127);
			this->textBoxAmount->Name = L"textBoxAmount";
			this->textBoxAmount->Size = System::Drawing::Size(306, 26);
			this->textBoxAmount->TabIndex = 9;
			// 
			// textBoxType
			// 
			this->textBoxType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBoxType->Location = System::Drawing::Point(118, 164);
			this->textBoxType->Name = L"textBoxType";
			this->textBoxType->Size = System::Drawing::Size(306, 26);
			this->textBoxType->TabIndex = 10;
			// 
			// textBoxLength
			// 
			this->textBoxLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBoxLength->Location = System::Drawing::Point(118, 203);
			this->textBoxLength->Name = L"textBoxLength";
			this->textBoxLength->Size = System::Drawing::Size(306, 26);
			this->textBoxLength->TabIndex = 11;
			// 
			// textBoxStarts
			// 
			this->textBoxStarts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBoxStarts->Location = System::Drawing::Point(118, 243);
			this->textBoxStarts->Name = L"textBoxStarts";
			this->textBoxStarts->Size = System::Drawing::Size(306, 26);
			this->textBoxStarts->TabIndex = 13;
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBoxFirstName->Location = System::Drawing::Point(118, 280);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(306, 26);
			this->textBoxFirstName->TabIndex = 14;
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBoxLastName->Location = System::Drawing::Point(118, 323);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(306, 26);
			this->textBoxLastName->TabIndex = 15;
			// 
			// buttonPrevious
			// 
			this->buttonPrevious->Location = System::Drawing::Point(155, 376);
			this->buttonPrevious->Name = L"buttonPrevious";
			this->buttonPrevious->Size = System::Drawing::Size(75, 23);
			this->buttonPrevious->TabIndex = 16;
			this->buttonPrevious->Text = L"< Previous";
			this->buttonPrevious->UseVisualStyleBackColor = true;
			this->buttonPrevious->Click += gcnew System::EventHandler(this, &MyForm::buttonPrevious_Click);
			// 
			// buttonNext
			// 
			this->buttonNext->Location = System::Drawing::Point(247, 376);
			this->buttonNext->Name = L"buttonNext";
			this->buttonNext->Size = System::Drawing::Size(75, 23);
			this->buttonNext->TabIndex = 17;
			this->buttonNext->Text = L"Next >";
			this->buttonNext->UseVisualStyleBackColor = true;
			this->buttonNext->Click += gcnew System::EventHandler(this, &MyForm::buttonNext_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(466, 419);
			this->Controls->Add(this->buttonNext);
			this->Controls->Add(this->buttonPrevious);
			this->Controls->Add(this->textBoxLastName);
			this->Controls->Add(this->textBoxFirstName);
			this->Controls->Add(this->textBoxStarts);
			this->Controls->Add(this->textBoxLength);
			this->Controls->Add(this->textBoxType);
			this->Controls->Add(this->textBoxAmount);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Scholarships";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
{
	fillFormFields(0);
}

void fillFormFields(int p)
{
	static int i = 0;
	int c = i + p;

	std::string sFileLine;					// a string to read in each line of the file
	std::vector<std::string> sParsedLine;   // array to hold the parsed line from file
	std::vector<Scholarship> s;				// This array of objects is initialized using 
											//   the default constructor

											// Open input and output files and test to make sure they opened correctly
	std::ifstream fin;
	std::ofstream fout;
	OpenFiles(fin, fout);

	while (!fin.eof())
		// Read a line from the file and push onto end ofscholars object array
		s.push_back(readFile(sFileLine, sParsedLine, fin));

	if(c == 0)
	{
		i += p;

		textBoxAmount->Text = gcnew String(s[i].getAmount().ToString());
		textBoxID->Text = gcnew String(s[i].getID().c_str());
		textBoxType->Text = gcnew String(s[i].getType().c_str());
		textBoxLength->Text = gcnew String(s[i].getLength().c_str());
		textBoxStarts->Text = gcnew String(s[i].getDate().c_str());
		textBoxLastName->Text = gcnew String(s[i].getLname().c_str());
		textBoxFirstName->Text = gcnew String(s[i].getFname().c_str());
	}
	else if (p > 0 && c >= 0 && c < s.size())
	{
		i += p;

		textBoxAmount->Text = gcnew String(s[i].getAmount().ToString());
		textBoxID->Text = gcnew String(s[i].getID().c_str());
		textBoxType->Text = gcnew String(s[i].getType().c_str());
		textBoxLength->Text = gcnew String(s[i].getLength().c_str());
		textBoxStarts->Text = gcnew String(s[i].getDate().c_str());
		textBoxLastName->Text = gcnew String(s[i].getLname().c_str());
		textBoxFirstName->Text = gcnew String(s[i].getFname().c_str());
	}
	else if (p < 0 && c > 0 && c < s.size())
	{
		i += p;

		textBoxAmount->Text = gcnew String(s[i].getAmount().ToString());
		textBoxID->Text = gcnew String(s[i].getID().c_str());
		textBoxType->Text = gcnew String(s[i].getType().c_str());
		textBoxLength->Text = gcnew String(s[i].getLength().c_str());
		textBoxStarts->Text = gcnew String(s[i].getDate().c_str());
		textBoxLastName->Text = gcnew String(s[i].getLname().c_str());
		textBoxFirstName->Text = gcnew String(s[i].getFname().c_str());
	}
	else
	{

	}
}

private: System::Void buttonPrevious_Click(System::Object^  sender, System::EventArgs^  e)
{
	fillFormFields(-1);
}

private: System::Void buttonNext_Click(System::Object^  sender, System::EventArgs^  e)
{
	fillFormFields(1);
}
};
}
