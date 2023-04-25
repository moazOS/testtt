#pragma once
#include <iostream>
#include "masseg.h"
#include <stack>
#include <list> 
#include <string>
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>

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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(855, 600);
			this->Controls->Add(this->Myfavorit);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int y=1;
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	
		masseg b(textBox1->Text , y );

		
		this->Controls->Add(b.favorit);
		
		this->Controls->Add(b.deleteFromeFavorit);
		this->Controls->Add(b.text);
		y += 3;


	}


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Myfavorit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ID = gcnew String(lstack.back().c_str());
	MessageBox::Show(ID);
	
}
};
}


