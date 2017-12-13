#pragma once

#include "Queue.cpp"
#include <stdlib.h>



namespace Kalk {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;


	/// <summary>
	/// —водка дл€ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		Graphics^ gr;
	private: System::Windows::Forms::TextBox^  MaxSize;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::TextBox^  Ppush;
	private: System::Windows::Forms::TextBox^  StartSize;

	private: System::Windows::Forms::Button^  Start;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::Windows::Forms::Label^  Int;
	private: System::Windows::Forms::TextBox^  Interv;
	private: System::Windows::Forms::Label^  Otvet;





			 TQueue<int> *pQueue;

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			gr = CreateGraphics();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected: 

	protected: 

	protected: 

	protected: 

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->MaxSize = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Ppush = (gcnew System::Windows::Forms::TextBox());
			this->StartSize = (gcnew System::Windows::Forms::TextBox());
			this->Start = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Int = (gcnew System::Windows::Forms::Label());
			this->Interv = (gcnew System::Windows::Forms::TextBox());
			this->Otvet = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// MaxSize
			// 
			this->MaxSize->Location = System::Drawing::Point(69, 10);
			this->MaxSize->Name = L"MaxSize";
			this->MaxSize->Size = System::Drawing::Size(33, 20);
			this->MaxSize->TabIndex = 0;
			this->MaxSize->Text = L"50";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"MaxSize:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"       Size:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(123, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"P(push)";
			// 
			// Ppush
			// 
			this->Ppush->Location = System::Drawing::Point(174, 10);
			this->Ppush->Name = L"Ppush";
			this->Ppush->Size = System::Drawing::Size(38, 20);
			this->Ppush->TabIndex = 5;
			this->Ppush->Text = L"50";
			// 
			// StartSize
			// 
			this->StartSize->Location = System::Drawing::Point(69, 37);
			this->StartSize->Name = L"StartSize";
			this->StartSize->Size = System::Drawing::Size(33, 20);
			this->StartSize->TabIndex = 6;
			this->StartSize->Text = L"20";
			// 
			// Start
			// 
			this->Start->Location = System::Drawing::Point(234, 10);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(73, 22);
			this->Start->TabIndex = 8;
			this->Start->Text = L"Start/Stop";
			this->Start->UseVisualStyleBackColor = true;
			this->Start->Click += gcnew System::EventHandler(this, &Form1::Start_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Int
			// 
			this->Int->AutoSize = true;
			this->Int->Location = System::Drawing::Point(123, 40);
			this->Int->Name = L"Int";
			this->Int->Size = System::Drawing::Size(45, 13);
			this->Int->TabIndex = 10;
			this->Int->Text = L"Interval:";
			this->Int->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// Interv
			// 
			this->Interv->Location = System::Drawing::Point(174, 36);
			this->Interv->Name = L"Interv";
			this->Interv->Size = System::Drawing::Size(38, 20);
			this->Interv->TabIndex = 11;
			this->Interv->Text = L"100";
			// 
			// Otvet
			// 
			this->Otvet->AutoSize = true;
			this->Otvet->Location = System::Drawing::Point(234, 44);
			this->Otvet->Name = L"Otvet";
			this->Otvet->Size = System::Drawing::Size(0, 13);
			this->Otvet->TabIndex = 12;
			this->Otvet->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(319, 242);
			this->Controls->Add(this->Otvet);
			this->Controls->Add(this->Interv);
			this->Controls->Add(this->Int);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->StartSize);
			this->Controls->Add(this->Ppush);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MaxSize);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"TCalk";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void Start_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (timer1 -> Enabled == true)
				 timer1 -> Enabled = false;
			 else {
				 gr->DrawArc(Pens::White, 75, 75, 125, 125, 0, 360);
				 int StartS = Convert::ToInt32 (StartSize -> Text);
				 int MaxS = Convert::ToInt32 (MaxSize -> Text);

				 pQueue=new TQueue<int>;
				 for(int i=0; i<StartS; i++)
				 pQueue->Push(1);
				 pQueue->SetMaxSize(MaxS);

				 int inte = Convert::ToInt32 (Interv -> Text);
				 timer1 -> Interval = inte;

				 timer1 -> Enabled = true;
			 }
		 }

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 try {
			 Otvet -> Text ="";
			
			 int MaxS = Convert::ToInt32 (MaxSize -> Text);
			 int push = Convert::ToInt32 (Ppush -> Text);
			 int StartS = Convert::ToInt32 (StartSize -> Text);

			 int rubb=1;
			 int ver = rand()%100;
			 if (ver<=push) {
				 pQueue->Push(rubb);
				 StartSize->Text=Convert::ToString(StartS+1);
			 }
			 else {
				 rubb = pQueue->Pop();
				 StartSize->Text=Convert::ToString(StartS-1);
			 }
			 
			 int su = 360*pQueue->GetFirstPos()/MaxS;
			 int ku = 360*pQueue->NumberElem()/MaxS;
			 gr->DrawArc(Pens::White, 75, 75, 125, 125, 0, 360);
			 gr->DrawArc(Pens::Black, 75, 75, 125, 125, su, ku);
			
			 } 
			 catch(...) {
				 Otvet -> Text ="Error";
			 }
		 }

private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

