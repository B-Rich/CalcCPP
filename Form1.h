#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>

namespace Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	static double firstOP = 0;
	static double secondOP = 0;
	static int op;
	static bool oprDone = false;
	static double res = 0;
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(105, 90);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(186, 90);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(24, 130);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(105, 130);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(186, 130);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 3;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(24, 170);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 8;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click_1);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(105, 170);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click_1);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(186, 170);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 6;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(438, 49);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(105, 214);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 12;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click_1);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(288, 252);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 11;
			this->button11->Text = L"=";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(24, 214);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 10;
			this->button12->Text = L"CE";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(288, 214);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 16;
			this->button13->Text = L"÷";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(288, 170);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 15;
			this->button14->Text = L"x";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(288, 130);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 14;
			this->button15->Text = L"-";
			this->button15->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(288, 90);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 13;
			this->button16->Text = L"+";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(387, 90);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 17;
			this->button17->Text = L"x!";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(387, 131);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 18;
			this->button18->Text = L"Sin";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(387, 170);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 19;
			this->button19->Text = L"Cos";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(387, 252);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 20;
			this->button20->Text = L"Pow";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(186, 214);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 23);
			this->button21->TabIndex = 21;
			this->button21->Text = L".";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(387, 214);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 23);
			this->button22->TabIndex = 22;
			this->button22->Text = L"Tan";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(496, 307);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: void calcRes()
        {
            if (textBox1->Text != L".")
            {
			secondOP = Convert::ToDouble(this->textBox1->Text);
			 // 1 + :: 2 - :: 3 x :: 4 / :: 5 ^
                if (oprDone == true)
                {
                    firstOP = secondOP;
                }
             else if(op == 1){
				 res = firstOP + secondOP;
			 }
			 else if(op == 2){
				 res = firstOP - secondOP;
			 }
			 else if(op == 3){
				 res = firstOP * secondOP;
			 }
			 else if(op == 4){
				 res = firstOP / secondOP;
			 }
			 else if(op == 5){
				 res = pow(firstOP,secondOP);
			 }   else
                {
                    firstOP = secondOP;
                }
                textBox1->Text = System::Convert::ToString(res);

            }
        }

		 //1
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(oprDone == false){
			 this->textBox1->Text = this->textBox1->Text + L"1";
			 }else if (oprDone == true){
				 this->textBox1->Text = L"1";
				 oprDone = false;
			 }
		 }
		 //Multiplication button
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			if(textBox1->Text->Length != 0){
			 firstOP = Convert::ToDouble(this->textBox1->Text);
			 op = 3;
			 oprDone = true;
		 }}

		 //plus button
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			if(textBox1->Text->Length != 0){
			 firstOP = Convert::ToDouble(this->textBox1->Text);
			 op = 1;
			 oprDone = true;
		 }}
		 //2
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(oprDone == false){
			 this->textBox1->Text = this->textBox1->Text + L"2";
			 }else if (oprDone == true){
				 this->textBox1->Text = L"2";
				 oprDone = false;
			 }
		 }
		 //3
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //
			 if(oprDone == false){
			 this->textBox1->Text = this->textBox1->Text + L"3";
			 }else if (oprDone == true){
				 this->textBox1->Text = L"3";
				 oprDone = false;
			 }
		 }
		 //4
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(oprDone == false){
			 this->textBox1->Text = this->textBox1->Text + L"4";
			 }else if (oprDone == true){
				 this->textBox1->Text = L"4";
				 oprDone = false;
			 }
		 }
				  //5
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(oprDone == false){
			 this->textBox1->Text = this->textBox1->Text + L"5";
			 }else if (oprDone == true){
				 this->textBox1->Text = L"5";
				 oprDone = false;
			 }
		 }
		 //6
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(oprDone == false){
			 this->textBox1->Text = this->textBox1->Text + L"6";
			 }else if (oprDone == true){
				 this->textBox1->Text = L"6";
				 oprDone = false;
			 }
		 }
		 //7
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
		 //8
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
		 //9
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
		 //0
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
		 //7
private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 	 if(oprDone == false){
			 this->textBox1->Text = this->textBox1->Text + L"7";
			 }else if (oprDone == true){
				 this->textBox1->Text = L"7";
				 oprDone = false;
			 }
		 }
		 //8
private: System::Void button8_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 	if(oprDone == false){
			 this->textBox1->Text = this->textBox1->Text + L"8";
			 }else if (oprDone == true){
				 this->textBox1->Text = L"8";
				 oprDone = false;
			 }
		 }
		 //9
private: System::Void button9_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 	if(oprDone == false){
			 this->textBox1->Text = this->textBox1->Text + L"9";
			 }else if (oprDone == true){
				 this->textBox1->Text = L"9";
				 oprDone = false;
			 }
		 }
private: System::Void button10_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 	if(oprDone == false){
			 this->textBox1->Text = this->textBox1->Text + L"0";
			 }else if (oprDone == true){
				 this->textBox1->Text = L"0";
				 oprDone = false;
			 }
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			if (textBox1->Text->Length != 0)
            {
                calcRes();
                op = 0;
            }
            oprDone = true;

		 }
		 //Minus button
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox1->Text->Length != 0){
			 firstOP = Convert::ToDouble(this->textBox1->Text);
			 op = 2;
			 oprDone = true;
			 }
		 }
		 //Division button
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox1->Text->Length != 0){
			 firstOP = Convert::ToDouble(this->textBox1->Text);
			 op = 4;
			 oprDone = true;
			 }}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 firstOP = 0;
			 secondOP = 0;
			 this->textBox1->Text = L"";
			 oprDone = false;
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 double fact = 1;
                for (int i = 1; i <= (int)Convert::ToDouble(this->textBox1->Text); i++)
                {
                    fact = fact * i;
                }
               textBox1->Text = System::Convert::ToString(fact);
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
		 //Sin button
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
						double sinRes;
                        sinRes = sin(Convert::ToDouble(this->textBox1->Text));
                        textBox1->Text = System::Convert::ToString(sinRes);
		 }
		 //Cos button
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
						double cosRes;
                        cosRes = cos(Convert::ToDouble(this->textBox1->Text));
                        textBox1->Text = System::Convert::ToString(cosRes);
		 }
		 //Pow button
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox1->Text->Length != 0){
			 firstOP = Convert::ToDouble(this->textBox1->Text);
			 op = 5;
			 //this->textBox1->Text = L"";
			 oprDone = true;
			 }
		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
		    int i = 0;
            char chr = '\0';
            bool isDecimal = false;
            int length = textBox1->Text->Length;
            if (oprDone != true)
            {
                for (i = 0; i < length; i++)
                {
                    chr = textBox1->Text[i];
                    if (chr == '.')
                    {
                        isDecimal = true;
                    }
                }

                if (isDecimal != true)
                {
                    textBox1->Text = textBox1->Text + System::Convert::ToString(".");
                }
            }
        }
		 //Tan button
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			            double tanRes;
                        tanRes = tan(Convert::ToDouble(this->textBox1->Text));
                        textBox1->Text = System::Convert::ToString(tanRes);
		 }
};
}

