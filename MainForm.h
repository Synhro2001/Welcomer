#pragma once
#include "Hello.h"
#include <iostream>

namespace Lab1Krasovskis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ frame;
	private: System::Windows::Forms::Button^ helloBtn;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->frame = (gcnew System::Windows::Forms::PictureBox());
			this->helloBtn = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame))->BeginInit();
			this->SuspendLayout();
			// 
			// frame
			// 
			this->frame->Location = System::Drawing::Point(12, 12);
			this->frame->Name = L"frame";
			this->frame->Size = System::Drawing::Size(781, 200);
			this->frame->TabIndex = 0;
			this->frame->TabStop = false;
			// 
			// helloBtn
			// 
			this->helloBtn->Location = System::Drawing::Point(309, 244);
			this->helloBtn->Name = L"helloBtn";
			this->helloBtn->Size = System::Drawing::Size(175, 23);
			this->helloBtn->TabIndex = 1;
			this->helloBtn->Text = L"On/Off";
			this->helloBtn->UseVisualStyleBackColor = true;
			this->helloBtn->Click += gcnew System::EventHandler(this, &MainForm::helloBtn_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 600;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(331, 290);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 24);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(799, 321);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->helloBtn);
			this->Controls->Add(this->frame);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Welcome";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frame))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void helloBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		
		timer1->Enabled = !timer1->Enabled;
		
	}
		   
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		
		Hello hello;
		Graphics^ grp = frame->CreateGraphics();
		hello.draw(grp, frame->Width, frame->Height);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
	
}
