#pragma once
#include "MyForm.h"
#include "Users.h"
#include "Reference.h"
#include "WriteBook.h"
#include "Creators.h" 
#include <string>
#include <msclr\marshal_cppstd.h>

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Librarian;
	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		
		Form1(void)
		{
			InitializeComponent();
			
			
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;



	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;









	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(1439, 45);
			this->button2->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 65);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Ðîçðîáíèêè";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(1639, 45);
			this->button3->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 65);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Ñïðàâêà";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(1439, 178);
			this->button4->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 65);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Êîðèñòóâà÷³";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(1639, 178);
			this->button5->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 65);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Ðåºñòðàö³ÿ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->groupBox1->Location = System::Drawing::Point(89, 247);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->groupBox1->Size = System::Drawing::Size(1750, 175);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(1147, 65);
			this->button1->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 69);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Ïîøóê";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 41, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(593, 65);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(550, 69);
			this->textBox1->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(636, 10);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(470, 45);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Ââåä³òü íàçâó êíèãè";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->label2->Cursor = System::Windows::Forms::Cursors::Default;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 33, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(100, 179);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 54);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Librarian";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(669, 607);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(381, 78);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Íå çíàéäåíî";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->MinimumSize = System::Drawing::Size(1918, 1038);
			this->Name = L"Form1";
			this->Text = L"Librarian";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//Creators
		Creators^ creators;
		creators = gcnew Creators();
		creators->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//Reference
		Reference^ ref;
		ref = gcnew Reference();
		ref->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//Users
		Users^ user;
		user = gcnew Users();
		user->ShowDialog();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {//Registration
		MyForm^ form2;
		form2 = gcnew MyForm();
		form2->ShowDialog();
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {//Author
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {//Book
}

private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {//Write
	string s;
	int j;
	vector<books> bookList;
	bookList = read_books(bookList);
	string a = msclr::interop::marshal_as<std::string>(textBox1->Text);
	for (int i = 0; i < bookList.size(); i++) {
		if (bookList[i].bookName == a) {
			j = i;
		}
	}
	WriteBook^ wb;
	wb = gcnew WriteBook(j);
	wb->ShowDialog();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	label3->Text = "Íå çíàéäåíî";
	string s;
	int j;
	vector<books> bookList;
	bookList = read_books(bookList);
	string a = msclr::interop::marshal_as<std::string>(textBox1->Text);
	for (int i = 0; i < bookList.size(); i++) {
		if (bookList[i].bookName == a) {
			j = i;
			s = bookList[i].author + " " + bookList[i].bookName;
		}
	}
	if (s != "") {
		if (bookList[j].status[0] == 'a') {
			String^ str = gcnew String(s.data());
			label3->Text = str;
		}
	}
	
}
};
}
