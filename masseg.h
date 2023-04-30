#include <iostream>
#include <vector>
#include <list> 
#include <string>
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

std::vector<std::string> temp;
std::vector<std::string> lstack;
	public ref class masseg
	{
		int check;
	    String^ resala;
		public:System::Windows::Forms::Button^ favorit;
		public:System::Windows::Forms::Button^ deleteFromeFavorit;
		public:System::Windows::Forms::Label^ text;


	public: masseg(String^ mass, int y , int x , int y2 , int check)
	{
		this->check = check;
		resala = mass;
		text = (gcnew System::Windows::Forms::Label());
		text->AutoSize = true;
		text->Location = System::Drawing::Point(x, y2 + y);
		text->Name = mass;
		text->Size = System::Drawing::Size(35, 20);
		text->TabIndex = 1;
		text->Text = mass;
		favorit = (gcnew System::Windows::Forms::Button());
		favorit->Location = System::Drawing::Point(x-73, y2 + y);
		favorit->Name = L"star";
		favorit->Size = System::Drawing::Size(40, 20);
		favorit->TabIndex = 0;
		favorit->Text = L"star";
		favorit->UseVisualStyleBackColor = true;
		favorit->Click += gcnew System::EventHandler(this, &masseg::ADD);
		deleteFromeFavorit = (gcnew System::Windows::Forms::Button());
		deleteFromeFavorit->Location = System::Drawing::Point(x-90, y2 + y);
		deleteFromeFavorit->Name = L"X";
		deleteFromeFavorit->Size = System::Drawing::Size(15, 20);
		deleteFromeFavorit->TabIndex = 0;
		deleteFromeFavorit->Text = L"X";
		deleteFromeFavorit->UseVisualStyleBackColor = true;
		deleteFromeFavorit->Click += gcnew System::EventHandler(this, &masseg::remove);
		deleteFromeFavorit->Hide();



	}
	private: System::Void ADD(System::Object^ sender, System::EventArgs^ e)
	{
		msclr::interop::marshal_context context;
		std::string sname = context.marshal_as<std::string>(resala);
		favorit->Text = L"done";
		lstack.push_back(sname);
		deleteFromeFavorit->Show();
	}
	private: System::Void remove(System::Object^ sender, System::EventArgs^ e)
	{
		favorit->Text = L"star";
		for (int i = 0; i < lstack.size(); i++)

		{

			String^ deleted_message = gcnew String((lstack[i]).c_str());
			if (deleted_message->Equals(resala))
			{
				lstack.erase(lstack.begin() + i);
			}

		}
		for (int i = 0; i < temp.size(); i++)

		{

			String^ deleted_message = gcnew String((temp[i]).c_str());
			if (deleted_message->Equals(resala))
			{
				temp.erase(temp.begin() + i);
			}

		}
		deleteFromeFavorit->Hide();
		if (check == 1)
		{
			text->Hide();
		}

	}

	};
