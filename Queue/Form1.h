#pragma once

#include "Queue.cpp"



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
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  Ppush;
	private: System::Windows::Forms::TextBox^  StartSize;
	private: System::Windows::Forms::TextBox^  Ppop;
	private: System::Windows::Forms::Button^  Start;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  Create;
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Ppush = (gcnew System::Windows::Forms::TextBox());
			this->StartSize = (gcnew System::Windows::Forms::TextBox());
			this->Ppop = (gcnew System::Windows::Forms::TextBox());
			this->Start = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Create = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// MaxSize
			// 
			this->MaxSize->Location = System::Drawing::Point(69, 10);
			this->MaxSize->Name = L"MaxSize";
			this->MaxSize->Size = System::Drawing::Size(33, 20);
			this->MaxSize->TabIndex = 0;
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
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"StartSize:";
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(123, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"P(pop)";
			// 
			// Ppush
			// 
			this->Ppush->Location = System::Drawing::Point(174, 13);
			this->Ppush->Name = L"Ppush";
			this->Ppush->Size = System::Drawing::Size(38, 20);
			this->Ppush->TabIndex = 5;
			// 
			// StartSize
			// 
			this->StartSize->Location = System::Drawing::Point(69, 37);
			this->StartSize->Name = L"StartSize";
			this->StartSize->Size = System::Drawing::Size(33, 20);
			this->StartSize->TabIndex = 6;
			// 
			// Ppop
			// 
			this->Ppop->Location = System::Drawing::Point(174, 37);
			this->Ppop->Name = L"Ppop";
			this->Ppop->Size = System::Drawing::Size(38, 20);
			this->Ppop->TabIndex = 7;
			// 
			// Start
			// 
			this->Start->Location = System::Drawing::Point(232, 34);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(56, 23);
			this->Start->TabIndex = 8;
			this->Start->Text = L"Start";
			this->Start->UseVisualStyleBackColor = true;
			this->Start->Click += gcnew System::EventHandler(this, &Form1::Start_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Create
			// 
			this->Create->Location = System::Drawing::Point(232, 10);
			this->Create->Name = L"Create";
			this->Create->Size = System::Drawing::Size(56, 23);
			this->Create->TabIndex = 9;
			this->Create->Text = L"Create";
			this->Create->UseVisualStyleBackColor = true;
			this->Create->Click += gcnew System::EventHandler(this, &Form1::Create_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(319, 242);
			this->Controls->Add(this->Create);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->Ppop);
			this->Controls->Add(this->StartSize);
			this->Controls->Add(this->Ppush);
			this->Controls->Add(this->label4);
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

/*private: System::Void Chastn_Click(System::Object^  sender, System::EventArgs^  e) {
			int a = Convert::ToInt32 (number1 -> Text);
			int b = Convert::ToInt32 (number2 -> Text);
			double r =(double)a/(double)b;
			Otvet -> Text = Convert::ToString(r);
		 }*/
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void Start_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1 -> Enabled = true;
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 

		 }
private: System::Void Create_Click(System::Object^  sender, System::EventArgs^  e) {
		     gr->DrawArc(Pens::White, 75, 75, 125, 125, 0, 360);
			 int MaxS = Convert::ToInt32 (MaxSize -> Text);
			 int StartS = Convert::ToInt32 (StartSize -> Text);

			 TQueue<int> Que(MaxS);
			 for( int i=0; i<StartS; i++)
				 Que.Push(1);
			 pQueue=&Que;

			 int su = 360*pQueue->First()/MaxS;
			 int ku = 360*pQueue->NumberElem()/MaxS;
			 gr->DrawArc(Pens::Black, 75, 75, 125, 125, su, ku);

		 }
};
}

