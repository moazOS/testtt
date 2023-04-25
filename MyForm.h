#pragma once
#include <iostream>
#include "masseg.h"
#include <stack>
#include <list> 
#include <string>
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>
#include <vector>
namespace Project9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	



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
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Myfavorit;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Myfavorit = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(584, 563);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"send";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 568);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(566, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// Myfavorit
			// 
			this->Myfavorit->Location = System::Drawing::Point(584, 537);
			this->Myfavorit->Name = L"Myfavorit";
			this->Myfavorit->Size = System::Drawing::Size(91, 26);
			this->Myfavorit->TabIndex = 3;
			this->Myfavorit->Text = L"Myfavorit";
			this->Myfavorit->UseVisualStyleBackColor = true;
			this->Myfavorit->Click += gcnew System::EventHandler(this, &MyForm::Myfavorit_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(26, 16);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(318, 488);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(253, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 58);
			this->button2->TabIndex = 5;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(96, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FAVORIT";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(855, 600);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Myfavorit);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
			this->panel1->Hide();
		}
		int y=1;
		int y2 = 1;
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	
		masseg b(textBox1->Text , y ,573 ,9 ,0);

		
		this->Controls->Add(b.favorit);
		
		this->Controls->Add(b.deleteFromeFavorit);
		this->Controls->Add(b.text);
		y += 20;


	}


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Myfavorit_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Show();
	for (auto i = lstack.begin(); i != lstack.end(); ++i)
	{
		temp.push_back(*i);
		String^ ID = gcnew String((*i).c_str());
		masseg c(ID, y2, 100 , 50 , 1);
		this->panel1->Controls->Add(c.text);
		c.text->Location = System::Drawing::Point(30, y2 + 50);
		this->panel1->Controls->Add(c.deleteFromeFavorit);
		c.deleteFromeFavorit->Show();
		y2 += 20;
	}
	lstack.clear();
	
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel1->Hide();
	y2 = 1;
	for (auto i = temp.begin(); i != temp.end(); ++i)
	{
		lstack.push_back(*i);
		
	}
	temp.clear();
	
}
};
}


