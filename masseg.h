#include"MyForm.h"
using namespace System;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
public ref class masseg 
{


public:System::Windows::Forms::Button^ favorit;
public:System::Windows::Forms::Label^ text;



public: masseg (String^ mass , int y)
{
	
	text = (gcnew System::Windows::Forms::Label());
	text->AutoSize = true;
	text->Location = System::Drawing::Point(573, 9 * y);
	text->Name = mass;
	text->Size = System::Drawing::Size(35, 20);
	text->TabIndex = 1;
	text->Text = mass;
	favorit = (gcnew System::Windows::Forms::Button());
	favorit->Location = System::Drawing::Point(500, 9 * y);
	favorit->Name = L"star";
	favorit->Size = System::Drawing::Size(35, 20);
	favorit->TabIndex = 0;
	favorit->Text = L"star";
	favorit->UseVisualStyleBackColor = true;
	


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{

}


};