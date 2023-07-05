#include "MyForm1.h"
#include "MyForm2.h"
#include "Klasy.hpp"
#include "funkcje.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
#include <conio.h>
#include <random>
//#include <thread>

namespace CubeSlover {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    System::Windows::Forms::Keys;

	//using namespace System::Threading;


	/**/


	/// <summary>
	/// Podsumowanie informacji o MyForm

	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{

			InitializeComponent();
			FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;


			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}


	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;




	public:

		int swap;


	public: System::Windows::Forms::Button^ button6;
	public: System::Windows::Forms::Button^ button7;
	public: System::Windows::Forms::Button^ button8;
	public: System::Windows::Forms::Button^ button9;
	public: System::Windows::Forms::Button^ button10;
	public: System::Windows::Forms::Button^ button11;
	public: System::Windows::Forms::Button^ button12;
	public: System::Windows::Forms::Button^ button13;
	public: System::Windows::Forms::Button^ button14;
	public: System::Windows::Forms::Button^ button15;
	public: System::Windows::Forms::Button^ button16;
	public: System::Windows::Forms::Button^ button17;
	public: System::Windows::Forms::Button^ button18;
	public: System::Windows::Forms::Button^ button19;
	public: System::Windows::Forms::Button^ button20;
	public: System::Windows::Forms::Button^ button21;
	public: System::Windows::Forms::Button^ button22;
	public: System::Windows::Forms::Button^ button23;
	public: System::Windows::Forms::Button^ button24;
	public: System::Windows::Forms::Button^ button25;
	public: System::Windows::Forms::Button^ button26;
	public: System::Windows::Forms::Button^ button27;
	public: System::Windows::Forms::Button^ button28;
	public: System::Windows::Forms::Button^ button29;
	public: System::Windows::Forms::Button^ button30;
	public: System::Windows::Forms::Button^ button31;
	public: System::Windows::Forms::Button^ button32;
	public: System::Windows::Forms::Button^ button33;
	public: System::Windows::Forms::Button^ button34;
	public: System::Windows::Forms::Button^ button35;
	public: System::Windows::Forms::Button^ button36;
	public: System::Windows::Forms::Button^ button37;
	public: System::Windows::Forms::Button^ button38;
	public: System::Windows::Forms::Button^ button39;
	public: System::Windows::Forms::Button^ button40;
	public: System::Windows::Forms::Button^ button41;
	public: System::Windows::Forms::Button^ button42;
	public: System::Windows::Forms::Button^ button43;
	public: System::Windows::Forms::Button^ button44;
	public: System::Windows::Forms::Button^ button45;
	public: System::Windows::Forms::Button^ button46;
	public: System::Windows::Forms::Button^ button47;
	public: System::Windows::Forms::Button^ button48;
	public: System::Windows::Forms::Button^ button49;
	public: System::Windows::Forms::Button^ button50;
	public: System::Windows::Forms::Button^ button51;
	public: System::Windows::Forms::Button^ button52;
	public: System::Windows::Forms::Button^ button53;
	public: System::Windows::Forms::Button^ button54;
	public: System::Windows::Forms::Button^ button55;
	public: System::Windows::Forms::Button^ button56;
	public: System::Windows::Forms::Button^ button57;
	public: System::Windows::Forms::Button^ button58;
	public: System::Windows::Forms::TextBox^ textBox1;

	public:

	public: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Button^ cleancube;
	private:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::TextBox^ textBox3;
	private:
	public: System::Windows::Forms::TextBox^ textBox4;
	public: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	public:
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::TextBox^ textBox6;
	private:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button60;
	public: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Button^ button59;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Timer^ timer3;




private: System::Windows::Forms::ProgressBar^ progressBar1;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Timer^ timer4;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
public: System::Windows::Forms::Timer^ timer5;
private: System::Windows::Forms::Button^ button61;
private: System::Windows::Forms::Label^ label30;
public:
private:




	public:
	private:

	private: System::ComponentModel::IContainer^ components;

	public:
		/// <summary>
			/// Wymagana zmienna projektanta.
			/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
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
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cleancube = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(543, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 50);
			this->button1->TabIndex = 0;
			this->button1->TabStop = false;
			this->button1->Text = L"Generate scramble";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(495, 612);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 50);
			this->button3->TabIndex = 2;
			this->button3->TabStop = false;
			this->button3->Text = L"Instruction";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::SystemColors::Menu;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(495, 668);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 50);
			this->button4->TabIndex = 3;
			this->button4->TabStop = false;
			this->button4->Text = L"Leave program";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Orange;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(54, 182);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 40);
			this->button5->TabIndex = 4;
			this->button5->TabStop = false;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Orange;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(100, 182);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(40, 40);
			this->button6->TabIndex = 5;
			this->button6->TabStop = false;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Orange;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(146, 182);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(40, 40);
			this->button7->TabIndex = 6;
			this->button7->TabStop = false;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Orange;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(54, 228);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(40, 40);
			this->button8->TabIndex = 7;
			this->button8->TabStop = false;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Orange;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->button9->Location = System::Drawing::Point(100, 228);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(40, 40);
			this->button9->TabIndex = 8;
			this->button9->TabStop = false;
			this->button9->Text = L"L";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Orange;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(146, 228);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(40, 40);
			this->button10->TabIndex = 9;
			this->button10->TabStop = false;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Orange;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(54, 274);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(40, 40);
			this->button11->TabIndex = 10;
			this->button11->TabStop = false;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Orange;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(100, 274);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(40, 40);
			this->button12->TabIndex = 11;
			this->button12->TabStop = false;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Orange;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(146, 274);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(40, 40);
			this->button13->TabIndex = 12;
			this->button13->TabStop = false;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Blue;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(200, 182);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(40, 40);
			this->button14->TabIndex = 13;
			this->button14->TabStop = false;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::Button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Blue;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(246, 182);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(40, 40);
			this->button15->TabIndex = 14;
			this->button15->TabStop = false;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Blue;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(292, 182);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(40, 40);
			this->button16->TabIndex = 15;
			this->button16->TabStop = false;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::Button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Blue;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(200, 228);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(40, 40);
			this->button17->TabIndex = 16;
			this->button17->TabStop = false;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::Button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Blue;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->button18->ForeColor = System::Drawing::SystemColors::Window;
			this->button18->Location = System::Drawing::Point(246, 228);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(40, 40);
			this->button18->TabIndex = 17;
			this->button18->TabStop = false;
			this->button18->Text = L"F";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::Button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Blue;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(292, 228);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(40, 40);
			this->button19->TabIndex = 18;
			this->button19->TabStop = false;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::Button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Blue;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(200, 274);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(40, 40);
			this->button20->TabIndex = 19;
			this->button20->TabStop = false;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::Button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Blue;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(246, 274);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(40, 40);
			this->button21->TabIndex = 20;
			this->button21->TabStop = false;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::Button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Blue;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(292, 274);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(40, 40);
			this->button22->TabIndex = 21;
			this->button22->TabStop = false;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::Button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Red;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(346, 182);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(40, 40);
			this->button23->TabIndex = 22;
			this->button23->TabStop = false;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::Button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Red;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(392, 182);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(40, 40);
			this->button24->TabIndex = 23;
			this->button24->TabStop = false;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::Button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Red;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(438, 182);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(40, 40);
			this->button25->TabIndex = 24;
			this->button25->TabStop = false;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::Button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Red;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(346, 228);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(40, 40);
			this->button26->TabIndex = 25;
			this->button26->TabStop = false;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::Button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Red;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->button27->Location = System::Drawing::Point(392, 228);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(40, 40);
			this->button27->TabIndex = 26;
			this->button27->TabStop = false;
			this->button27->Text = L"R";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::Button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Red;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Location = System::Drawing::Point(438, 228);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(40, 40);
			this->button28->TabIndex = 27;
			this->button28->TabStop = false;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::Button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Red;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Location = System::Drawing::Point(346, 274);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(40, 40);
			this->button29->TabIndex = 28;
			this->button29->TabStop = false;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::Button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::Red;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Location = System::Drawing::Point(392, 274);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(40, 40);
			this->button30->TabIndex = 29;
			this->button30->TabStop = false;
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::Button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::Red;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Location = System::Drawing::Point(438, 274);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(40, 40);
			this->button31->TabIndex = 30;
			this->button31->TabStop = false;
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::Button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::Green;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Location = System::Drawing::Point(492, 182);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(40, 40);
			this->button32->TabIndex = 31;
			this->button32->TabStop = false;
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::Button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::Green;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Location = System::Drawing::Point(538, 182);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(40, 40);
			this->button33->TabIndex = 32;
			this->button33->TabStop = false;
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::Button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::Green;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Location = System::Drawing::Point(584, 182);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(40, 40);
			this->button34->TabIndex = 33;
			this->button34->TabStop = false;
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::Button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::Green;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Location = System::Drawing::Point(492, 228);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(40, 40);
			this->button35->TabIndex = 34;
			this->button35->TabStop = false;
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::Button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::Green;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->button36->Location = System::Drawing::Point(538, 228);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(40, 40);
			this->button36->TabIndex = 35;
			this->button36->TabStop = false;
			this->button36->Text = L"B";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::Button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::Green;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Location = System::Drawing::Point(584, 228);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(40, 40);
			this->button37->TabIndex = 36;
			this->button37->TabStop = false;
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::Button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::Green;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Location = System::Drawing::Point(492, 274);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(40, 40);
			this->button38->TabIndex = 37;
			this->button38->TabStop = false;
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::Button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::Green;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Location = System::Drawing::Point(538, 274);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(40, 40);
			this->button39->TabIndex = 38;
			this->button39->TabStop = false;
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::Button39_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::Green;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Location = System::Drawing::Point(584, 274);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(40, 40);
			this->button40->TabIndex = 39;
			this->button40->TabStop = false;
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::Button40_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::Yellow;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Location = System::Drawing::Point(200, 36);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(40, 40);
			this->button41->TabIndex = 40;
			this->button41->TabStop = false;
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::Button41_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::Yellow;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Location = System::Drawing::Point(246, 36);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(40, 40);
			this->button42->TabIndex = 41;
			this->button42->TabStop = false;
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::Button42_Click);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::Yellow;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Location = System::Drawing::Point(292, 36);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(40, 40);
			this->button43->TabIndex = 42;
			this->button43->TabStop = false;
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::Button43_Click);
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::Yellow;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Location = System::Drawing::Point(200, 82);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(40, 40);
			this->button44->TabIndex = 43;
			this->button44->TabStop = false;
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::Button44_Click);
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::Yellow;
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->button45->Location = System::Drawing::Point(246, 82);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(40, 40);
			this->button45->TabIndex = 44;
			this->button45->TabStop = false;
			this->button45->Text = L"U";
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::Button45_Click);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::Yellow;
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Location = System::Drawing::Point(292, 82);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(40, 40);
			this->button46->TabIndex = 45;
			this->button46->TabStop = false;
			this->button46->UseVisualStyleBackColor = false;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::Button46_Click);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::Yellow;
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Location = System::Drawing::Point(200, 128);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(40, 40);
			this->button47->TabIndex = 46;
			this->button47->TabStop = false;
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::Button47_Click);
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::Color::Yellow;
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button48->Location = System::Drawing::Point(246, 128);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(40, 40);
			this->button48->TabIndex = 47;
			this->button48->TabStop = false;
			this->button48->UseVisualStyleBackColor = false;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::Button48_Click);
			// 
			// button49
			// 
			this->button49->BackColor = System::Drawing::Color::Yellow;
			this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button49->Location = System::Drawing::Point(292, 128);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(40, 40);
			this->button49->TabIndex = 48;
			this->button49->TabStop = false;
			this->button49->UseVisualStyleBackColor = false;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::Button49_Click);
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::Color::White;
			this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button50->Location = System::Drawing::Point(200, 328);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(40, 40);
			this->button50->TabIndex = 49;
			this->button50->TabStop = false;
			this->button50->UseVisualStyleBackColor = false;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::Button50_Click);
			// 
			// button51
			// 
			this->button51->BackColor = System::Drawing::Color::White;
			this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button51->Location = System::Drawing::Point(246, 328);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(40, 40);
			this->button51->TabIndex = 50;
			this->button51->TabStop = false;
			this->button51->UseVisualStyleBackColor = false;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::Button51_Click);
			// 
			// button52
			// 
			this->button52->BackColor = System::Drawing::Color::White;
			this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button52->Location = System::Drawing::Point(292, 328);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(40, 40);
			this->button52->TabIndex = 51;
			this->button52->TabStop = false;
			this->button52->UseVisualStyleBackColor = false;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::Button52_Click);
			// 
			// button53
			// 
			this->button53->BackColor = System::Drawing::Color::White;
			this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button53->Location = System::Drawing::Point(200, 374);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(40, 40);
			this->button53->TabIndex = 52;
			this->button53->TabStop = false;
			this->button53->UseVisualStyleBackColor = false;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::Button53_Click);
			// 
			// button54
			// 
			this->button54->BackColor = System::Drawing::Color::White;
			this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button54->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->button54->Location = System::Drawing::Point(246, 374);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(40, 40);
			this->button54->TabIndex = 53;
			this->button54->TabStop = false;
			this->button54->Text = L"D";
			this->button54->UseVisualStyleBackColor = false;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::Button54_Click);
			// 
			// button55
			// 
			this->button55->BackColor = System::Drawing::Color::White;
			this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button55->Location = System::Drawing::Point(292, 374);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(40, 40);
			this->button55->TabIndex = 54;
			this->button55->TabStop = false;
			this->button55->UseVisualStyleBackColor = false;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::Button55_Click);
			// 
			// button56
			// 
			this->button56->BackColor = System::Drawing::Color::White;
			this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button56->Location = System::Drawing::Point(200, 420);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(40, 40);
			this->button56->TabIndex = 55;
			this->button56->TabStop = false;
			this->button56->UseVisualStyleBackColor = false;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::Button56_Click);
			// 
			// button57
			// 
			this->button57->BackColor = System::Drawing::Color::White;
			this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button57->Location = System::Drawing::Point(246, 420);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(40, 40);
			this->button57->TabIndex = 56;
			this->button57->TabStop = false;
			this->button57->UseVisualStyleBackColor = false;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::Button57_Click);
			// 
			// button58
			// 
			this->button58->BackColor = System::Drawing::Color::White;
			this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button58->Location = System::Drawing::Point(292, 420);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(40, 40);
			this->button58->TabIndex = 57;
			this->button58->TabStop = false;
			this->button58->UseVisualStyleBackColor = false;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::Button58_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::LightGray;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(748, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(457, 30);
			this->textBox1->TabIndex = 58;
			this->textBox1->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->BackColor = System::Drawing::Color::LightGray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(677, 128);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(551, 27);
			this->textBox2->TabIndex = 59;
			this->textBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(674, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 20);
			this->label1->TabIndex = 60;
			this->label1->Text = L"Solution:";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(511, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 20);
			this->label2->TabIndex = 61;
			this->label2->Text = L"or";
			// 
			// cleancube
			// 
			this->cleancube->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cleancube->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->cleancube->Location = System::Drawing::Point(33, 22);
			this->cleancube->Name = L"cleancube";
			this->cleancube->Size = System::Drawing::Size(125, 50);
			this->cleancube->TabIndex = 62;
			this->cleancube->TabStop = false;
			this->cleancube->Text = L"Clean cube!";
			this->cleancube->UseVisualStyleBackColor = true;
			this->cleancube->Click += gcnew System::EventHandler(this, &MyForm::Button59_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(674, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(655, 20);
			this->label3->TabIndex = 63;
			this->label3->Text = L"Cross ---------------------------------------------------------------------------"
				L"--------------------------";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(674, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(656, 20);
			this->label4->TabIndex = 64;
			this->label4->Text = L"Corners--------------------------------------------------------------------------"
				L"-------------------------";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->BackColor = System::Drawing::Color::LightGray;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->textBox3->Location = System::Drawing::Point(677, 182);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(551, 27);
			this->textBox3->TabIndex = 65;
			this->textBox3->TabStop = false;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->BackColor = System::Drawing::Color::LightGray;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->textBox4->Location = System::Drawing::Point(677, 234);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(551, 46);
			this->textBox4->TabIndex = 66;
			this->textBox4->TabStop = false;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->BackColor = System::Drawing::Color::LightGray;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->textBox5->Location = System::Drawing::Point(677, 306);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(551, 46);
			this->textBox5->TabIndex = 67;
			this->textBox5->TabStop = false;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(674, 212);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(653, 20);
			this->label5->TabIndex = 68;
			this->label5->Text = L"Edges ---------------------------------------------------------------------------"
				L"-------------------------";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(674, 283);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(656, 20);
			this->label6->TabIndex = 69;
			this->label6->Text = L"OLL -----------------------------------------------------------------------------"
				L"--------------------------";
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox6->BackColor = System::Drawing::Color::LightGray;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Enabled = false;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->textBox6->Location = System::Drawing::Point(677, 378);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(551, 46);
			this->textBox6->TabIndex = 70;
			this->textBox6->TabStop = false;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(676, 355);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(654, 20);
			this->label7->TabIndex = 71;
			this->label7->Text = L"PLL -----------------------------------------------------------------------------"
				L"--------------------------";
			// 
			// button60
			// 
			this->button60->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button60->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button60->Location = System::Drawing::Point(378, 22);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(125, 50);
			this->button60->TabIndex = 72;
			this->button60->TabStop = false;
			this->button60->Text = L"Show actual solution";
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &MyForm::Button60_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::Timer1_Tick);
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(745, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 20);
			this->label8->TabIndex = 73;
			this->label8->Text = L"(20 moves)";
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::Timer2_Tick);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(678, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 50);
			this->button2->TabIndex = 74;
			this->button2->TabStop = false;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// textBox7
			// 
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox7->BackColor = System::Drawing::Color::LightGray;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->textBox7->Location = System::Drawing::Point(978, 437);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(42, 27);
			this->textBox7->TabIndex = 75;
			this->textBox7->TabStop = false;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(674, 440);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(270, 20);
			this->label9->TabIndex = 76;
			this->label9->Text = L"The numbers of moves in the solution:";
			// 
			// button59
			// 
			this->button59->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button59->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button59->Location = System::Drawing::Point(873, 543);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(125, 50);
			this->button59->TabIndex = 77;
			this->button59->Text = L"START! (Space)";
			this->button59->UseVisualStyleBackColor = true;
			this->button59->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::down);
			this->button59->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::up);
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(373, 378);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(186, 76);
			this->label10->TabIndex = 78;
			this->label10->Text = L" 0.00";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// timer3
			// 
			this->timer3->Interval = 1;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::Timer3_Tick);
			// 
			// progressBar1
			// 
			this->progressBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->progressBar1->BackColor = System::Drawing::SystemColors::ControlText;
			this->progressBar1->Location = System::Drawing::Point(748, 57);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(457, 12);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 80;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(374, 619);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(27, 20);
			this->label11->TabIndex = 81;
			this->label11->Text = L"---";
			// 
			// timer4
			// 
			this->timer4->Interval = 1;
			this->timer4->Tick += gcnew System::EventHandler(this, &MyForm::Timer4_Tick);
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label12->Location = System::Drawing::Point(27, 502);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(85, 20);
			this->label12->TabIndex = 82;
			this->label12->Text = L"Lasts times:";
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(85, 544);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 20);
			this->label13->TabIndex = 83;
			this->label13->Text = L"---";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label14->Location = System::Drawing::Point(85, 573);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(27, 20);
			this->label14->TabIndex = 84;
			this->label14->Text = L"---";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label15->Location = System::Drawing::Point(85, 603);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(27, 20);
			this->label15->TabIndex = 85;
			this->label15->Text = L"---";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label16->Location = System::Drawing::Point(85, 633);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(27, 20);
			this->label16->TabIndex = 86;
			this->label16->Text = L"---";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label17->Location = System::Drawing::Point(85, 665);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(27, 20);
			this->label17->TabIndex = 87;
			this->label17->Text = L"---";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label18
			// 
			this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label18->Location = System::Drawing::Point(374, 528);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(27, 20);
			this->label18->TabIndex = 88;
			this->label18->Text = L"---";
			// 
			// label19
			// 
			this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label19->Location = System::Drawing::Point(27, 544);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(19, 20);
			this->label19->TabIndex = 89;
			this->label19->Text = L"1.";
			// 
			// label20
			// 
			this->label20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label20->Location = System::Drawing::Point(25, 573);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(21, 20);
			this->label20->TabIndex = 90;
			this->label20->Text = L"2.";
			// 
			// label21
			// 
			this->label21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label21->Location = System::Drawing::Point(25, 603);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(21, 20);
			this->label21->TabIndex = 91;
			this->label21->Text = L"3.";
			// 
			// label22
			// 
			this->label22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label22->Location = System::Drawing::Point(24, 633);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(22, 20);
			this->label22->TabIndex = 92;
			this->label22->Text = L"4.";
			// 
			// label23
			// 
			this->label23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label23->Location = System::Drawing::Point(24, 665);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(21, 20);
			this->label23->TabIndex = 93;
			this->label23->Text = L"5.";
			// 
			// label24
			// 
			this->label24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label24->Location = System::Drawing::Point(374, 573);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(27, 20);
			this->label24->TabIndex = 94;
			this->label24->Text = L"---";
			// 
			// label25
			// 
			this->label25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label25->Location = System::Drawing::Point(374, 665);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(27, 20);
			this->label25->TabIndex = 95;
			this->label25->Text = L"---";
			// 
			// label26
			// 
			this->label26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label26->Location = System::Drawing::Point(196, 619);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(75, 20);
			this->label26->TabIndex = 96;
			this->label26->Text = L"Best time:";
			// 
			// label27
			// 
			this->label27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label27->Location = System::Drawing::Point(196, 528);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(70, 20);
			this->label27->TabIndex = 97;
			this->label27->Text = L"Avg of 5:";
			// 
			// label28
			// 
			this->label28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label28->Location = System::Drawing::Point(196, 573);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(100, 20);
			this->label28->TabIndex = 98;
			this->label28->Text = L"Best avg of 5:";
			// 
			// label29
			// 
			this->label29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->label29->Location = System::Drawing::Point(196, 665);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(114, 20);
			this->label29->TabIndex = 99;
			this->label29->Text = L"Solves counter:";
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(651, 470);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->chart1->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(2) { System::Drawing::Color::Red, System::Drawing::Color::Lime };
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->IsVisibleInLegend = false;
			series3->Legend = L"Legend1";
			series3->MarkerColor = System::Drawing::Color::White;
			series3->Name = L"Time";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->IsVisibleInLegend = false;
			series4->Legend = L"Legend1";
			series4->Name = L"Avg";
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(596, 279);
			this->chart1->TabIndex = 100;
			this->chart1->Text = L"chart1";
			// 
			// timer5
			// 
			this->timer5->Tick += gcnew System::EventHandler(this, &MyForm::Timer5_Tick);
			// 
			// button61
			// 
			this->button61->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button61->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->button61->Location = System::Drawing::Point(495, 556);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(129, 50);
			this->button61->TabIndex = 101;
			this->button61->Text = L"Speedcube Mode";
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &MyForm::Button61_Click);
			// 
			// label30
			// 
			this->label30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(12, 704);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(292, 17);
			this->label30->TabIndex = 102;
			this->label30->Text = L"Creator: Sebastian Brzustowicz (21-05-2019)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(1240, 730);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->button61);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cleancube);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button59);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(3000, 2000);
			this->MinimumSize = System::Drawing::Size(1257, 777);
			this->Name = L"MyForm";
			this->Text = L"Cube Solver";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik11)
		{
		case 6:
		{button5->BackColor = ForeColor.Orange; objzmienna->licznik11 = 1; break; }
		case 1:
		{button5->BackColor = ForeColor.Blue;   objzmienna->licznik11 = 2; break; }
		case 2:
		{button5->BackColor = ForeColor.Red;    objzmienna->licznik11 = 3; break; }
		case 3:
		{button5->BackColor = ForeColor.Green;  objzmienna->licznik11 = 4; break; }
		case 4:
		{button5->BackColor = ForeColor.Yellow; objzmienna->licznik11 = 5; break; }
		case 5:
		{button5->BackColor = ForeColor.White;  objzmienna->licznik11 = 6; break; }
		}
	}
	private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik12)
		{
		case 6:
		{button6->BackColor = ForeColor.Orange; objzmienna->licznik12 = 1; break; }
		case 1:
		{button6->BackColor = ForeColor.Blue;   objzmienna->licznik12 = 2; break; }
		case 2:
		{button6->BackColor = ForeColor.Red;    objzmienna->licznik12 = 3; break; }
		case 3:
		{button6->BackColor = ForeColor.Green;  objzmienna->licznik12 = 4; break; }
		case 4:
		{button6->BackColor = ForeColor.Yellow; objzmienna->licznik12 = 5; break; }
		case 5:
		{button6->BackColor = ForeColor.White;  objzmienna->licznik12 = 6; break; }
		}
	}
	private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik13)
		{
		case 6:
		{button7->BackColor = ForeColor.Orange; objzmienna->licznik13 = 1; break; }
		case 1:
		{button7->BackColor = ForeColor.Blue;   objzmienna->licznik13 = 2; break; }
		case 2:
		{button7->BackColor = ForeColor.Red;    objzmienna->licznik13 = 3; break; }
		case 3:
		{button7->BackColor = ForeColor.Green;  objzmienna->licznik13 = 4; break; }
		case 4:
		{button7->BackColor = ForeColor.Yellow; objzmienna->licznik13 = 5; break; }
		case 5:
		{button7->BackColor = ForeColor.White;  objzmienna->licznik13 = 6; break; }
		}
	}
	private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik14)
		{
		case 6:
		{button8->BackColor = ForeColor.Orange; objzmienna->licznik14 = 1; break; }
		case 1:
		{button8->BackColor = ForeColor.Blue;   objzmienna->licznik14 = 2; break; }
		case 2:
		{button8->BackColor = ForeColor.Red;    objzmienna->licznik14 = 3; break; }
		case 3:
		{button8->BackColor = ForeColor.Green;  objzmienna->licznik14 = 4; break; }
		case 4:
		{button8->BackColor = ForeColor.Yellow; objzmienna->licznik14 = 5; break; }
		case 5:
		{button8->BackColor = ForeColor.White;  objzmienna->licznik14 = 6; break; }
		}
	}
	private: System::Void Button10_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik16)
		{
		case 6:
		{button10->BackColor = ForeColor.Orange; objzmienna->licznik16 = 1; break; }
		case 1:
		{button10->BackColor = ForeColor.Blue;   objzmienna->licznik16 = 2; break; }
		case 2:
		{button10->BackColor = ForeColor.Red;    objzmienna->licznik16 = 3; break; }
		case 3:
		{button10->BackColor = ForeColor.Green;  objzmienna->licznik16 = 4; break; }
		case 4:
		{button10->BackColor = ForeColor.Yellow; objzmienna->licznik16 = 5; break; }
		case 5:
		{button10->BackColor = ForeColor.White;  objzmienna->licznik16 = 6; break; }
		}
	}
	private: System::Void Button11_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik17)
		{
		case 6:
		{button11->BackColor = ForeColor.Orange; objzmienna->licznik17 = 1; break; }
		case 1:
		{button11->BackColor = ForeColor.Blue;   objzmienna->licznik17 = 2; break; }
		case 2:
		{button11->BackColor = ForeColor.Red;    objzmienna->licznik17 = 3; break; }
		case 3:
		{button11->BackColor = ForeColor.Green;  objzmienna->licznik17 = 4; break; }
		case 4:
		{button11->BackColor = ForeColor.Yellow; objzmienna->licznik17 = 5; break; }
		case 5:
		{button11->BackColor = ForeColor.White;  objzmienna->licznik17 = 6; break; }
		}
	}
	private: System::Void Button12_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik18)
		{
		case 6:
		{button12->BackColor = ForeColor.Orange; objzmienna->licznik18 = 1; break; }
		case 1:
		{button12->BackColor = ForeColor.Blue;   objzmienna->licznik18 = 2; break; }
		case 2:
		{button12->BackColor = ForeColor.Red;    objzmienna->licznik18 = 3; break; }
		case 3:
		{button12->BackColor = ForeColor.Green;  objzmienna->licznik18 = 4; break; }
		case 4:
		{button12->BackColor = ForeColor.Yellow; objzmienna->licznik18 = 5; break; }
		case 5:
		{button12->BackColor = ForeColor.White;  objzmienna->licznik18 = 6; break; }
		}
	}
	private: System::Void Button13_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik19)
		{
		case 6:
		{button13->BackColor = ForeColor.Orange; objzmienna->licznik19 = 1; break; }
		case 1:
		{button13->BackColor = ForeColor.Blue;   objzmienna->licznik19 = 2; break; }
		case 2:
		{button13->BackColor = ForeColor.Red;    objzmienna->licznik19 = 3; break; }
		case 3:
		{button13->BackColor = ForeColor.Green;  objzmienna->licznik19 = 4; break; }
		case 4:
		{button13->BackColor = ForeColor.Yellow; objzmienna->licznik19 = 5; break; }
		case 5:
		{button13->BackColor = ForeColor.White;  objzmienna->licznik19 = 6; break; }
		}
	}
	private: System::Void Button14_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik21)
		{
		case 6:
		{button14->BackColor = ForeColor.Orange; objzmienna->licznik21 = 1; break; }
		case 1:
		{button14->BackColor = ForeColor.Blue;   objzmienna->licznik21 = 2; break; }
		case 2:
		{button14->BackColor = ForeColor.Red;   objzmienna->licznik21 = 3; break; }
		case 3:
		{button14->BackColor = ForeColor.Green;  objzmienna->licznik21 = 4; break; }
		case 4:
		{button14->BackColor = ForeColor.Yellow; objzmienna->licznik21 = 5; break; }
		case 5:
		{button14->BackColor = ForeColor.White; objzmienna->licznik21 = 6; break; }
		}
	}
	private: System::Void Button15_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik22)
		{
		case 6:
		{button15->BackColor = ForeColor.Orange; objzmienna->licznik22 = 1; break; }
		case 1:
		{button15->BackColor = ForeColor.Blue;  objzmienna->licznik22 = 2; break; }
		case 2:
		{button15->BackColor = ForeColor.Red;   objzmienna->licznik22 = 3; break; }
		case 3:
		{button15->BackColor = ForeColor.Green; objzmienna->licznik22 = 4; break; }
		case 4:
		{button15->BackColor = ForeColor.Yellow; objzmienna->licznik22 = 5; break; }
		case 5:
		{button15->BackColor = ForeColor.White; objzmienna->licznik22 = 6; break; }
		}
	}
	private: System::Void Button16_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik23)
		{
		case 6:
		{button16->BackColor = ForeColor.Orange; objzmienna->licznik23 = 1; break; }
		case 1:
		{button16->BackColor = ForeColor.Blue;  objzmienna->licznik23 = 2; break; }
		case 2:
		{button16->BackColor = ForeColor.Red;   objzmienna->licznik23 = 3; break; }
		case 3:
		{button16->BackColor = ForeColor.Green; objzmienna->licznik23 = 4; break; }
		case 4:
		{button16->BackColor = ForeColor.Yellow; objzmienna->licznik23 = 5; break; }
		case 5:
		{button16->BackColor = ForeColor.White;  objzmienna->licznik23 = 6; break; }
		}
	}
	private: System::Void Button17_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik24)
		{
		case 6:
		{button17->BackColor = ForeColor.Orange; objzmienna->licznik24 = 1; break; }
		case 1:
		{button17->BackColor = ForeColor.Blue;   objzmienna->licznik24 = 2; break; }
		case 2:
		{button17->BackColor = ForeColor.Red;    objzmienna->licznik24 = 3; break; }
		case 3:
		{button17->BackColor = ForeColor.Green; objzmienna->licznik24 = 4; break; }
		case 4:
		{button17->BackColor = ForeColor.Yellow; objzmienna->licznik24 = 5; break; }
		case 5:
		{button17->BackColor = ForeColor.White;  objzmienna->licznik24 = 6; break; }
		}
	}
	private: System::Void Button19_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik26)
		{
		case 6:
		{button19->BackColor = ForeColor.Orange; objzmienna->licznik26 = 1; break; }
		case 1:
		{button19->BackColor = ForeColor.Blue;  objzmienna->licznik26 = 2; break; }
		case 2:
		{button19->BackColor = ForeColor.Red;    objzmienna->licznik26 = 3; break; }
		case 3:
		{button19->BackColor = ForeColor.Green;  objzmienna->licznik26 = 4; break; }
		case 4:
		{button19->BackColor = ForeColor.Yellow; objzmienna->licznik26 = 5; break; }
		case 5:
		{button19->BackColor = ForeColor.White;  objzmienna->licznik26 = 6; break; }
		}
	}
	private: System::Void Button20_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik27)
		{
		case 6:
		{button20->BackColor = ForeColor.Orange; objzmienna->licznik27 = 1; break; }
		case 1:
		{button20->BackColor = ForeColor.Blue;  objzmienna->licznik27 = 2; break; }
		case 2:
		{button20->BackColor = ForeColor.Red;   objzmienna->licznik27 = 3; break; }
		case 3:
		{button20->BackColor = ForeColor.Green; objzmienna->licznik27 = 4; break; }
		case 4:
		{button20->BackColor = ForeColor.Yellow; objzmienna->licznik27 = 5; break; }
		case 5:
		{button20->BackColor = ForeColor.White;  objzmienna->licznik27 = 6; break; }
		}
	}
	private: System::Void Button21_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik28)
		{
		case 6:
		{button21->BackColor = ForeColor.Orange; objzmienna->licznik28 = 1; break; }
		case 1:
		{button21->BackColor = ForeColor.Blue;  objzmienna->licznik28 = 2; break; }
		case 2:
		{button21->BackColor = ForeColor.Red;    objzmienna->licznik28 = 3; break; }
		case 3:
		{button21->BackColor = ForeColor.Green;  objzmienna->licznik28 = 4; break; }
		case 4:
		{button21->BackColor = ForeColor.Yellow; objzmienna->licznik28 = 5; break; }
		case 5:
		{button21->BackColor = ForeColor.White;  objzmienna->licznik28 = 6; break; }
		}
	}
	private: System::Void Button22_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik29)
		{
		case 6:
		{button22->BackColor = ForeColor.Orange; objzmienna->licznik29 = 1; break; }
		case 1:
		{button22->BackColor = ForeColor.Blue;  objzmienna->licznik29 = 2; break; }
		case 2:
		{button22->BackColor = ForeColor.Red;   objzmienna->licznik29 = 3; break; }
		case 3:
		{button22->BackColor = ForeColor.Green; objzmienna->licznik29 = 4; break; }
		case 4:
		{button22->BackColor = ForeColor.Yellow; objzmienna->licznik29 = 5; break; }
		case 5:
		{button22->BackColor = ForeColor.White;  objzmienna->licznik29 = 6; break; }
		}
	}
	private: System::Void Button23_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik31)
		{
		case 6:
		{button23->BackColor = ForeColor.Orange; objzmienna->licznik31 = 1; break; }
		case 1:
		{button23->BackColor = ForeColor.Blue;  objzmienna->licznik31 = 2; break; }
		case 2:
		{button23->BackColor = ForeColor.Red;   objzmienna->licznik31 = 3; break; }
		case 3:
		{button23->BackColor = ForeColor.Green; objzmienna->licznik31 = 4; break; }
		case 4:
		{button23->BackColor = ForeColor.Yellow; objzmienna->licznik31 = 5; break; }
		case 5:
		{button23->BackColor = ForeColor.White; objzmienna->licznik31 = 6; break; }
		}
	}
	private: System::Void Button24_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik32)
		{
		case 6:
		{button24->BackColor = ForeColor.Orange; objzmienna->licznik32 = 1; break; }
		case 1:
		{button24->BackColor = ForeColor.Blue;  objzmienna->licznik32 = 2; break; }
		case 2:
		{button24->BackColor = ForeColor.Red;   objzmienna->licznik32 = 3; break; }
		case 3:
		{button24->BackColor = ForeColor.Green; objzmienna->licznik32 = 4; break; }
		case 4:
		{button24->BackColor = ForeColor.Yellow; objzmienna->licznik32 = 5; break; }
		case 5:
		{button24->BackColor = ForeColor.White;  objzmienna->licznik32 = 6; break; }
		}
	}
	private: System::Void Button25_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik33)
		{
		case 6:
		{button25->BackColor = ForeColor.Orange; objzmienna->licznik33 = 1; break; }
		case 1:
		{button25->BackColor = ForeColor.Blue;   objzmienna->licznik33 = 2; break; }
		case 2:
		{button25->BackColor = ForeColor.Red;   objzmienna->licznik33 = 3; break; }
		case 3:
		{button25->BackColor = ForeColor.Green;  objzmienna->licznik33 = 4; break; }
		case 4:
		{button25->BackColor = ForeColor.Yellow; objzmienna->licznik33 = 5; break; }
		case 5:
		{button25->BackColor = ForeColor.White;  objzmienna->licznik33 = 6; break; }
		}
	}
	private: System::Void Button26_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik34)
		{
		case 6:
		{button26->BackColor = ForeColor.Orange; objzmienna->licznik34 = 1; break; }
		case 1:
		{button26->BackColor = ForeColor.Blue;   objzmienna->licznik34 = 2; break; }
		case 2:
		{button26->BackColor = ForeColor.Red;    objzmienna->licznik34 = 3; break; }
		case 3:
		{button26->BackColor = ForeColor.Green;  objzmienna->licznik34 = 4; break; }
		case 4:
		{button26->BackColor = ForeColor.Yellow; objzmienna->licznik34 = 5; break; }
		case 5:
		{button26->BackColor = ForeColor.White;  objzmienna->licznik34 = 6; break; }
		}
	}
	private: System::Void Button28_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik36)
		{
		case 6:
		{button28->BackColor = ForeColor.Orange; objzmienna->licznik36 = 1; break; }
		case 1:
		{button28->BackColor = ForeColor.Blue;   objzmienna->licznik36 = 2; break; }
		case 2:
		{button28->BackColor = ForeColor.Red;    objzmienna->licznik36 = 3; break; }
		case 3:
		{button28->BackColor = ForeColor.Green;  objzmienna->licznik36 = 4; break; }
		case 4:
		{button28->BackColor = ForeColor.Yellow; objzmienna->licznik36 = 5; break; }
		case 5:
		{button28->BackColor = ForeColor.White;  objzmienna->licznik36 = 6; break; }
		}
	}
	private: System::Void Button29_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik37)
		{
		case 6:
		{button29->BackColor = ForeColor.Orange; objzmienna->licznik37 = 1; break; }
		case 1:
		{button29->BackColor = ForeColor.Blue;   objzmienna->licznik37 = 2; break; }
		case 2:
		{button29->BackColor = ForeColor.Red;    objzmienna->licznik37 = 3; break; }
		case 3:
		{button29->BackColor = ForeColor.Green;  objzmienna->licznik37 = 4; break; }
		case 4:
		{button29->BackColor = ForeColor.Yellow; objzmienna->licznik37 = 5; break; }
		case 5:
		{button29->BackColor = ForeColor.White;  objzmienna->licznik37 = 6; break; }
		}
	}
	private: System::Void Button30_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik38)
		{
		case 6:
		{button30->BackColor = ForeColor.Orange; objzmienna->licznik38 = 1; break; }
		case 1:
		{button30->BackColor = ForeColor.Blue;   objzmienna->licznik38 = 2; break; }
		case 2:
		{button30->BackColor = ForeColor.Red;   objzmienna->licznik38 = 3; break; }
		case 3:
		{button30->BackColor = ForeColor.Green;  objzmienna->licznik38 = 4; break; }
		case 4:
		{button30->BackColor = ForeColor.Yellow; objzmienna->licznik38 = 5; break; }
		case 5:
		{button30->BackColor = ForeColor.White; objzmienna->licznik38 = 6; break; }
		}
	}
	private: System::Void Button31_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik39)
		{
		case 6:
		{button31->BackColor = ForeColor.Orange; objzmienna->licznik39 = 1; break; }
		case 1:
		{button31->BackColor = ForeColor.Blue;   objzmienna->licznik39 = 2; break; }
		case 2:
		{button31->BackColor = ForeColor.Red;    objzmienna->licznik39 = 3; break; }
		case 3:
		{button31->BackColor = ForeColor.Green;  objzmienna->licznik39 = 4; break; }
		case 4:
		{button31->BackColor = ForeColor.Yellow; objzmienna->licznik39 = 5; break; }
		case 5:
		{button31->BackColor = ForeColor.White;  objzmienna->licznik39 = 6; break; }
		}
	}
	private: System::Void Button32_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik41)
		{
		case 6:
		{button32->BackColor = ForeColor.Orange; objzmienna->licznik41 = 1; break; }
		case 1:
		{button32->BackColor = ForeColor.Blue;   objzmienna->licznik41 = 2; break; }
		case 2:
		{button32->BackColor = ForeColor.Red;    objzmienna->licznik41 = 3; break; }
		case 3:
		{button32->BackColor = ForeColor.Green;  objzmienna->licznik41 = 4; break; }
		case 4:
		{button32->BackColor = ForeColor.Yellow; objzmienna->licznik41 = 5; break; }
		case 5:
		{button32->BackColor = ForeColor.White;  objzmienna->licznik41 = 6; break; }
		}
	}
	private: System::Void Button33_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik42)
		{
		case 6:
		{button33->BackColor = ForeColor.Orange; objzmienna->licznik42 = 1; break; }
		case 1:
		{button33->BackColor = ForeColor.Blue;   objzmienna->licznik42 = 2; break; }
		case 2:
		{button33->BackColor = ForeColor.Red;    objzmienna->licznik42 = 3; break; }
		case 3:
		{button33->BackColor = ForeColor.Green;  objzmienna->licznik42 = 4; break; }
		case 4:
		{button33->BackColor = ForeColor.Yellow; objzmienna->licznik42 = 5; break; }
		case 5:
		{button33->BackColor = ForeColor.White;  objzmienna->licznik42 = 6; break; }
		}
	}
	private: System::Void Button34_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik43)
		{
		case 6:
		{button34->BackColor = ForeColor.Orange; objzmienna->licznik43 = 1; break; }
		case 1:
		{button34->BackColor = ForeColor.Blue;  objzmienna->licznik43 = 2; break; }
		case 2:
		{button34->BackColor = ForeColor.Red;   objzmienna->licznik43 = 3; break; }
		case 3:
		{button34->BackColor = ForeColor.Green;  objzmienna->licznik43 = 4; break; }
		case 4:
		{button34->BackColor = ForeColor.Yellow; objzmienna->licznik43 = 5; break; }
		case 5:
		{button34->BackColor = ForeColor.White; objzmienna->licznik43 = 6; break; }
		}
	}
	private: System::Void Button35_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik44)
		{
		case 6:
		{button35->BackColor = ForeColor.Orange; objzmienna->licznik44 = 1; break; }
		case 1:
		{button35->BackColor = ForeColor.Blue;  objzmienna->licznik44 = 2; break; }
		case 2:
		{button35->BackColor = ForeColor.Red;   objzmienna->licznik44 = 3; break; }
		case 3:
		{button35->BackColor = ForeColor.Green; objzmienna->licznik44 = 4; break; }
		case 4:
		{button35->BackColor = ForeColor.Yellow; objzmienna->licznik44 = 5; break; }
		case 5:
		{button35->BackColor = ForeColor.White; objzmienna->licznik44 = 6; break; }
		}
	}
	private: System::Void Button37_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik46)
		{
		case 6:
		{button37->BackColor = ForeColor.Orange; objzmienna->licznik46 = 1; break; }
		case 1:
		{button37->BackColor = ForeColor.Blue;  objzmienna->licznik46 = 2; break; }
		case 2:
		{button37->BackColor = ForeColor.Red;   objzmienna->licznik46 = 3; break; }
		case 3:
		{button37->BackColor = ForeColor.Green;  objzmienna->licznik46 = 4; break; }
		case 4:
		{button37->BackColor = ForeColor.Yellow; objzmienna->licznik46 = 5; break; }
		case 5:
		{button37->BackColor = ForeColor.White; objzmienna->licznik46 = 6; break; }
		}
	}
	private: System::Void Button38_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik47)
		{
		case 6:
		{button38->BackColor = ForeColor.Orange; objzmienna->licznik47 = 1; break; }
		case 1:
		{button38->BackColor = ForeColor.Blue;  objzmienna->licznik47 = 2; break; }
		case 2:
		{button38->BackColor = ForeColor.Red;   objzmienna->licznik47 = 3; break; }
		case 3:
		{button38->BackColor = ForeColor.Green;  objzmienna->licznik47 = 4; break; }
		case 4:
		{button38->BackColor = ForeColor.Yellow; objzmienna->licznik47 = 5; break; }
		case 5:
		{button38->BackColor = ForeColor.White;  objzmienna->licznik47 = 6; break; }
		}
	}
	private: System::Void Button39_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik48)
		{
		case 6:
		{button39->BackColor = ForeColor.Orange; objzmienna->licznik48 = 1; break; }
		case 1:
		{button39->BackColor = ForeColor.Blue;  objzmienna->licznik48 = 2; break; }
		case 2:
		{button39->BackColor = ForeColor.Red;   objzmienna->licznik48 = 3; break; }
		case 3:
		{button39->BackColor = ForeColor.Green;  objzmienna->licznik48 = 4; break; }
		case 4:
		{button39->BackColor = ForeColor.Yellow; objzmienna->licznik48 = 5; break; }
		case 5:
		{button39->BackColor = ForeColor.White; objzmienna->licznik48 = 6; break; }
		}
	}
	private: System::Void Button40_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik49)
		{
		case 6:
		{button40->BackColor = ForeColor.Orange; objzmienna->licznik49 = 1; break; }
		case 1:
		{button40->BackColor = ForeColor.Blue;   objzmienna->licznik49 = 2; break; }
		case 2:
		{button40->BackColor = ForeColor.Red;    objzmienna->licznik49 = 3; break; }
		case 3:
		{button40->BackColor = ForeColor.Green;  objzmienna->licznik49 = 4; break; }
		case 4:
		{button40->BackColor = ForeColor.Yellow; objzmienna->licznik49 = 5; break; }
		case 5:
		{button40->BackColor = ForeColor.White;  objzmienna->licznik49 = 6; break; }
		}
	}
	private: System::Void Button41_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik51)
		{
		case 6:
		{button41->BackColor = ForeColor.Orange; objzmienna->licznik51 = 1; break; }
		case 1:
		{button41->BackColor = ForeColor.Blue;  objzmienna->licznik51 = 2; break; }
		case 2:
		{button41->BackColor = ForeColor.Red;    objzmienna->licznik51 = 3; break; }
		case 3:
		{button41->BackColor = ForeColor.Green;  objzmienna->licznik51 = 4; break; }
		case 4:
		{button41->BackColor = ForeColor.Yellow; objzmienna->licznik51 = 5; break; }
		case 5:
		{button41->BackColor = ForeColor.White;  objzmienna->licznik51 = 6; break; }
		}
	}
	private: System::Void Button42_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik52)
		{
		case 6:
		{button42->BackColor = ForeColor.Orange; objzmienna->licznik52 = 1; break; }
		case 1:
		{button42->BackColor = ForeColor.Blue;  objzmienna->licznik52 = 2; break; }
		case 2:
		{button42->BackColor = ForeColor.Red;   objzmienna->licznik52 = 3; break; }
		case 3:
		{button42->BackColor = ForeColor.Green; objzmienna->licznik52 = 4; break; }
		case 4:
		{button42->BackColor = ForeColor.Yellow; objzmienna->licznik52 = 5; break; }
		case 5:
		{button42->BackColor = ForeColor.White; objzmienna->licznik52 = 6; break; }
		}
	}
	private: System::Void Button43_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik53)
		{
		case 6:
		{button43->BackColor = ForeColor.Orange; objzmienna->licznik53 = 1; break; }
		case 1:
		{button43->BackColor = ForeColor.Blue;  objzmienna->licznik53 = 2; break; }
		case 2:
		{button43->BackColor = ForeColor.Red;    objzmienna->licznik53 = 3; break; }
		case 3:
		{button43->BackColor = ForeColor.Green; objzmienna->licznik53 = 4; break; }
		case 4:
		{button43->BackColor = ForeColor.Yellow; objzmienna->licznik53 = 5; break; }
		case 5:
		{button43->BackColor = ForeColor.White; objzmienna->licznik53 = 6; break; }
		}
	}
	private: System::Void Button44_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik54)
		{
		case 6:
		{button44->BackColor = ForeColor.Orange; objzmienna->licznik54 = 1; break; }
		case 1:
		{button44->BackColor = ForeColor.Blue;   objzmienna->licznik54 = 2; break; }
		case 2:
		{button44->BackColor = ForeColor.Red;   objzmienna->licznik54 = 3; break; }
		case 3:
		{button44->BackColor = ForeColor.Green; objzmienna->licznik54 = 4; break; }
		case 4:
		{button44->BackColor = ForeColor.Yellow; objzmienna->licznik54 = 5; break; }
		case 5:
		{button44->BackColor = ForeColor.White; objzmienna->licznik54 = 6; break; }
		}
	}
	private: System::Void Button46_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik56)
		{
		case 6:
		{button46->BackColor = ForeColor.Orange; objzmienna->licznik56 = 1; break; }
		case 1:
		{button46->BackColor = ForeColor.Blue;  objzmienna->licznik56 = 2; break; }
		case 2:
		{button46->BackColor = ForeColor.Red;  objzmienna->licznik56 = 3; break; }
		case 3:
		{button46->BackColor = ForeColor.Green; objzmienna->licznik56 = 4; break; }
		case 4:
		{button46->BackColor = ForeColor.Yellow; objzmienna->licznik56 = 5; break; }
		case 5:
		{button46->BackColor = ForeColor.White; objzmienna->licznik56 = 6; break; }
		}
	}
	private: System::Void Button47_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik57)
		{
		case 6:
		{button47->BackColor = ForeColor.Orange; objzmienna->licznik57 = 1; break; }
		case 1:
		{button47->BackColor = ForeColor.Blue;  objzmienna->licznik57 = 2; break; }
		case 2:
		{button47->BackColor = ForeColor.Red;   objzmienna->licznik57 = 3; break; }
		case 3:
		{button47->BackColor = ForeColor.Green; objzmienna->licznik57 = 4; break; }
		case 4:
		{button47->BackColor = ForeColor.Yellow; objzmienna->licznik57 = 5; break; }
		case 5:
		{button47->BackColor = ForeColor.White; objzmienna->licznik57 = 6; break; }
		}
	}
	private: System::Void Button48_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik58)
		{
		case 6:
		{button48->BackColor = ForeColor.Orange; objzmienna->licznik58 = 1; break; }
		case 1:
		{button48->BackColor = ForeColor.Blue;   objzmienna->licznik58 = 2; break; }
		case 2:
		{button48->BackColor = ForeColor.Red;   objzmienna->licznik58 = 3; break; }
		case 3:
		{button48->BackColor = ForeColor.Green;  objzmienna->licznik58 = 4; break; }
		case 4:
		{button48->BackColor = ForeColor.Yellow; objzmienna->licznik58 = 5; break; }
		case 5:
		{button48->BackColor = ForeColor.White; objzmienna->licznik58 = 6; break; }
		}
	}
	private: System::Void Button49_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik59)
		{
		case 6:
		{button49->BackColor = ForeColor.Orange; objzmienna->licznik59 = 1; break; }
		case 1:
		{button49->BackColor = ForeColor.Blue;   objzmienna->licznik59 = 2; break; }
		case 2:
		{button49->BackColor = ForeColor.Red;   objzmienna->licznik59 = 3; break; }
		case 3:
		{button49->BackColor = ForeColor.Green; objzmienna->licznik59 = 4; break; }
		case 4:
		{button49->BackColor = ForeColor.Yellow; objzmienna->licznik59 = 5; break; }
		case 5:
		{button49->BackColor = ForeColor.White;  objzmienna->licznik59 = 6; break; }
		}
	}
	private: System::Void Button50_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik61)
		{
		case 6:
		{button50->BackColor = ForeColor.Orange; objzmienna->licznik61 = 1; break; }
		case 1:
		{button50->BackColor = ForeColor.Blue;  objzmienna->licznik61 = 2; break; }
		case 2:
		{button50->BackColor = ForeColor.Red;   objzmienna->licznik61 = 3; break; }
		case 3:
		{button50->BackColor = ForeColor.Green;  objzmienna->licznik61 = 4; break; }
		case 4:
		{button50->BackColor = ForeColor.Yellow; objzmienna->licznik61 = 5; break; }
		case 5:
		{button50->BackColor = ForeColor.White;  objzmienna->licznik61 = 6; break; }
		}
	}
	private: System::Void Button51_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik62)
		{
		case 6:
		{button51->BackColor = ForeColor.Orange; objzmienna->licznik62 = 1; break; }
		case 1:
		{button51->BackColor = ForeColor.Blue;   objzmienna->licznik62 = 2; break; }
		case 2:
		{button51->BackColor = ForeColor.Red;   objzmienna->licznik62 = 3; break; }
		case 3:
		{button51->BackColor = ForeColor.Green;  objzmienna->licznik62 = 4; break; }
		case 4:
		{button51->BackColor = ForeColor.Yellow; objzmienna->licznik62 = 5; break; }
		case 5:
		{button51->BackColor = ForeColor.White; objzmienna->licznik62 = 6; break; }
		}
	}

	private: System::Void Button52_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik63)
		{
		case 6:
		{button52->BackColor = ForeColor.Orange; objzmienna->licznik63 = 1; break; }
		case 1:
		{button52->BackColor = ForeColor.Blue;  objzmienna->licznik63 = 2; break; }
		case 2:
		{button52->BackColor = ForeColor.Red;   objzmienna->licznik63 = 3; break; }
		case 3:
		{button52->BackColor = ForeColor.Green; objzmienna->licznik63 = 4; break; }
		case 4:
		{button52->BackColor = ForeColor.Yellow; objzmienna->licznik63 = 5; break; }
		case 5:
		{button52->BackColor = ForeColor.White; objzmienna->licznik63 = 6; break; }
		}
	}
	private: System::Void Button53_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik64)
		{
		case 6:
		{button53->BackColor = ForeColor.Orange; objzmienna->licznik64 = 1; break; }
		case 1:
		{button53->BackColor = ForeColor.Blue;   objzmienna->licznik64 = 2; break; }
		case 2:
		{button53->BackColor = ForeColor.Red;   objzmienna->licznik64 = 3; break; }
		case 3:
		{button53->BackColor = ForeColor.Green; objzmienna->licznik64 = 4; break; }
		case 4:
		{button53->BackColor = ForeColor.Yellow; objzmienna->licznik64 = 5; break; }
		case 5:
		{button53->BackColor = ForeColor.White;  objzmienna->licznik64 = 6; break; }
		}
	}
	private: System::Void Button55_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik66)
		{
		case 6:
		{button55->BackColor = ForeColor.Orange; objzmienna->licznik66 = 1; break; }
		case 1:
		{button55->BackColor = ForeColor.Blue;  objzmienna->licznik66 = 2; break; }
		case 2:
		{button55->BackColor = ForeColor.Red;   objzmienna->licznik66 = 3; break; }
		case 3:
		{button55->BackColor = ForeColor.Green; objzmienna->licznik66 = 4; break; }
		case 4:
		{button55->BackColor = ForeColor.Yellow; objzmienna->licznik66 = 5; break; }
		case 5:
		{button55->BackColor = ForeColor.White; objzmienna->licznik66 = 6; break; }
		}
	}
	private: System::Void Button56_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik67)
		{
		case 6:
		{button56->BackColor = ForeColor.Orange; objzmienna->licznik67 = 1; break; }
		case 1:
		{button56->BackColor = ForeColor.Blue;  objzmienna->licznik67 = 2; break; }
		case 2:
		{button56->BackColor = ForeColor.Red;   objzmienna->licznik67 = 3; break; }
		case 3:
		{button56->BackColor = ForeColor.Green; objzmienna->licznik67 = 4; break; }
		case 4:
		{button56->BackColor = ForeColor.Yellow; objzmienna->licznik67 = 5; break; }
		case 5:
		{button56->BackColor = ForeColor.White; objzmienna->licznik67 = 6; break; }
		}
	}
	private: System::Void Button57_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik68)
		{
		case 6:
		{button57->BackColor = ForeColor.Orange; objzmienna->licznik68 = 1; break; }
		case 1:
		{button57->BackColor = ForeColor.Blue;  objzmienna->licznik68 = 2; break; }
		case 2:
		{button57->BackColor = ForeColor.Red;    objzmienna->licznik68 = 3; break; }
		case 3:
		{button57->BackColor = ForeColor.Green;  objzmienna->licznik68 = 4; break; }
		case 4:
		{button57->BackColor = ForeColor.Yellow; objzmienna->licznik68 = 5; break; }
		case 5:
		{button57->BackColor = ForeColor.White; objzmienna->licznik68 = 6; break; }
		}
	}
	private: System::Void Button58_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		switch (objzmienna->licznik69)
		{
		case 6:
		{button58->BackColor = ForeColor.Orange; objzmienna->licznik69 = 1; break; }
		case 1:
		{button58->BackColor = ForeColor.Blue;  objzmienna->licznik69 = 2; break; }
		case 2:
		{button58->BackColor = ForeColor.Red;   objzmienna->licznik69 = 3; break; }
		case 3:
		{button58->BackColor = ForeColor.Green; objzmienna->licznik69 = 4; break; }
		case 4:
		{button58->BackColor = ForeColor.Yellow; objzmienna->licznik69 = 5; break; }
		case 5:
		{button58->BackColor = ForeColor.White;  objzmienna->licznik69 = 6; break; }
		}
	}


	public: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		progressBar1->Increment(-100);
		scianao->o1 = 11;
		scianao->o2 = 12;
		scianao->o3 = 13;
		scianao->o4 = 14;
		scianao->o5 = 15;
		scianao->o6 = 16;
		scianao->o7 = 17;
		scianao->o8 = 18;
		scianao->o9 = 19;
		scianay->y1 = 51;
		scianay->y2 = 52;
		scianay->y3 = 53;
		scianay->y4 = 54;
		scianay->y5 = 55;
		scianay->y6 = 56;
		scianay->y7 = 57;
		scianay->y8 = 58;
		scianay->y9 = 59;
		scianaw->w1 = 61;
		scianaw->w2 = 62;
		scianaw->w3 = 63;
		scianaw->w4 = 64;
		scianaw->w5 = 65;
		scianaw->w6 = 66;
		scianaw->w7 = 67;
		scianaw->w8 = 68;
		scianaw->w9 = 69;
		scianab->b1 = 21;
		scianab->b2 = 22;
		scianab->b3 = 23;
		scianab->b4 = 24;
		scianab->b5 = 25;
		scianab->b6 = 26;
		scianab->b7 = 27;
		scianab->b8 = 28;
		scianab->b9 = 29;
		scianag->g1 = 41;
		scianag->g2 = 42;
		scianag->g3 = 43;
		scianag->g4 = 44;
		scianag->g5 = 45;
		scianag->g6 = 46;
		scianag->g7 = 47;
		scianag->g8 = 48;
		scianag->g9 = 49;
		scianar->r1 = 31;
		scianar->r2 = 32;
		scianar->r3 = 33;
		scianar->r4 = 34;
		scianar->r5 = 35;
		scianar->r6 = 36;
		scianar->r7 = 37;
		scianar->r8 = 38;
		scianar->r9 = 39;
		//
		timer2->Start();
		textBox1->Text = ""; textBox2->Text = "";
		textBox2->BackColor = ForeColor.LightGray; textBox3->BackColor = ForeColor.LightGray; textBox4->BackColor = ForeColor.LightGray;
		textBox5->BackColor = ForeColor.LightGray; textBox6->BackColor = ForeColor.LightGray; textBox1->BackColor = ForeColor.GhostWhite;
		textBox7->BackColor = ForeColor.LightGray;
		timer1->Stop();	objzmienna->swapt = 0; timer1->Interval = 1;
		timer1->Start();
	}
			MyForm1 instrukcja;
	public: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		instrukcja.Show();
	}
	public: System::Void Button59_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		progressBar1->Increment(-100);
		timer1->Stop(); objzmienna->swapt = 0; timer1->Interval = 1;
		scianao->o1 = 11;
		scianao->o2 = 12;
		scianao->o3 = 13;
		scianao->o4 = 14;
		scianao->o5 = 15;
		scianao->o6 = 16;
		scianao->o7 = 17;
		scianao->o8 = 18;
		scianao->o9 = 19;
		scianay->y1 = 51;
		scianay->y2 = 52;
		scianay->y3 = 53;
		scianay->y4 = 54;
		scianay->y5 = 55;
		scianay->y6 = 56;
		scianay->y7 = 57;
		scianay->y8 = 58;
		scianay->y9 = 59;
		scianaw->w1 = 61;
		scianaw->w2 = 62;
		scianaw->w3 = 63;
		scianaw->w4 = 64;
		scianaw->w5 = 65;
		scianaw->w6 = 66;
		scianaw->w7 = 67;
		scianaw->w8 = 68;
		scianaw->w9 = 69;
		scianab->b1 = 21;
		scianab->b2 = 22;
		scianab->b3 = 23;
		scianab->b4 = 24;
		scianab->b5 = 25;
		scianab->b6 = 26;
		scianab->b7 = 27;
		scianab->b8 = 28;
		scianab->b9 = 29;
		scianag->g1 = 41;
		scianag->g2 = 42;
		scianag->g3 = 43;
		scianag->g4 = 44;
		scianag->g5 = 45;
		scianag->g6 = 46;
		scianag->g7 = 47;
		scianag->g8 = 48;
		scianag->g9 = 49;
		scianar->r1 = 31;
		scianar->r2 = 32;
		scianar->r3 = 33;
		scianar->r4 = 34;
		scianar->r5 = 35;
		scianar->r6 = 36;
		scianar->r7 = 37;
		scianar->r8 = 38;
		scianar->r9 = 39;
		//
		objzmienna->licznik11 = 1;
		objzmienna->licznik12 = 1;
		objzmienna->licznik13 = 1;
		objzmienna->licznik14 = 1;
		objzmienna->licznik16 = 1;
		objzmienna->licznik17 = 1;
		objzmienna->licznik18 = 1;
		objzmienna->licznik19 = 1;
		objzmienna->licznik21 = 2;
		objzmienna->licznik22 = 2;
		objzmienna->licznik23 = 2;
		objzmienna->licznik24 = 2;
		objzmienna->licznik26 = 2;
		objzmienna->licznik27 = 2;
		objzmienna->licznik28 = 2;
		objzmienna->licznik29 = 2;
		objzmienna->licznik31 = 3;
		objzmienna->licznik32 = 3;
		objzmienna->licznik33 = 3;
		objzmienna->licznik34 = 3;
		objzmienna->licznik36 = 3;
		objzmienna->licznik37 = 3;
		objzmienna->licznik38 = 3;
		objzmienna->licznik39 = 3;
		objzmienna->licznik41 = 4;
		objzmienna->licznik42 = 4;
		objzmienna->licznik43 = 4;
		objzmienna->licznik44 = 4;
		objzmienna->licznik46 = 4;
		objzmienna->licznik47 = 4;
		objzmienna->licznik48 = 4;
		objzmienna->licznik49 = 4;
		objzmienna->licznik51 = 5;
		objzmienna->licznik52 = 5;
		objzmienna->licznik53 = 5;
		objzmienna->licznik54 = 5;
		objzmienna->licznik56 = 5;
		objzmienna->licznik57 = 5;
		objzmienna->licznik58 = 5;
		objzmienna->licznik59 = 5;
		objzmienna->licznik61 = 6;
		objzmienna->licznik62 = 6;
		objzmienna->licznik63 = 6;
		objzmienna->licznik64 = 6;
		objzmienna->licznik66 = 6;
		objzmienna->licznik67 = 6;
		objzmienna->licznik68 = 6;
		objzmienna->licznik69 = 6;
		//
		timer2->Start();
		textBox1->Text = ""; textBox2->Text = ""; textBox3->Text = ""; textBox4->Text = ""; textBox5->Text = ""; textBox6->Text = ""; textBox7->Text = "";
		textBox2->BackColor = ForeColor.LightGray; textBox3->BackColor = ForeColor.LightGray; textBox4->BackColor = ForeColor.LightGray;
		textBox5->BackColor = ForeColor.LightGray; textBox6->BackColor = ForeColor.LightGray; textBox1->BackColor = ForeColor.LightGray;
		textBox7->BackColor = ForeColor.LightGray;
}  
			MyForm2 error404;
	private: System::Void Button60_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		progressBar1->Increment(-100);
		textBox1->Text = ""; textBox2->Text = ""; textBox3->Text = ""; textBox4->Text = ""; textBox5->Text = ""; textBox6->Text = ""; textBox7->Text = "";
		textBox2->BackColor = ForeColor.GhostWhite; textBox3->BackColor = ForeColor.GhostWhite; textBox4->BackColor = ForeColor.GhostWhite;
		textBox5->BackColor = ForeColor.GhostWhite; textBox6->BackColor = ForeColor.GhostWhite; textBox1->BackColor = ForeColor.LightGray;
		textBox7->BackColor = ForeColor.GhostWhite;
		//c1
		if (objzmienna->licznik13 == 1 && objzmienna->licznik57 == 5 && objzmienna->licznik21 == 2) { scianao->o3 = 13; scianay->y7 = 57; scianab->b1 = 21; };
		if (objzmienna->licznik13 == 2 && objzmienna->licznik57 == 1 && objzmienna->licznik21 == 5) { scianao->o3 = 21; scianay->y7 = 13; scianab->b1 = 57; };
		if (objzmienna->licznik13 == 5 && objzmienna->licznik57 == 2 && objzmienna->licznik21 == 1) { scianao->o3 = 57; scianay->y7 = 21; scianab->b1 = 13; };
		if (objzmienna->licznik13 == 2 && objzmienna->licznik57 == 5 && objzmienna->licznik21 == 3) { scianao->o3 = 23; scianay->y7 = 59; scianab->b1 = 31; };
		if (objzmienna->licznik13 == 3 && objzmienna->licznik57 == 2 && objzmienna->licznik21 == 5) { scianao->o3 = 31; scianay->y7 = 23; scianab->b1 = 59; };
		if (objzmienna->licznik13 == 5 && objzmienna->licznik57 == 3 && objzmienna->licznik21 == 2) { scianao->o3 = 59; scianay->y7 = 31; scianab->b1 = 23; };
		if (objzmienna->licznik13 == 3 && objzmienna->licznik57 == 5 && objzmienna->licznik21 == 4) { scianao->o3 = 33; scianay->y7 = 53; scianab->b1 = 41; };
		if (objzmienna->licznik13 == 4 && objzmienna->licznik57 == 3 && objzmienna->licznik21 == 5) { scianao->o3 = 41; scianay->y7 = 33; scianab->b1 = 53; };
		if (objzmienna->licznik13 == 5 && objzmienna->licznik57 == 4 && objzmienna->licznik21 == 3) { scianao->o3 = 53; scianay->y7 = 41; scianab->b1 = 33; };
		if (objzmienna->licznik13 == 4 && objzmienna->licznik57 == 5 && objzmienna->licznik21 == 1) { scianao->o3 = 43; scianay->y7 = 51; scianab->b1 = 11; };
		if (objzmienna->licznik13 == 1 && objzmienna->licznik57 == 4 && objzmienna->licznik21 == 5) { scianao->o3 = 11; scianay->y7 = 43; scianab->b1 = 51; };
		if (objzmienna->licznik13 == 5 && objzmienna->licznik57 == 1 && objzmienna->licznik21 == 4) { scianao->o3 = 51; scianay->y7 = 11; scianab->b1 = 43; };
		//d
		if (objzmienna->licznik13 == 2 && objzmienna->licznik57 == 6 && objzmienna->licznik21 == 1) { scianao->o3 = 27; scianay->y7 = 61; scianab->b1 = 19; };
		if (objzmienna->licznik13 == 1 && objzmienna->licznik57 == 2 && objzmienna->licznik21 == 6) { scianao->o3 = 19; scianay->y7 = 27; scianab->b1 = 61; };
		if (objzmienna->licznik13 == 6 && objzmienna->licznik57 == 1 && objzmienna->licznik21 == 2) { scianao->o3 = 61; scianay->y7 = 19; scianab->b1 = 27; };
		if (objzmienna->licznik13 == 3 && objzmienna->licznik57 == 6 && objzmienna->licznik21 == 2) { scianao->o3 = 37; scianay->y7 = 63; scianab->b1 = 29; };
		if (objzmienna->licznik13 == 2 && objzmienna->licznik57 == 3 && objzmienna->licznik21 == 6) { scianao->o3 = 29; scianay->y7 = 37; scianab->b1 = 63; };
		if (objzmienna->licznik13 == 6 && objzmienna->licznik57 == 2 && objzmienna->licznik21 == 3) { scianao->o3 = 63; scianay->y7 = 29; scianab->b1 = 37; };
		if (objzmienna->licznik13 == 4 && objzmienna->licznik57 == 6 && objzmienna->licznik21 == 3) { scianao->o3 = 47; scianay->y7 = 69; scianab->b1 = 39; };
		if (objzmienna->licznik13 == 3 && objzmienna->licznik57 == 4 && objzmienna->licznik21 == 6) { scianao->o3 = 39; scianay->y7 = 47; scianab->b1 = 69; };
		if (objzmienna->licznik13 == 6 && objzmienna->licznik57 == 3 && objzmienna->licznik21 == 4) { scianao->o3 = 69; scianay->y7 = 39; scianab->b1 = 47; };
		if (objzmienna->licznik13 == 1 && objzmienna->licznik57 == 6 && objzmienna->licznik21 == 4) { scianao->o3 = 17; scianay->y7 = 67; scianab->b1 = 49; };
		if (objzmienna->licznik13 == 4 && objzmienna->licznik57 == 1 && objzmienna->licznik21 == 6) { scianao->o3 = 49; scianay->y7 = 17; scianab->b1 = 67; };
		if (objzmienna->licznik13 == 6 && objzmienna->licznik57 == 4 && objzmienna->licznik21 == 1) { scianao->o3 = 67; scianay->y7 = 49; scianab->b1 = 17; };
		//c2
		if (objzmienna->licznik23 == 1 && objzmienna->licznik59 == 5 && objzmienna->licznik31 == 2) { scianab->b3 = 13; scianay->y9 = 57; scianar->r1 = 21; };
		if (objzmienna->licznik23 == 2 && objzmienna->licznik59 == 1 && objzmienna->licznik31 == 5) { scianab->b3 = 21; scianay->y9 = 13; scianar->r1 = 57; };
		if (objzmienna->licznik23 == 5 && objzmienna->licznik59 == 2 && objzmienna->licznik31 == 1) { scianab->b3 = 57; scianay->y9 = 21; scianar->r1 = 13; };
		if (objzmienna->licznik23 == 2 && objzmienna->licznik59 == 5 && objzmienna->licznik31 == 3) { scianab->b3 = 23; scianay->y9 = 59; scianar->r1 = 31; };
		if (objzmienna->licznik23 == 3 && objzmienna->licznik59 == 2 && objzmienna->licznik31 == 5) { scianab->b3 = 31; scianay->y9 = 23; scianar->r1 = 59; };
		if (objzmienna->licznik23 == 5 && objzmienna->licznik59 == 3 && objzmienna->licznik31 == 2) { scianab->b3 = 59; scianay->y9 = 31; scianar->r1 = 23; };
		if (objzmienna->licznik23 == 3 && objzmienna->licznik59 == 5 && objzmienna->licznik31 == 4) { scianab->b3 = 33; scianay->y9 = 53; scianar->r1 = 41; };
		if (objzmienna->licznik23 == 4 && objzmienna->licznik59 == 3 && objzmienna->licznik31 == 5) { scianab->b3 = 41; scianay->y9 = 33; scianar->r1 = 53; };
		if (objzmienna->licznik23 == 5 && objzmienna->licznik59 == 4 && objzmienna->licznik31 == 3) { scianab->b3 = 53; scianay->y9 = 41; scianar->r1 = 33; };
		if (objzmienna->licznik23 == 4 && objzmienna->licznik59 == 5 && objzmienna->licznik31 == 1) { scianab->b3 = 43; scianay->y9 = 51; scianar->r1 = 11; };
		if (objzmienna->licznik23 == 1 && objzmienna->licznik59 == 4 && objzmienna->licznik31 == 5) { scianab->b3 = 11; scianay->y9 = 43; scianar->r1 = 51; };
		if (objzmienna->licznik23 == 5 && objzmienna->licznik59 == 1 && objzmienna->licznik31 == 4) { scianab->b3 = 51; scianay->y9 = 11; scianar->r1 = 43; };
		//d
		if (objzmienna->licznik23 == 2 && objzmienna->licznik59 == 6 && objzmienna->licznik31 == 1) { scianab->b3 = 27; scianay->y9 = 61; scianar->r1 = 19; };
		if (objzmienna->licznik23 == 1 && objzmienna->licznik59 == 2 && objzmienna->licznik31 == 6) { scianab->b3 = 19; scianay->y9 = 27; scianar->r1 = 61; };
		if (objzmienna->licznik23 == 6 && objzmienna->licznik59 == 1 && objzmienna->licznik31 == 2) { scianab->b3 = 61; scianay->y9 = 19; scianar->r1 = 27; };
		if (objzmienna->licznik23 == 3 && objzmienna->licznik59 == 6 && objzmienna->licznik31 == 2) { scianab->b3 = 37; scianay->y9 = 63; scianar->r1 = 29; };
		if (objzmienna->licznik23 == 2 && objzmienna->licznik59 == 3 && objzmienna->licznik31 == 6) { scianab->b3 = 29; scianay->y9 = 37; scianar->r1 = 63; };
		if (objzmienna->licznik23 == 6 && objzmienna->licznik59 == 2 && objzmienna->licznik31 == 3) { scianab->b3 = 63; scianay->y9 = 29; scianar->r1 = 37; };
		if (objzmienna->licznik23 == 4 && objzmienna->licznik59 == 6 && objzmienna->licznik31 == 3) { scianab->b3 = 47; scianay->y9 = 69; scianar->r1 = 39; };
		if (objzmienna->licznik23 == 3 && objzmienna->licznik59 == 4 && objzmienna->licznik31 == 6) { scianab->b3 = 39; scianay->y9 = 47; scianar->r1 = 69; };
		if (objzmienna->licznik23 == 6 && objzmienna->licznik59 == 3 && objzmienna->licznik31 == 4) { scianab->b3 = 69; scianay->y9 = 39; scianar->r1 = 47; };
		if (objzmienna->licznik23 == 1 && objzmienna->licznik59 == 6 && objzmienna->licznik31 == 4) { scianab->b3 = 17; scianay->y9 = 67; scianar->r1 = 49; };
		if (objzmienna->licznik23 == 4 && objzmienna->licznik59 == 1 && objzmienna->licznik31 == 6) { scianab->b3 = 49; scianay->y9 = 17; scianar->r1 = 67; };
		if (objzmienna->licznik23 == 6 && objzmienna->licznik59 == 4 && objzmienna->licznik31 == 1) { scianab->b3 = 67; scianay->y9 = 49; scianar->r1 = 17; };
		//c3
		if (objzmienna->licznik33 == 1 && objzmienna->licznik53 == 5 && objzmienna->licznik41 == 2) { scianar->r3 = 13; scianay->y3 = 57; scianag->g1 = 21; };
		if (objzmienna->licznik33 == 2 && objzmienna->licznik53 == 1 && objzmienna->licznik41 == 5) { scianar->r3 = 21; scianay->y3 = 13; scianag->g1 = 57; };
		if (objzmienna->licznik33 == 5 && objzmienna->licznik53 == 2 && objzmienna->licznik41 == 1) { scianar->r3 = 57; scianay->y3 = 21; scianag->g1 = 13; };
		if (objzmienna->licznik33 == 2 && objzmienna->licznik53 == 5 && objzmienna->licznik41 == 3) { scianar->r3 = 23; scianay->y3 = 59; scianag->g1 = 31; };
		if (objzmienna->licznik33 == 3 && objzmienna->licznik53 == 2 && objzmienna->licznik41 == 5) { scianar->r3 = 31; scianay->y3 = 23; scianag->g1 = 59; };
		if (objzmienna->licznik33 == 5 && objzmienna->licznik53 == 3 && objzmienna->licznik41 == 2) { scianar->r3 = 59; scianay->y3 = 31; scianag->g1 = 23; };
		if (objzmienna->licznik33 == 3 && objzmienna->licznik53 == 5 && objzmienna->licznik41 == 4) { scianar->r3 = 33; scianay->y3 = 53; scianag->g1 = 41; };
		if (objzmienna->licznik33 == 4 && objzmienna->licznik53 == 3 && objzmienna->licznik41 == 5) { scianar->r3 = 41; scianay->y3 = 33; scianag->g1 = 53; };
		if (objzmienna->licznik33 == 5 && objzmienna->licznik53 == 4 && objzmienna->licznik41 == 3) { scianar->r3 = 53; scianay->y3 = 41; scianag->g1 = 33; };
		if (objzmienna->licznik33 == 4 && objzmienna->licznik53 == 5 && objzmienna->licznik41 == 1) { scianar->r3 = 43; scianay->y3 = 51; scianag->g1 = 11; };
		if (objzmienna->licznik33 == 1 && objzmienna->licznik53 == 4 && objzmienna->licznik41 == 5) { scianar->r3 = 11; scianay->y3 = 43; scianag->g1 = 51; };
		if (objzmienna->licznik33 == 5 && objzmienna->licznik53 == 1 && objzmienna->licznik41 == 4) { scianar->r3 = 51; scianay->y3 = 11; scianag->g1 = 43; };
		//
		if (objzmienna->licznik33 == 2 && objzmienna->licznik53 == 6 && objzmienna->licznik41 == 1) { scianar->r3 = 27; scianay->y3 = 61; scianag->g1 = 19; };
		if (objzmienna->licznik33 == 1 && objzmienna->licznik53 == 2 && objzmienna->licznik41 == 6) { scianar->r3 = 19; scianay->y3 = 27; scianag->g1 = 61; };
		if (objzmienna->licznik33 == 6 && objzmienna->licznik53 == 1 && objzmienna->licznik41 == 2) { scianar->r3 = 61; scianay->y3 = 19; scianag->g1 = 27; };
		if (objzmienna->licznik33 == 3 && objzmienna->licznik53 == 6 && objzmienna->licznik41 == 2) { scianar->r3 = 37; scianay->y3 = 63; scianag->g1 = 29; };
		if (objzmienna->licznik33 == 2 && objzmienna->licznik53 == 3 && objzmienna->licznik41 == 6) { scianar->r3 = 29; scianay->y3 = 37; scianag->g1 = 63; };
		if (objzmienna->licznik33 == 6 && objzmienna->licznik53 == 2 && objzmienna->licznik41 == 3) { scianar->r3 = 63; scianay->y3 = 29; scianag->g1 = 37; };
		if (objzmienna->licznik33 == 4 && objzmienna->licznik53 == 6 && objzmienna->licznik41 == 3) { scianar->r3 = 47; scianay->y3 = 69; scianag->g1 = 39; };
		if (objzmienna->licznik33 == 3 && objzmienna->licznik53 == 4 && objzmienna->licznik41 == 6) { scianar->r3 = 39; scianay->y3 = 47; scianag->g1 = 69; };
		if (objzmienna->licznik33 == 6 && objzmienna->licznik53 == 3 && objzmienna->licznik41 == 4) { scianar->r3 = 69; scianay->y3 = 39; scianag->g1 = 47; };
		if (objzmienna->licznik33 == 1 && objzmienna->licznik53 == 6 && objzmienna->licznik41 == 4) { scianar->r3 = 17; scianay->y3 = 67; scianag->g1 = 49; };
		if (objzmienna->licznik33 == 4 && objzmienna->licznik53 == 1 && objzmienna->licznik41 == 6) { scianar->r3 = 49; scianay->y3 = 17; scianag->g1 = 67; };
		if (objzmienna->licznik33 == 6 && objzmienna->licznik53 == 4 && objzmienna->licznik41 == 1) { scianar->r3 = 67; scianay->y3 = 49; scianag->g1 = 17; };
		//c4
		if (objzmienna->licznik43 == 1 && objzmienna->licznik51 == 5 && objzmienna->licznik11 == 2) { scianag->g3 = 13; scianay->y1 = 57; scianao->o1 = 21; };
		if (objzmienna->licznik43 == 2 && objzmienna->licznik51 == 1 && objzmienna->licznik11 == 5) { scianag->g3 = 21; scianay->y1 = 13; scianao->o1 = 57; };
		if (objzmienna->licznik43 == 5 && objzmienna->licznik51 == 2 && objzmienna->licznik11 == 1) { scianag->g3 = 57; scianay->y1 = 21; scianao->o1 = 13; };
		if (objzmienna->licznik43 == 2 && objzmienna->licznik51 == 5 && objzmienna->licznik11 == 3) { scianag->g3 = 23; scianay->y1 = 59; scianao->o1 = 31; };
		if (objzmienna->licznik43 == 3 && objzmienna->licznik51 == 2 && objzmienna->licznik11 == 5) { scianag->g3 = 31; scianay->y1 = 23; scianao->o1 = 59; };
		if (objzmienna->licznik43 == 5 && objzmienna->licznik51 == 3 && objzmienna->licznik11 == 2) { scianag->g3 = 59; scianay->y1 = 31; scianao->o1 = 23; };
		if (objzmienna->licznik43 == 3 && objzmienna->licznik51 == 5 && objzmienna->licznik11 == 4) { scianag->g3 = 33; scianay->y1 = 53; scianao->o1 = 41; };
		if (objzmienna->licznik43 == 4 && objzmienna->licznik51 == 3 && objzmienna->licznik11 == 5) { scianag->g3 = 41; scianay->y1 = 33; scianao->o1 = 53; };
		if (objzmienna->licznik43 == 5 && objzmienna->licznik51 == 4 && objzmienna->licznik11 == 3) { scianag->g3 = 53; scianay->y1 = 41; scianao->o1 = 33; };
		if (objzmienna->licznik43 == 4 && objzmienna->licznik51 == 5 && objzmienna->licznik11 == 1) { scianag->g3 = 43; scianay->y1 = 51; scianao->o1 = 11; };
		if (objzmienna->licznik43 == 1 && objzmienna->licznik51 == 4 && objzmienna->licznik11 == 5) { scianag->g3 = 11; scianay->y1 = 43; scianao->o1 = 51; };
		if (objzmienna->licznik43 == 5 && objzmienna->licznik51 == 1 && objzmienna->licznik11 == 4) { scianag->g3 = 51; scianay->y1 = 11; scianao->o1 = 43; };
		//
		if (objzmienna->licznik43 == 2 && objzmienna->licznik51 == 6 && objzmienna->licznik11 == 1) { scianag->g3 = 27; scianay->y1 = 61; scianao->o1 = 19; };
		if (objzmienna->licznik43 == 1 && objzmienna->licznik51 == 2 && objzmienna->licznik11 == 6) { scianag->g3 = 19; scianay->y1 = 27; scianao->o1 = 61; };
		if (objzmienna->licznik43 == 6 && objzmienna->licznik51 == 1 && objzmienna->licznik11 == 2) { scianag->g3 = 61; scianay->y1 = 19; scianao->o1 = 27; };
		if (objzmienna->licznik43 == 3 && objzmienna->licznik51 == 6 && objzmienna->licznik11 == 2) { scianag->g3 = 37; scianay->y1 = 63; scianao->o1 = 29; };
		if (objzmienna->licznik43 == 2 && objzmienna->licznik51 == 3 && objzmienna->licznik11 == 6) { scianag->g3 = 29; scianay->y1 = 37; scianao->o1 = 63; };
		if (objzmienna->licznik43 == 6 && objzmienna->licznik51 == 2 && objzmienna->licznik11 == 3) { scianag->g3 = 63; scianay->y1 = 29; scianao->o1 = 37; };
		if (objzmienna->licznik43 == 4 && objzmienna->licznik51 == 6 && objzmienna->licznik11 == 3) { scianag->g3 = 47; scianay->y1 = 69; scianao->o1 = 39; };
		if (objzmienna->licznik43 == 3 && objzmienna->licznik51 == 4 && objzmienna->licznik11 == 6) { scianag->g3 = 39; scianay->y1 = 47; scianao->o1 = 69; };
		if (objzmienna->licznik43 == 6 && objzmienna->licznik51 == 3 && objzmienna->licznik11 == 4) { scianag->g3 = 69; scianay->y1 = 39; scianao->o1 = 47; };
		if (objzmienna->licznik43 == 1 && objzmienna->licznik51 == 6 && objzmienna->licznik11 == 4) { scianag->g3 = 17; scianay->y1 = 67; scianao->o1 = 49; };
		if (objzmienna->licznik43 == 4 && objzmienna->licznik51 == 1 && objzmienna->licznik11 == 6) { scianag->g3 = 49; scianay->y1 = 17; scianao->o1 = 67; };
		if (objzmienna->licznik43 == 6 && objzmienna->licznik51 == 4 && objzmienna->licznik11 == 1) { scianag->g3 = 67; scianay->y1 = 49; scianao->o1 = 17; };
		//c5
		if (objzmienna->licznik61 == 1 && objzmienna->licznik19 == 5 && objzmienna->licznik27 == 2) { scianaw->w1 = 13; scianao->o9 = 57; scianab->b7 = 21; };
		if (objzmienna->licznik61 == 2 && objzmienna->licznik19 == 1 && objzmienna->licznik27 == 5) { scianaw->w1 = 21; scianao->o9 = 13; scianab->b7 = 57; };
		if (objzmienna->licznik61 == 5 && objzmienna->licznik19 == 2 && objzmienna->licznik27 == 1) { scianaw->w1 = 57; scianao->o9 = 21; scianab->b7 = 13; };
		if (objzmienna->licznik61 == 2 && objzmienna->licznik19 == 5 && objzmienna->licznik27 == 3) { scianaw->w1 = 23; scianao->o9 = 59; scianab->b7 = 31; };
		if (objzmienna->licznik61 == 3 && objzmienna->licznik19 == 2 && objzmienna->licznik27 == 5) { scianaw->w1 = 31; scianao->o9 = 23; scianab->b7 = 59; };
		if (objzmienna->licznik61 == 5 && objzmienna->licznik19 == 3 && objzmienna->licznik27 == 2) { scianaw->w1 = 59; scianao->o9 = 31; scianab->b7 = 23; };
		if (objzmienna->licznik61 == 3 && objzmienna->licznik19 == 5 && objzmienna->licznik27 == 4) { scianaw->w1 = 33; scianao->o9 = 53; scianab->b7 = 41; };
		if (objzmienna->licznik61 == 4 && objzmienna->licznik19 == 3 && objzmienna->licznik27 == 5) { scianaw->w1 = 41; scianao->o9 = 33; scianab->b7 = 53; };
		if (objzmienna->licznik61 == 5 && objzmienna->licznik19 == 4 && objzmienna->licznik27 == 3) { scianaw->w1 = 53; scianao->o9 = 41; scianab->b7 = 33; };
		if (objzmienna->licznik61 == 4 && objzmienna->licznik19 == 5 && objzmienna->licznik27 == 1) { scianaw->w1 = 43; scianao->o9 = 51; scianab->b7 = 11; };
		if (objzmienna->licznik61 == 1 && objzmienna->licznik19 == 4 && objzmienna->licznik27 == 5) { scianaw->w1 = 11; scianao->o9 = 43; scianab->b7 = 51; };
		if (objzmienna->licznik61 == 5 && objzmienna->licznik19 == 1 && objzmienna->licznik27 == 4) { scianaw->w1 = 51; scianao->o9 = 11; scianab->b7 = 43; };
		//
		if (objzmienna->licznik61 == 2 && objzmienna->licznik19 == 6 && objzmienna->licznik27 == 1) { scianaw->w1 = 27; scianao->o9 = 61; scianab->b7 = 19; };
		if (objzmienna->licznik61 == 1 && objzmienna->licznik19 == 2 && objzmienna->licznik27 == 6) { scianaw->w1 = 19; scianao->o9 = 27; scianab->b7 = 61; };
		if (objzmienna->licznik61 == 6 && objzmienna->licznik19 == 1 && objzmienna->licznik27 == 2) { scianaw->w1 = 61; scianao->o9 = 19; scianab->b7 = 27; };
		if (objzmienna->licznik61 == 3 && objzmienna->licznik19 == 6 && objzmienna->licznik27 == 2) { scianaw->w1 = 37; scianao->o9 = 63; scianab->b7 = 29; };
		if (objzmienna->licznik61 == 2 && objzmienna->licznik19 == 3 && objzmienna->licznik27 == 6) { scianaw->w1 = 29; scianao->o9 = 37; scianab->b7 = 63; };
		if (objzmienna->licznik61 == 6 && objzmienna->licznik19 == 2 && objzmienna->licznik27 == 3) { scianaw->w1 = 63; scianao->o9 = 29; scianab->b7 = 37; };
		if (objzmienna->licznik61 == 4 && objzmienna->licznik19 == 6 && objzmienna->licznik27 == 3) { scianaw->w1 = 47; scianao->o9 = 69; scianab->b7 = 39; };
		if (objzmienna->licznik61 == 3 && objzmienna->licznik19 == 4 && objzmienna->licznik27 == 6) { scianaw->w1 = 39; scianao->o9 = 47; scianab->b7 = 69; };
		if (objzmienna->licznik61 == 6 && objzmienna->licznik19 == 3 && objzmienna->licznik27 == 4) { scianaw->w1 = 69; scianao->o9 = 39; scianab->b7 = 47; };
		if (objzmienna->licznik61 == 1 && objzmienna->licznik19 == 6 && objzmienna->licznik27 == 4) { scianaw->w1 = 17; scianao->o9 = 67; scianab->b7 = 49; };
		if (objzmienna->licznik61 == 4 && objzmienna->licznik19 == 1 && objzmienna->licznik27 == 6) { scianaw->w1 = 49; scianao->o9 = 17; scianab->b7 = 67; };
		if (objzmienna->licznik61 == 6 && objzmienna->licznik19 == 4 && objzmienna->licznik27 == 1) { scianaw->w1 = 67; scianao->o9 = 49; scianab->b7 = 17; };
		//c6
		if (objzmienna->licznik63 == 1 && objzmienna->licznik29 == 5 && objzmienna->licznik37 == 2) { scianaw->w3 = 13; scianab->b9 = 57; scianar->r7 = 21; };
		if (objzmienna->licznik63 == 2 && objzmienna->licznik29 == 1 && objzmienna->licznik37 == 5) { scianaw->w3 = 21; scianab->b9 = 13; scianar->r7 = 57; };
		if (objzmienna->licznik63 == 5 && objzmienna->licznik29 == 2 && objzmienna->licznik37 == 1) { scianaw->w3 = 57; scianab->b9 = 21; scianar->r7 = 13; };
		if (objzmienna->licznik63 == 2 && objzmienna->licznik29 == 5 && objzmienna->licznik37 == 3) { scianaw->w3 = 23; scianab->b9 = 59; scianar->r7 = 31; };
		if (objzmienna->licznik63 == 3 && objzmienna->licznik29 == 2 && objzmienna->licznik37 == 5) { scianaw->w3 = 31; scianab->b9 = 23; scianar->r7 = 59; };
		if (objzmienna->licznik63 == 5 && objzmienna->licznik29 == 3 && objzmienna->licznik37 == 2) { scianaw->w3 = 59; scianab->b9 = 31; scianar->r7 = 23; };
		if (objzmienna->licznik63 == 3 && objzmienna->licznik29 == 5 && objzmienna->licznik37 == 4) { scianaw->w3 = 33; scianab->b9 = 53; scianar->r7 = 41; };
		if (objzmienna->licznik63 == 4 && objzmienna->licznik29 == 3 && objzmienna->licznik37 == 5) { scianaw->w3 = 41; scianab->b9 = 33; scianar->r7 = 53; };
		if (objzmienna->licznik63 == 5 && objzmienna->licznik29 == 4 && objzmienna->licznik37 == 3) { scianaw->w3 = 53; scianab->b9 = 41; scianar->r7 = 33; };
		if (objzmienna->licznik63 == 4 && objzmienna->licznik29 == 5 && objzmienna->licznik37 == 1) { scianaw->w3 = 43; scianab->b9 = 51; scianar->r7 = 11; };
		if (objzmienna->licznik63 == 1 && objzmienna->licznik29 == 4 && objzmienna->licznik37 == 5) { scianaw->w3 = 11; scianab->b9 = 43; scianar->r7 = 51; };
		if (objzmienna->licznik63 == 5 && objzmienna->licznik29 == 1 && objzmienna->licznik37 == 4) { scianaw->w3 = 51; scianab->b9 = 11; scianar->r7 = 43; };
		//
		if (objzmienna->licznik63 == 2 && objzmienna->licznik29 == 6 && objzmienna->licznik37 == 1) { scianaw->w3 = 27; scianab->b9 = 61; scianar->r7 = 19; };
		if (objzmienna->licznik63 == 1 && objzmienna->licznik29 == 2 && objzmienna->licznik37 == 6) { scianaw->w3 = 19; scianab->b9 = 27; scianar->r7 = 61; };
		if (objzmienna->licznik63 == 6 && objzmienna->licznik29 == 1 && objzmienna->licznik37 == 2) { scianaw->w3 = 61; scianab->b9 = 19; scianar->r7 = 27; };
		if (objzmienna->licznik63 == 3 && objzmienna->licznik29 == 6 && objzmienna->licznik37 == 2) { scianaw->w3 = 37; scianab->b9 = 63; scianar->r7 = 29; };
		if (objzmienna->licznik63 == 2 && objzmienna->licznik29 == 3 && objzmienna->licznik37 == 6) { scianaw->w3 = 29; scianab->b9 = 37; scianar->r7 = 63; };
		if (objzmienna->licznik63 == 6 && objzmienna->licznik29 == 2 && objzmienna->licznik37 == 3) { scianaw->w3 = 63; scianab->b9 = 29; scianar->r7 = 37; };
		if (objzmienna->licznik63 == 4 && objzmienna->licznik29 == 6 && objzmienna->licznik37 == 3) { scianaw->w3 = 47; scianab->b9 = 69; scianar->r7 = 39; };
		if (objzmienna->licznik63 == 3 && objzmienna->licznik29 == 4 && objzmienna->licznik37 == 6) { scianaw->w3 = 39; scianab->b9 = 47; scianar->r7 = 69; };
		if (objzmienna->licznik63 == 6 && objzmienna->licznik29 == 3 && objzmienna->licznik37 == 4) { scianaw->w3 = 69; scianab->b9 = 39; scianar->r7 = 47; };
		if (objzmienna->licznik63 == 1 && objzmienna->licznik29 == 6 && objzmienna->licznik37 == 4) { scianaw->w3 = 17; scianab->b9 = 67; scianar->r7 = 49; };
		if (objzmienna->licznik63 == 4 && objzmienna->licznik29 == 1 && objzmienna->licznik37 == 6) { scianaw->w3 = 49; scianab->b9 = 17; scianar->r7 = 67; };
		if (objzmienna->licznik63 == 6 && objzmienna->licznik29 == 4 && objzmienna->licznik37 == 1) { scianaw->w3 = 67; scianab->b9 = 49; scianar->r7 = 17; };
		//c7
		if (objzmienna->licznik69 == 1 && objzmienna->licznik39 == 5 && objzmienna->licznik47 == 2) { scianaw->w9 = 13; scianar->r9 = 57; scianag->g7 = 21; };
		if (objzmienna->licznik69 == 2 && objzmienna->licznik39 == 1 && objzmienna->licznik47 == 5) { scianaw->w9 = 21; scianar->r9 = 13; scianag->g7 = 57; };
		if (objzmienna->licznik69 == 5 && objzmienna->licznik39 == 2 && objzmienna->licznik47 == 1) { scianaw->w9 = 57; scianar->r9 = 21; scianag->g7 = 13; };
		if (objzmienna->licznik69 == 2 && objzmienna->licznik39 == 5 && objzmienna->licznik47 == 3) { scianaw->w9 = 23; scianar->r9 = 59; scianag->g7 = 31; };
		if (objzmienna->licznik69 == 3 && objzmienna->licznik39 == 2 && objzmienna->licznik47 == 5) { scianaw->w9 = 31; scianar->r9 = 23; scianag->g7 = 59; };
		if (objzmienna->licznik69 == 5 && objzmienna->licznik39 == 3 && objzmienna->licznik47 == 2) { scianaw->w9 = 59; scianar->r9 = 31; scianag->g7 = 23; };
		if (objzmienna->licznik69 == 3 && objzmienna->licznik39 == 5 && objzmienna->licznik47 == 4) { scianaw->w9 = 33; scianar->r9 = 53; scianag->g7 = 41; };
		if (objzmienna->licznik69 == 4 && objzmienna->licznik39 == 3 && objzmienna->licznik47 == 5) { scianaw->w9 = 41; scianar->r9 = 33; scianag->g7 = 53; };
		if (objzmienna->licznik69 == 5 && objzmienna->licznik39 == 4 && objzmienna->licznik47 == 3) { scianaw->w9 = 53; scianar->r9 = 41; scianag->g7 = 33; };
		if (objzmienna->licznik69 == 4 && objzmienna->licznik39 == 5 && objzmienna->licznik47 == 1) { scianaw->w9 = 43; scianar->r9 = 51; scianag->g7 = 11; };
		if (objzmienna->licznik69 == 1 && objzmienna->licznik39 == 4 && objzmienna->licznik47 == 5) { scianaw->w9 = 11; scianar->r9 = 43; scianag->g7 = 51; };
		if (objzmienna->licznik69 == 5 && objzmienna->licznik39 == 1 && objzmienna->licznik47 == 4) { scianaw->w9 = 51; scianar->r9 = 11; scianag->g7 = 43; };
		//
		if (objzmienna->licznik69 == 2 && objzmienna->licznik39 == 6 && objzmienna->licznik47 == 1) { scianaw->w9 = 27; scianar->r9 = 61; scianag->g7 = 19; };
		if (objzmienna->licznik69 == 1 && objzmienna->licznik39 == 2 && objzmienna->licznik47 == 6) { scianaw->w9 = 19; scianar->r9 = 27; scianag->g7 = 61; };
		if (objzmienna->licznik69 == 6 && objzmienna->licznik39 == 1 && objzmienna->licznik47 == 2) { scianaw->w9 = 61; scianar->r9 = 19; scianag->g7 = 27; };
		if (objzmienna->licznik69 == 3 && objzmienna->licznik39 == 6 && objzmienna->licznik47 == 2) { scianaw->w9 = 37; scianar->r9 = 63; scianag->g7 = 29; };
		if (objzmienna->licznik69 == 2 && objzmienna->licznik39 == 3 && objzmienna->licznik47 == 6) { scianaw->w9 = 29; scianar->r9 = 37; scianag->g7 = 63; };
		if (objzmienna->licznik69 == 6 && objzmienna->licznik39 == 2 && objzmienna->licznik47 == 3) { scianaw->w9 = 63; scianar->r9 = 29; scianag->g7 = 37; };
		if (objzmienna->licznik69 == 4 && objzmienna->licznik39 == 6 && objzmienna->licznik47 == 3) { scianaw->w9 = 47; scianar->r9 = 69; scianag->g7 = 39; };
		if (objzmienna->licznik69 == 3 && objzmienna->licznik39 == 4 && objzmienna->licznik47 == 6) { scianaw->w9 = 39; scianar->r9 = 47; scianag->g7 = 69; };
		if (objzmienna->licznik69 == 6 && objzmienna->licznik39 == 3 && objzmienna->licznik47 == 4) { scianaw->w9 = 69; scianar->r9 = 39; scianag->g7 = 47; };
		if (objzmienna->licznik69 == 1 && objzmienna->licznik39 == 6 && objzmienna->licznik47 == 4) { scianaw->w9 = 17; scianar->r9 = 67; scianag->g7 = 49; };
		if (objzmienna->licznik69 == 4 && objzmienna->licznik39 == 1 && objzmienna->licznik47 == 6) { scianaw->w9 = 49; scianar->r9 = 17; scianag->g7 = 67; };
		if (objzmienna->licznik69 == 6 && objzmienna->licznik39 == 4 && objzmienna->licznik47 == 1) { scianaw->w9 = 67; scianar->r9 = 49; scianag->g7 = 17; };
		//c8
		if (objzmienna->licznik67 == 1 && objzmienna->licznik49 == 5 && objzmienna->licznik17 == 2) { scianaw->w7 = 13; scianag->g9 = 57; scianao->o7 = 21; };
		if (objzmienna->licznik67 == 2 && objzmienna->licznik49 == 1 && objzmienna->licznik17 == 5) { scianaw->w7 = 21; scianag->g9 = 13; scianao->o7 = 57; };
		if (objzmienna->licznik67 == 5 && objzmienna->licznik49 == 2 && objzmienna->licznik17 == 1) { scianaw->w7 = 57; scianag->g9 = 21; scianao->o7 = 13; };
		if (objzmienna->licznik67 == 2 && objzmienna->licznik49 == 5 && objzmienna->licznik17 == 3) { scianaw->w7 = 23; scianag->g9 = 59; scianao->o7 = 31; };
		if (objzmienna->licznik67 == 3 && objzmienna->licznik49 == 2 && objzmienna->licznik17 == 5) { scianaw->w7 = 31; scianag->g9 = 23; scianao->o7 = 59; };
		if (objzmienna->licznik67 == 5 && objzmienna->licznik49 == 3 && objzmienna->licznik17 == 2) { scianaw->w7 = 59; scianag->g9 = 31; scianao->o7 = 23; };
		if (objzmienna->licznik67 == 3 && objzmienna->licznik49 == 5 && objzmienna->licznik17 == 4) { scianaw->w7 = 33; scianag->g9 = 53; scianao->o7 = 41; };
		if (objzmienna->licznik67 == 4 && objzmienna->licznik49 == 3 && objzmienna->licznik17 == 5) { scianaw->w7 = 41; scianag->g9 = 33; scianao->o7 = 53; };
		if (objzmienna->licznik67 == 5 && objzmienna->licznik49 == 4 && objzmienna->licznik17 == 3) { scianaw->w7 = 53; scianag->g9 = 41; scianao->o7 = 33; };
		if (objzmienna->licznik67 == 4 && objzmienna->licznik49 == 5 && objzmienna->licznik17 == 1) { scianaw->w7 = 43; scianag->g9 = 51; scianao->o7 = 11; };
		if (objzmienna->licznik67 == 1 && objzmienna->licznik49 == 4 && objzmienna->licznik17 == 5) { scianaw->w7 = 11; scianag->g9 = 43; scianao->o7 = 51; };
		if (objzmienna->licznik67 == 5 && objzmienna->licznik49 == 1 && objzmienna->licznik17 == 4) { scianaw->w7 = 51; scianag->g9 = 11; scianao->o7 = 43; };
		//
		if (objzmienna->licznik67 == 2 && objzmienna->licznik49 == 6 && objzmienna->licznik17 == 1) { scianaw->w7 = 27; scianag->g9 = 61; scianao->o7 = 19; };
		if (objzmienna->licznik67 == 1 && objzmienna->licznik49 == 2 && objzmienna->licznik17 == 6) { scianaw->w7 = 19; scianag->g9 = 27; scianao->o7 = 61; };
		if (objzmienna->licznik67 == 6 && objzmienna->licznik49 == 1 && objzmienna->licznik17 == 2) { scianaw->w7 = 61; scianag->g9 = 19; scianao->o7 = 27; };
		if (objzmienna->licznik67 == 3 && objzmienna->licznik49 == 6 && objzmienna->licznik17 == 2) { scianaw->w7 = 37; scianag->g9 = 63; scianao->o7 = 29; };
		if (objzmienna->licznik67 == 2 && objzmienna->licznik49 == 3 && objzmienna->licznik17 == 6) { scianaw->w7 = 29; scianag->g9 = 37; scianao->o7 = 63; };
		if (objzmienna->licznik67 == 6 && objzmienna->licznik49 == 2 && objzmienna->licznik17 == 3) { scianaw->w7 = 63; scianag->g9 = 29; scianao->o7 = 37; };
		if (objzmienna->licznik67 == 4 && objzmienna->licznik49 == 6 && objzmienna->licznik17 == 3) { scianaw->w7 = 47; scianag->g9 = 69; scianao->o7 = 39; };
		if (objzmienna->licznik67 == 3 && objzmienna->licznik49 == 4 && objzmienna->licznik17 == 6) { scianaw->w7 = 39; scianag->g9 = 47; scianao->o7 = 69; };
		if (objzmienna->licznik67 == 6 && objzmienna->licznik49 == 3 && objzmienna->licznik17 == 4) { scianaw->w7 = 69; scianag->g9 = 39; scianao->o7 = 47; };
		if (objzmienna->licznik67 == 1 && objzmienna->licznik49 == 6 && objzmienna->licznik17 == 4) { scianaw->w7 = 17; scianag->g9 = 67; scianao->o7 = 49; };
		if (objzmienna->licznik67 == 4 && objzmienna->licznik49 == 1 && objzmienna->licznik17 == 6) { scianaw->w7 = 49; scianag->g9 = 17; scianao->o7 = 67; };
		if (objzmienna->licznik67 == 6 && objzmienna->licznik49 == 4 && objzmienna->licznik17 == 1) { scianaw->w7 = 67; scianag->g9 = 49; scianao->o7 = 17; };
		//e1
		if (objzmienna->licznik22 == 2 && objzmienna->licznik58 == 5) { scianab->b2 = 22; scianay->y8 = 58; };
		if (objzmienna->licznik22 == 5 && objzmienna->licznik58 == 2) { scianab->b2 = 58; scianay->y8 = 22; };
		if (objzmienna->licznik22 == 3 && objzmienna->licznik58 == 5) { scianab->b2 = 32; scianay->y8 = 56; };
		if (objzmienna->licznik22 == 5 && objzmienna->licznik58 == 3) { scianab->b2 = 56; scianay->y8 = 32; };
		if (objzmienna->licznik22 == 4 && objzmienna->licznik58 == 5) { scianab->b2 = 42; scianay->y8 = 52; };
		if (objzmienna->licznik22 == 5 && objzmienna->licznik58 == 4) { scianab->b2 = 52; scianay->y8 = 42; };
		if (objzmienna->licznik22 == 1 && objzmienna->licznik58 == 5) { scianab->b2 = 12; scianay->y8 = 54; };
		if (objzmienna->licznik22 == 5 && objzmienna->licznik58 == 1) { scianab->b2 = 54; scianay->y8 = 12; };
		if (objzmienna->licznik22 == 2 && objzmienna->licznik58 == 3) { scianab->b2 = 26; scianay->y8 = 34; };
		if (objzmienna->licznik22 == 3 && objzmienna->licznik58 == 2) { scianab->b2 = 34; scianay->y8 = 26; };
		if (objzmienna->licznik22 == 3 && objzmienna->licznik58 == 4) { scianab->b2 = 36; scianay->y8 = 44; };
		if (objzmienna->licznik22 == 4 && objzmienna->licznik58 == 3) { scianab->b2 = 44; scianay->y8 = 36; };
		if (objzmienna->licznik22 == 4 && objzmienna->licznik58 == 1) { scianab->b2 = 46; scianay->y8 = 14; };
		if (objzmienna->licznik22 == 1 && objzmienna->licznik58 == 4) { scianab->b2 = 14; scianay->y8 = 46; };
		if (objzmienna->licznik22 == 1 && objzmienna->licznik58 == 2) { scianab->b2 = 16; scianay->y8 = 24; };
		if (objzmienna->licznik22 == 2 && objzmienna->licznik58 == 1) { scianab->b2 = 24; scianay->y8 = 16; };
		if (objzmienna->licznik22 == 2 && objzmienna->licznik58 == 6) { scianab->b2 = 28; scianay->y8 = 62; };
		if (objzmienna->licznik22 == 6 && objzmienna->licznik58 == 2) { scianab->b2 = 62; scianay->y8 = 28; };
		if (objzmienna->licznik22 == 3 && objzmienna->licznik58 == 6) { scianab->b2 = 38; scianay->y8 = 66; };
		if (objzmienna->licznik22 == 6 && objzmienna->licznik58 == 3) { scianab->b2 = 66; scianay->y8 = 38; };
		if (objzmienna->licznik22 == 4 && objzmienna->licznik58 == 6) { scianab->b2 = 48; scianay->y8 = 68; };
		if (objzmienna->licznik22 == 6 && objzmienna->licznik58 == 4) { scianab->b2 = 68; scianay->y8 = 48; };
		if (objzmienna->licznik22 == 1 && objzmienna->licznik58 == 6) { scianab->b2 = 18; scianay->y8 = 64; };
		if (objzmienna->licznik22 == 6 && objzmienna->licznik58 == 1) { scianab->b2 = 64; scianay->y8 = 18; };
		//e2
		if (objzmienna->licznik32 == 2 && objzmienna->licznik56 == 5) { scianar->r2 = 22; scianay->y6 = 58; };
		if (objzmienna->licznik32 == 5 && objzmienna->licznik56 == 2) { scianar->r2 = 58; scianay->y6 = 22; };
		if (objzmienna->licznik32 == 3 && objzmienna->licznik56 == 5) { scianar->r2 = 32; scianay->y6 = 56; };
		if (objzmienna->licznik32 == 5 && objzmienna->licznik56 == 3) { scianar->r2 = 56; scianay->y6 = 32; };
		if (objzmienna->licznik32 == 4 && objzmienna->licznik56 == 5) { scianar->r2 = 42; scianay->y6 = 52; };
		if (objzmienna->licznik32 == 5 && objzmienna->licznik56 == 4) { scianar->r2 = 52; scianay->y6 = 42; };
		if (objzmienna->licznik32 == 1 && objzmienna->licznik56 == 5) { scianar->r2 = 12; scianay->y6 = 54; };
		if (objzmienna->licznik32 == 5 && objzmienna->licznik56 == 1) { scianar->r2 = 54; scianay->y6 = 12; };
		if (objzmienna->licznik32 == 2 && objzmienna->licznik56 == 3) { scianar->r2 = 26; scianay->y6 = 34; };
		if (objzmienna->licznik32 == 3 && objzmienna->licznik56 == 2) { scianar->r2 = 34; scianay->y6 = 26; };
		if (objzmienna->licznik32 == 3 && objzmienna->licznik56 == 4) { scianar->r2 = 36; scianay->y6 = 44; };
		if (objzmienna->licznik32 == 4 && objzmienna->licznik56 == 3) { scianar->r2 = 44; scianay->y6 = 36; };
		if (objzmienna->licznik32 == 4 && objzmienna->licznik56 == 1) { scianar->r2 = 46; scianay->y6 = 14; };
		if (objzmienna->licznik32 == 1 && objzmienna->licznik56 == 4) { scianar->r2 = 14; scianay->y6 = 46; };
		if (objzmienna->licznik32 == 1 && objzmienna->licznik56 == 2) { scianar->r2 = 16; scianay->y6 = 24; };
		if (objzmienna->licznik32 == 2 && objzmienna->licznik56 == 1) { scianar->r2 = 24; scianay->y6 = 16; };
		if (objzmienna->licznik32 == 2 && objzmienna->licznik56 == 6) { scianar->r2 = 28; scianay->y6 = 62; };
		if (objzmienna->licznik32 == 6 && objzmienna->licznik56 == 2) { scianar->r2 = 62; scianay->y6 = 28; };
		if (objzmienna->licznik32 == 3 && objzmienna->licznik56 == 6) { scianar->r2 = 38; scianay->y6 = 66; };
		if (objzmienna->licznik32 == 6 && objzmienna->licznik56 == 3) { scianar->r2 = 66; scianay->y6 = 38; };
		if (objzmienna->licznik32 == 4 && objzmienna->licznik56 == 6) { scianar->r2 = 48; scianay->y6 = 68; };
		if (objzmienna->licznik32 == 6 && objzmienna->licznik56 == 4) { scianar->r2 = 68; scianay->y6 = 48; };
		if (objzmienna->licznik32 == 1 && objzmienna->licznik56 == 6) { scianar->r2 = 18; scianay->y6 = 64; };
		if (objzmienna->licznik32 == 6 && objzmienna->licznik56 == 1) { scianar->r2 = 64; scianay->y6 = 18; };
		//e3
		if (objzmienna->licznik42 == 2 && objzmienna->licznik52 == 5) { scianag->g2 = 22; scianay->y2 = 58; };
		if (objzmienna->licznik42 == 5 && objzmienna->licznik52 == 2) { scianag->g2 = 58; scianay->y2 = 22; };
		if (objzmienna->licznik42 == 3 && objzmienna->licznik52 == 5) { scianag->g2 = 32; scianay->y2 = 56; };
		if (objzmienna->licznik42 == 5 && objzmienna->licznik52 == 3) { scianag->g2 = 56; scianay->y2 = 32; };
		if (objzmienna->licznik42 == 4 && objzmienna->licznik52 == 5) { scianag->g2 = 42; scianay->y2 = 52; };
		if (objzmienna->licznik42 == 5 && objzmienna->licznik52 == 4) { scianag->g2 = 52; scianay->y2 = 42; };
		if (objzmienna->licznik42 == 1 && objzmienna->licznik52 == 5) { scianag->g2 = 12; scianay->y2 = 54; };
		if (objzmienna->licznik42 == 5 && objzmienna->licznik52 == 1) { scianag->g2 = 54; scianay->y2 = 12; };
		if (objzmienna->licznik42 == 2 && objzmienna->licznik52 == 3) { scianag->g2 = 26; scianay->y2 = 34; };
		if (objzmienna->licznik42 == 3 && objzmienna->licznik52 == 2) { scianag->g2 = 34; scianay->y2 = 26; };
		if (objzmienna->licznik42 == 3 && objzmienna->licznik52 == 4) { scianag->g2 = 36; scianay->y2 = 44; };
		if (objzmienna->licznik42 == 4 && objzmienna->licznik52 == 3) { scianag->g2 = 44; scianay->y2 = 36; };
		if (objzmienna->licznik42 == 4 && objzmienna->licznik52 == 1) { scianag->g2 = 46; scianay->y2 = 14; };
		if (objzmienna->licznik42 == 1 && objzmienna->licznik52 == 4) { scianag->g2 = 14; scianay->y2 = 46; };
		if (objzmienna->licznik42 == 1 && objzmienna->licznik52 == 2) { scianag->g2 = 16; scianay->y2 = 24; };
		if (objzmienna->licznik42 == 2 && objzmienna->licznik52 == 1) { scianag->g2 = 24; scianay->y2 = 16; };
		if (objzmienna->licznik42 == 2 && objzmienna->licznik52 == 6) { scianag->g2 = 28; scianay->y2 = 62; };
		if (objzmienna->licznik42 == 6 && objzmienna->licznik52 == 2) { scianag->g2 = 62; scianay->y2 = 28; };
		if (objzmienna->licznik42 == 3 && objzmienna->licznik52 == 6) { scianag->g2 = 38; scianay->y2 = 66; };
		if (objzmienna->licznik42 == 6 && objzmienna->licznik52 == 3) { scianag->g2 = 66; scianay->y2 = 38; };
		if (objzmienna->licznik42 == 4 && objzmienna->licznik52 == 6) { scianag->g2 = 48; scianay->y2 = 68; };
		if (objzmienna->licznik42 == 6 && objzmienna->licznik52 == 4) { scianag->g2 = 68; scianay->y2 = 48; };
		if (objzmienna->licznik42 == 1 && objzmienna->licznik52 == 6) { scianag->g2 = 18; scianay->y2 = 64; };
		if (objzmienna->licznik42 == 6 && objzmienna->licznik52 == 1) { scianag->g2 = 64; scianay->y2 = 18; };
		//e4
		if (objzmienna->licznik12 == 2 && objzmienna->licznik54 == 5) { scianao->o2 = 22; scianay->y4 = 58; };
		if (objzmienna->licznik12 == 5 && objzmienna->licznik54 == 2) { scianao->o2 = 58; scianay->y4 = 22; };
		if (objzmienna->licznik12 == 3 && objzmienna->licznik54 == 5) { scianao->o2 = 32; scianay->y4 = 56; };
		if (objzmienna->licznik12 == 5 && objzmienna->licznik54 == 3) { scianao->o2 = 56; scianay->y4 = 32; };
		if (objzmienna->licznik12 == 4 && objzmienna->licznik54 == 5) { scianao->o2 = 42; scianay->y4 = 52; };
		if (objzmienna->licznik12 == 5 && objzmienna->licznik54 == 4) { scianao->o2 = 52; scianay->y4 = 42; };
		if (objzmienna->licznik12 == 1 && objzmienna->licznik54 == 5) { scianao->o2 = 12; scianay->y4 = 54; };
		if (objzmienna->licznik12 == 5 && objzmienna->licznik54 == 1) { scianao->o2 = 54; scianay->y4 = 12; };
		if (objzmienna->licznik12 == 2 && objzmienna->licznik54 == 3) { scianao->o2 = 26; scianay->y4 = 34; };
		if (objzmienna->licznik12 == 3 && objzmienna->licznik54 == 2) { scianao->o2 = 34; scianay->y4 = 26; };
		if (objzmienna->licznik12 == 3 && objzmienna->licznik54 == 4) { scianao->o2 = 36; scianay->y4 = 44; };
		if (objzmienna->licznik12 == 4 && objzmienna->licznik54 == 3) { scianao->o2 = 44; scianay->y4 = 36; };
		if (objzmienna->licznik12 == 4 && objzmienna->licznik54 == 1) { scianao->o2 = 46; scianay->y4 = 14; };
		if (objzmienna->licznik12 == 1 && objzmienna->licznik54 == 4) { scianao->o2 = 14; scianay->y4 = 46; };
		if (objzmienna->licznik12 == 1 && objzmienna->licznik54 == 2) { scianao->o2 = 16; scianay->y4 = 24; };
		if (objzmienna->licznik12 == 2 && objzmienna->licznik54 == 1) { scianao->o2 = 24; scianay->y4 = 16; };
		if (objzmienna->licznik12 == 2 && objzmienna->licznik54 == 6) { scianao->o2 = 28; scianay->y4 = 62; };
		if (objzmienna->licznik12 == 6 && objzmienna->licznik54 == 2) { scianao->o2 = 62; scianay->y4 = 28; };
		if (objzmienna->licznik12 == 3 && objzmienna->licznik54 == 6) { scianao->o2 = 38; scianay->y4 = 66; };
		if (objzmienna->licznik12 == 6 && objzmienna->licznik54 == 3) { scianao->o2 = 66; scianay->y4 = 38; };
		if (objzmienna->licznik12 == 4 && objzmienna->licznik54 == 6) { scianao->o2 = 48; scianay->y4 = 68; };
		if (objzmienna->licznik12 == 6 && objzmienna->licznik54 == 4) { scianao->o2 = 68; scianay->y4 = 48; };
		if (objzmienna->licznik12 == 1 && objzmienna->licznik54 == 6) { scianao->o2 = 18; scianay->y4 = 64; };
		if (objzmienna->licznik12 == 6 && objzmienna->licznik54 == 1) { scianao->o2 = 64; scianay->y4 = 18; };
		//e5
		if (objzmienna->licznik26 == 2 && objzmienna->licznik34 == 5) { scianab->b6 = 22; scianar->r4 = 58; };
		if (objzmienna->licznik26 == 5 && objzmienna->licznik34 == 2) { scianab->b6 = 58; scianar->r4 = 22; };
		if (objzmienna->licznik26 == 3 && objzmienna->licznik34 == 5) { scianab->b6 = 32; scianar->r4 = 56; };
		if (objzmienna->licznik26 == 5 && objzmienna->licznik34 == 3) { scianab->b6 = 56; scianar->r4 = 32; };
		if (objzmienna->licznik26 == 4 && objzmienna->licznik34 == 5) { scianab->b6 = 42; scianar->r4 = 52; };
		if (objzmienna->licznik26 == 5 && objzmienna->licznik34 == 4) { scianab->b6 = 52; scianar->r4 = 42; };
		if (objzmienna->licznik26 == 1 && objzmienna->licznik34 == 5) { scianab->b6 = 12; scianar->r4 = 54; };
		if (objzmienna->licznik26 == 5 && objzmienna->licznik34 == 1) { scianab->b6 = 54; scianar->r4 = 12; };
		if (objzmienna->licznik26 == 2 && objzmienna->licznik34 == 3) { scianab->b6 = 26; scianar->r4 = 34; };
		if (objzmienna->licznik26 == 3 && objzmienna->licznik34 == 2) { scianab->b6 = 34; scianar->r4 = 26; };
		if (objzmienna->licznik26 == 3 && objzmienna->licznik34 == 4) { scianab->b6 = 36; scianar->r4 = 44; };
		if (objzmienna->licznik26 == 4 && objzmienna->licznik34 == 3) { scianab->b6 = 44; scianar->r4 = 36; };
		if (objzmienna->licznik26 == 4 && objzmienna->licznik34 == 1) { scianab->b6 = 46; scianar->r4 = 14; };
		if (objzmienna->licznik26 == 1 && objzmienna->licznik34 == 4) { scianab->b6 = 14; scianar->r4 = 46; };
		if (objzmienna->licznik26 == 1 && objzmienna->licznik34 == 2) { scianab->b6 = 16; scianar->r4 = 24; };
		if (objzmienna->licznik26 == 2 && objzmienna->licznik34 == 1) { scianab->b6 = 24; scianar->r4 = 16; };
		if (objzmienna->licznik26 == 2 && objzmienna->licznik34 == 6) { scianab->b6 = 28; scianar->r4 = 62; };
		if (objzmienna->licznik26 == 6 && objzmienna->licznik34 == 2) { scianab->b6 = 62; scianar->r4 = 28; };
		if (objzmienna->licznik26 == 3 && objzmienna->licznik34 == 6) { scianab->b6 = 38; scianar->r4 = 66; };
		if (objzmienna->licznik26 == 6 && objzmienna->licznik34 == 3) { scianab->b6 = 66; scianar->r4 = 38; };
		if (objzmienna->licznik26 == 4 && objzmienna->licznik34 == 6) { scianab->b6 = 48; scianar->r4 = 68; };
		if (objzmienna->licznik26 == 6 && objzmienna->licznik34 == 4) { scianab->b6 = 68; scianar->r4 = 48; };
		if (objzmienna->licznik26 == 1 && objzmienna->licznik34 == 6) { scianab->b6 = 18; scianar->r4 = 64; };
		if (objzmienna->licznik26 == 6 && objzmienna->licznik34 == 1) { scianab->b6 = 64; scianar->r4 = 18; };
		//e6
		if (objzmienna->licznik36 == 2 && objzmienna->licznik44 == 5) { scianar->r6 = 22; scianag->g4 = 58; };
		if (objzmienna->licznik36 == 5 && objzmienna->licznik44 == 2) { scianar->r6 = 58; scianag->g4 = 22; };
		if (objzmienna->licznik36 == 3 && objzmienna->licznik44 == 5) { scianar->r6 = 32; scianag->g4 = 56; };
		if (objzmienna->licznik36 == 5 && objzmienna->licznik44 == 3) { scianar->r6 = 56; scianag->g4 = 32; };
		if (objzmienna->licznik36 == 4 && objzmienna->licznik44 == 5) { scianar->r6 = 42; scianag->g4 = 52; };
		if (objzmienna->licznik36 == 5 && objzmienna->licznik44 == 4) { scianar->r6 = 52; scianag->g4 = 42; };
		if (objzmienna->licznik36 == 1 && objzmienna->licznik44 == 5) { scianar->r6 = 12; scianag->g4 = 54; };
		if (objzmienna->licznik36 == 5 && objzmienna->licznik44 == 1) { scianar->r6 = 54; scianag->g4 = 12; };
		if (objzmienna->licznik36 == 2 && objzmienna->licznik44 == 3) { scianar->r6 = 26; scianag->g4 = 34; };
		if (objzmienna->licznik36 == 3 && objzmienna->licznik44 == 2) { scianar->r6 = 34; scianag->g4 = 26; };
		if (objzmienna->licznik36 == 3 && objzmienna->licznik44 == 4) { scianar->r6 = 36; scianag->g4 = 44; };
		if (objzmienna->licznik36 == 4 && objzmienna->licznik44 == 3) { scianar->r6 = 44; scianag->g4 = 36; };
		if (objzmienna->licznik36 == 4 && objzmienna->licznik44 == 1) { scianar->r6 = 46; scianag->g4 = 14; };
		if (objzmienna->licznik36 == 1 && objzmienna->licznik44 == 4) { scianar->r6 = 14; scianag->g4 = 46; };
		if (objzmienna->licznik36 == 1 && objzmienna->licznik44 == 2) { scianar->r6 = 16; scianag->g4 = 24; };
		if (objzmienna->licznik36 == 2 && objzmienna->licznik44 == 1) { scianar->r6 = 24; scianag->g4 = 16; };
		if (objzmienna->licznik36 == 2 && objzmienna->licznik44 == 6) { scianar->r6 = 28; scianag->g4 = 62; };
		if (objzmienna->licznik36 == 6 && objzmienna->licznik44 == 2) { scianar->r6 = 62; scianag->g4 = 28; };
		if (objzmienna->licznik36 == 3 && objzmienna->licznik44 == 6) { scianar->r6 = 38; scianag->g4 = 66; };
		if (objzmienna->licznik36 == 6 && objzmienna->licznik44 == 3) { scianar->r6 = 66; scianag->g4 = 38; };
		if (objzmienna->licznik36 == 4 && objzmienna->licznik44 == 6) { scianar->r6 = 48; scianag->g4 = 68; };
		if (objzmienna->licznik36 == 6 && objzmienna->licznik44 == 4) { scianar->r6 = 68; scianag->g4 = 48; };
		if (objzmienna->licznik36 == 1 && objzmienna->licznik44 == 6) { scianar->r6 = 18; scianag->g4 = 64; };
		if (objzmienna->licznik36 == 6 && objzmienna->licznik44 == 1) { scianar->r6 = 64; scianag->g4 = 18; };
		//e7
		if (objzmienna->licznik46 == 2 && objzmienna->licznik14 == 5) { scianag->g6 = 22; scianao->o4 = 58; };
		if (objzmienna->licznik46 == 5 && objzmienna->licznik14 == 2) { scianag->g6 = 58; scianao->o4 = 22; };
		if (objzmienna->licznik46 == 3 && objzmienna->licznik14 == 5) { scianag->g6 = 32; scianao->o4 = 56; };
		if (objzmienna->licznik46 == 5 && objzmienna->licznik14 == 3) { scianag->g6 = 56; scianao->o4 = 32; };
		if (objzmienna->licznik46 == 4 && objzmienna->licznik14 == 5) { scianag->g6 = 42; scianao->o4 = 52; };
		if (objzmienna->licznik46 == 5 && objzmienna->licznik14 == 4) { scianag->g6 = 52; scianao->o4 = 42; };
		if (objzmienna->licznik46 == 1 && objzmienna->licznik14 == 5) { scianag->g6 = 12; scianao->o4 = 54; };
		if (objzmienna->licznik46 == 5 && objzmienna->licznik14 == 1) { scianag->g6 = 54; scianao->o4 = 12; };
		if (objzmienna->licznik46 == 2 && objzmienna->licznik14 == 3) { scianag->g6 = 26; scianao->o4 = 34; };
		if (objzmienna->licznik46 == 3 && objzmienna->licznik14 == 2) { scianag->g6 = 34; scianao->o4 = 26; };
		if (objzmienna->licznik46 == 3 && objzmienna->licznik14 == 4) { scianag->g6 = 36; scianao->o4 = 44; };
		if (objzmienna->licznik46 == 4 && objzmienna->licznik14 == 3) { scianag->g6 = 44; scianao->o4 = 36; };
		if (objzmienna->licznik46 == 4 && objzmienna->licznik14 == 1) { scianag->g6 = 46; scianao->o4 = 14; };
		if (objzmienna->licznik46 == 1 && objzmienna->licznik14 == 4) { scianag->g6 = 14; scianao->o4 = 46; };
		if (objzmienna->licznik46 == 1 && objzmienna->licznik14 == 2) { scianag->g6 = 16; scianao->o4 = 24; };
		if (objzmienna->licznik46 == 2 && objzmienna->licznik14 == 1) { scianag->g6 = 24; scianao->o4 = 16; };
		if (objzmienna->licznik46 == 2 && objzmienna->licznik14 == 6) { scianag->g6 = 28; scianao->o4 = 62; };
		if (objzmienna->licznik46 == 6 && objzmienna->licznik14 == 2) { scianag->g6 = 62; scianao->o4 = 28; };
		if (objzmienna->licznik46 == 3 && objzmienna->licznik14 == 6) { scianag->g6 = 38; scianao->o4 = 66; };
		if (objzmienna->licznik46 == 6 && objzmienna->licznik14 == 3) { scianag->g6 = 66; scianao->o4 = 38; };
		if (objzmienna->licznik46 == 4 && objzmienna->licznik14 == 6) { scianag->g6 = 48; scianao->o4 = 68; };
		if (objzmienna->licznik46 == 6 && objzmienna->licznik14 == 4) { scianag->g6 = 68; scianao->o4 = 48; };
		if (objzmienna->licznik46 == 1 && objzmienna->licznik14 == 6) { scianag->g6 = 18; scianao->o4 = 64; };
		if (objzmienna->licznik46 == 6 && objzmienna->licznik14 == 1) { scianag->g6 = 64; scianao->o4 = 18; };
		//e8
		if (objzmienna->licznik16 == 2 && objzmienna->licznik24 == 5) { scianao->o6 = 22; scianab->b4 = 58; };
		if (objzmienna->licznik16 == 5 && objzmienna->licznik24 == 2) { scianao->o6 = 58; scianab->b4 = 22; };
		if (objzmienna->licznik16 == 3 && objzmienna->licznik24 == 5) { scianao->o6 = 32; scianab->b4 = 56; };
		if (objzmienna->licznik16 == 5 && objzmienna->licznik24 == 3) { scianao->o6 = 56; scianab->b4 = 32; };
		if (objzmienna->licznik16 == 4 && objzmienna->licznik24 == 5) { scianao->o6 = 42; scianab->b4 = 52; };
		if (objzmienna->licznik16 == 5 && objzmienna->licznik24 == 4) { scianao->o6 = 52; scianab->b4 = 42; };
		if (objzmienna->licznik16 == 1 && objzmienna->licznik24 == 5) { scianao->o6 = 12; scianab->b4 = 54; };
		if (objzmienna->licznik16 == 5 && objzmienna->licznik24 == 1) { scianao->o6 = 54; scianab->b4 = 12; };
		if (objzmienna->licznik16 == 2 && objzmienna->licznik24 == 3) { scianao->o6 = 26; scianab->b4 = 34; };
		if (objzmienna->licznik16 == 3 && objzmienna->licznik24 == 2) { scianao->o6 = 34; scianab->b4 = 26; };
		if (objzmienna->licznik16 == 3 && objzmienna->licznik24 == 4) { scianao->o6 = 36; scianab->b4 = 44; };
		if (objzmienna->licznik16 == 4 && objzmienna->licznik24 == 3) { scianao->o6 = 44; scianab->b4 = 36; };
		if (objzmienna->licznik16 == 4 && objzmienna->licznik24 == 1) { scianao->o6 = 46; scianab->b4 = 14; };
		if (objzmienna->licznik16 == 1 && objzmienna->licznik24 == 4) { scianao->o6 = 14; scianab->b4 = 46; };
		if (objzmienna->licznik16 == 1 && objzmienna->licznik24 == 2) { scianao->o6 = 16; scianab->b4 = 24; };
		if (objzmienna->licznik16 == 2 && objzmienna->licznik24 == 1) { scianao->o6 = 24; scianab->b4 = 16; };
		if (objzmienna->licznik16 == 2 && objzmienna->licznik24 == 6) { scianao->o6 = 28; scianab->b4 = 62; };
		if (objzmienna->licznik16 == 6 && objzmienna->licznik24 == 2) { scianao->o6 = 62; scianab->b4 = 28; };
		if (objzmienna->licznik16 == 3 && objzmienna->licznik24 == 6) { scianao->o6 = 38; scianab->b4 = 66; };
		if (objzmienna->licznik16 == 6 && objzmienna->licznik24 == 3) { scianao->o6 = 66; scianab->b4 = 38; };
		if (objzmienna->licznik16 == 4 && objzmienna->licznik24 == 6) { scianao->o6 = 48; scianab->b4 = 68; };
		if (objzmienna->licznik16 == 6 && objzmienna->licznik24 == 4) { scianao->o6 = 68; scianab->b4 = 48; };
		if (objzmienna->licznik16 == 1 && objzmienna->licznik24 == 6) { scianao->o6 = 18; scianab->b4 = 64; };
		if (objzmienna->licznik16 == 6 && objzmienna->licznik24 == 1) { scianao->o6 = 64; scianab->b4 = 18; };
		//e9
		if (objzmienna->licznik28 == 2 && objzmienna->licznik62 == 5) { scianab->b8 = 22; scianaw->w2 = 58; };
		if (objzmienna->licznik28 == 5 && objzmienna->licznik62 == 2) { scianab->b8 = 58; scianaw->w2 = 22; };
		if (objzmienna->licznik28 == 3 && objzmienna->licznik62 == 5) { scianab->b8 = 32; scianaw->w2 = 56; };
		if (objzmienna->licznik28 == 5 && objzmienna->licznik62 == 3) { scianab->b8 = 56; scianaw->w2 = 32; };
		if (objzmienna->licznik28 == 4 && objzmienna->licznik62 == 5) { scianab->b8 = 42; scianaw->w2 = 52; };
		if (objzmienna->licznik28 == 5 && objzmienna->licznik62 == 4) { scianab->b8 = 52; scianaw->w2 = 42; };
		if (objzmienna->licznik28 == 1 && objzmienna->licznik62 == 5) { scianab->b8 = 12; scianaw->w2 = 54; };
		if (objzmienna->licznik28 == 5 && objzmienna->licznik62 == 1) { scianab->b8 = 54; scianaw->w2 = 12; };
		if (objzmienna->licznik28 == 2 && objzmienna->licznik62 == 3) { scianab->b8 = 26; scianaw->w2 = 34; };
		if (objzmienna->licznik28 == 3 && objzmienna->licznik62 == 2) { scianab->b8 = 34; scianaw->w2 = 26; };
		if (objzmienna->licznik28 == 3 && objzmienna->licznik62 == 4) { scianab->b8 = 36; scianaw->w2 = 44; };
		if (objzmienna->licznik28 == 4 && objzmienna->licznik62 == 3) { scianab->b8 = 44; scianaw->w2 = 36; };
		if (objzmienna->licznik28 == 4 && objzmienna->licznik62 == 1) { scianab->b8 = 46; scianaw->w2 = 14; };
		if (objzmienna->licznik28 == 1 && objzmienna->licznik62 == 4) { scianab->b8 = 14; scianaw->w2 = 46; };
		if (objzmienna->licznik28 == 1 && objzmienna->licznik62 == 2) { scianab->b8 = 16; scianaw->w2 = 24; };
		if (objzmienna->licznik28 == 2 && objzmienna->licznik62 == 1) { scianab->b8 = 24; scianaw->w2 = 16; };
		if (objzmienna->licznik28 == 2 && objzmienna->licznik62 == 6) { scianab->b8 = 28; scianaw->w2 = 62; };
		if (objzmienna->licznik28 == 6 && objzmienna->licznik62 == 2) { scianab->b8 = 62; scianaw->w2 = 28; };
		if (objzmienna->licznik28 == 3 && objzmienna->licznik62 == 6) { scianab->b8 = 38; scianaw->w2 = 66; };
		if (objzmienna->licznik28 == 6 && objzmienna->licznik62 == 3) { scianab->b8 = 66; scianaw->w2 = 38; };
		if (objzmienna->licznik28 == 4 && objzmienna->licznik62 == 6) { scianab->b8 = 48; scianaw->w2 = 68; };
		if (objzmienna->licznik28 == 6 && objzmienna->licznik62 == 4) { scianab->b8 = 68; scianaw->w2 = 48; };
		if (objzmienna->licznik28 == 1 && objzmienna->licznik62 == 6) { scianab->b8 = 18; scianaw->w2 = 64; };
		if (objzmienna->licznik28 == 6 && objzmienna->licznik62 == 1) { scianab->b8 = 64; scianaw->w2 = 18; };
		//e10
		if (objzmienna->licznik38 == 2 && objzmienna->licznik66 == 5) { scianar->r8 = 22; scianaw->w6 = 58; };
		if (objzmienna->licznik38 == 5 && objzmienna->licznik66 == 2) { scianar->r8 = 58; scianaw->w6 = 22; };
		if (objzmienna->licznik38 == 3 && objzmienna->licznik66 == 5) { scianar->r8 = 32; scianaw->w6 = 56; };
		if (objzmienna->licznik38 == 5 && objzmienna->licznik66 == 3) { scianar->r8 = 56; scianaw->w6 = 32; };
		if (objzmienna->licznik38 == 4 && objzmienna->licznik66 == 5) { scianar->r8 = 42; scianaw->w6 = 52; };
		if (objzmienna->licznik38 == 5 && objzmienna->licznik66 == 4) { scianar->r8 = 52; scianaw->w6 = 42; };
		if (objzmienna->licznik38 == 1 && objzmienna->licznik66 == 5) { scianar->r8 = 12; scianaw->w6 = 54; };
		if (objzmienna->licznik38 == 5 && objzmienna->licznik66 == 1) { scianar->r8 = 54; scianaw->w6 = 12; };
		if (objzmienna->licznik38 == 2 && objzmienna->licznik66 == 3) { scianar->r8 = 26; scianaw->w6 = 34; };
		if (objzmienna->licznik38 == 3 && objzmienna->licznik66 == 2) { scianar->r8 = 34; scianaw->w6 = 26; };
		if (objzmienna->licznik38 == 3 && objzmienna->licznik66 == 4) { scianar->r8 = 36; scianaw->w6 = 44; };
		if (objzmienna->licznik38 == 4 && objzmienna->licznik66 == 3) { scianar->r8 = 44; scianaw->w6 = 36; };
		if (objzmienna->licznik38 == 4 && objzmienna->licznik66 == 1) { scianar->r8 = 46; scianaw->w6 = 14; };
		if (objzmienna->licznik38 == 1 && objzmienna->licznik66 == 4) { scianar->r8 = 14; scianaw->w6 = 46; };
		if (objzmienna->licznik38 == 1 && objzmienna->licznik66 == 2) { scianar->r8 = 16; scianaw->w6 = 24; };
		if (objzmienna->licznik38 == 2 && objzmienna->licznik66 == 1) { scianar->r8 = 24; scianaw->w6 = 16; };
		if (objzmienna->licznik38 == 2 && objzmienna->licznik66 == 6) { scianar->r8 = 28; scianaw->w6 = 62; };
		if (objzmienna->licznik38 == 6 && objzmienna->licznik66 == 2) { scianar->r8 = 62; scianaw->w6 = 28; };
		if (objzmienna->licznik38 == 3 && objzmienna->licznik66 == 6) { scianar->r8 = 38; scianaw->w6 = 66; };
		if (objzmienna->licznik38 == 6 && objzmienna->licznik66 == 3) { scianar->r8 = 66; scianaw->w6 = 38; };
		if (objzmienna->licznik38 == 4 && objzmienna->licznik66 == 6) { scianar->r8 = 48; scianaw->w6 = 68; };
		if (objzmienna->licznik38 == 6 && objzmienna->licznik66 == 4) { scianar->r8 = 68; scianaw->w6 = 48; };
		if (objzmienna->licznik38 == 1 && objzmienna->licznik66 == 6) { scianar->r8 = 18; scianaw->w6 = 64; };
		if (objzmienna->licznik38 == 6 && objzmienna->licznik66 == 1) { scianar->r8 = 64; scianaw->w6 = 18; };
		//e11
		if (objzmienna->licznik48 == 2 && objzmienna->licznik68 == 5) { scianag->g8 = 22; scianaw->w8 = 58; };
		if (objzmienna->licznik48 == 5 && objzmienna->licznik68 == 2) { scianag->g8 = 58; scianaw->w8 = 22; };
		if (objzmienna->licznik48 == 3 && objzmienna->licznik68 == 5) { scianag->g8 = 32; scianaw->w8 = 56; };
		if (objzmienna->licznik48 == 5 && objzmienna->licznik68 == 3) { scianag->g8 = 56; scianaw->w8 = 32; };
		if (objzmienna->licznik48 == 4 && objzmienna->licznik68 == 5) { scianag->g8 = 42; scianaw->w8 = 52; };
		if (objzmienna->licznik48 == 5 && objzmienna->licznik68 == 4) { scianag->g8 = 52; scianaw->w8 = 42; };
		if (objzmienna->licznik48 == 1 && objzmienna->licznik68 == 5) { scianag->g8 = 12; scianaw->w8 = 54; };
		if (objzmienna->licznik48 == 5 && objzmienna->licznik68 == 1) { scianag->g8 = 54; scianaw->w8 = 12; };
		if (objzmienna->licznik48 == 2 && objzmienna->licznik68 == 3) { scianag->g8 = 26; scianaw->w8 = 34; };
		if (objzmienna->licznik48 == 3 && objzmienna->licznik68 == 2) { scianag->g8 = 34; scianaw->w8 = 26; };
		if (objzmienna->licznik48 == 3 && objzmienna->licznik68 == 4) { scianag->g8 = 36; scianaw->w8 = 44; };
		if (objzmienna->licznik48 == 4 && objzmienna->licznik68 == 3) { scianag->g8 = 44; scianaw->w8 = 36; };
		if (objzmienna->licznik48 == 4 && objzmienna->licznik68 == 1) { scianag->g8 = 46; scianaw->w8 = 14; };
		if (objzmienna->licznik48 == 1 && objzmienna->licznik68 == 4) { scianag->g8 = 14; scianaw->w8 = 46; };
		if (objzmienna->licznik48 == 1 && objzmienna->licznik68 == 2) { scianag->g8 = 16; scianaw->w8 = 24; };
		if (objzmienna->licznik48 == 2 && objzmienna->licznik68 == 1) { scianag->g8 = 24; scianaw->w8 = 16; };
		if (objzmienna->licznik48 == 2 && objzmienna->licznik68 == 6) { scianag->g8 = 28; scianaw->w8 = 62; };
		if (objzmienna->licznik48 == 6 && objzmienna->licznik68 == 2) { scianag->g8 = 62; scianaw->w8 = 28; };
		if (objzmienna->licznik48 == 3 && objzmienna->licznik68 == 6) { scianag->g8 = 38; scianaw->w8 = 66; };
		if (objzmienna->licznik48 == 6 && objzmienna->licznik68 == 3) { scianag->g8 = 66; scianaw->w8 = 38; };
		if (objzmienna->licznik48 == 4 && objzmienna->licznik68 == 6) { scianag->g8 = 48; scianaw->w8 = 68; };
		if (objzmienna->licznik48 == 6 && objzmienna->licznik68 == 4) { scianag->g8 = 68; scianaw->w8 = 48; };
		if (objzmienna->licznik48 == 1 && objzmienna->licznik68 == 6) { scianag->g8 = 18; scianaw->w8 = 64; };
		if (objzmienna->licznik48 == 6 && objzmienna->licznik68 == 1) { scianag->g8 = 64; scianaw->w8 = 18; };
		//e12
		if (objzmienna->licznik18 == 2 && objzmienna->licznik64 == 5) { scianao->o8 = 22; scianaw->w4 = 58; };
		if (objzmienna->licznik18 == 5 && objzmienna->licznik64 == 2) { scianao->o8 = 58; scianaw->w4 = 22; };
		if (objzmienna->licznik18 == 3 && objzmienna->licznik64 == 5) { scianao->o8 = 32; scianaw->w4 = 56; };
		if (objzmienna->licznik18 == 5 && objzmienna->licznik64 == 3) { scianao->o8 = 56; scianaw->w4 = 32; };
		if (objzmienna->licznik18 == 4 && objzmienna->licznik64 == 5) { scianao->o8 = 42; scianaw->w4 = 52; };
		if (objzmienna->licznik18 == 5 && objzmienna->licznik64 == 4) { scianao->o8 = 52; scianaw->w4 = 42; };
		if (objzmienna->licznik18 == 1 && objzmienna->licznik64 == 5) { scianao->o8 = 12; scianaw->w4 = 54; };
		if (objzmienna->licznik18 == 5 && objzmienna->licznik64 == 1) { scianao->o8 = 54; scianaw->w4 = 12; };
		if (objzmienna->licznik18 == 2 && objzmienna->licznik64 == 3) { scianao->o8 = 26; scianaw->w4 = 34; };
		if (objzmienna->licznik18 == 3 && objzmienna->licznik64 == 2) { scianao->o8 = 34; scianaw->w4 = 26; };
		if (objzmienna->licznik18 == 3 && objzmienna->licznik64 == 4) { scianao->o8 = 36; scianaw->w4 = 44; };
		if (objzmienna->licznik18 == 4 && objzmienna->licznik64 == 3) { scianao->o8 = 44; scianaw->w4 = 36; };
		if (objzmienna->licznik18 == 4 && objzmienna->licznik64 == 1) { scianao->o8 = 46; scianaw->w4 = 14; };
		if (objzmienna->licznik18 == 1 && objzmienna->licznik64 == 4) { scianao->o8 = 14; scianaw->w4 = 46; };
		if (objzmienna->licznik18 == 1 && objzmienna->licznik64 == 2) { scianao->o8 = 16; scianaw->w4 = 24; };
		if (objzmienna->licznik18 == 2 && objzmienna->licznik64 == 1) { scianao->o8 = 24; scianaw->w4 = 16; };
		if (objzmienna->licznik18 == 2 && objzmienna->licznik64 == 6) { scianao->o8 = 28; scianaw->w4 = 62; };
		if (objzmienna->licznik18 == 6 && objzmienna->licznik64 == 2) { scianao->o8 = 62; scianaw->w4 = 28; };
		if (objzmienna->licznik18 == 3 && objzmienna->licznik64 == 6) { scianao->o8 = 38; scianaw->w4 = 66; };
		if (objzmienna->licznik18 == 6 && objzmienna->licznik64 == 3) { scianao->o8 = 66; scianaw->w4 = 38; };
		if (objzmienna->licznik18 == 4 && objzmienna->licznik64 == 6) { scianao->o8 = 48; scianaw->w4 = 68; };
		if (objzmienna->licznik18 == 6 && objzmienna->licznik64 == 4) { scianao->o8 = 68; scianaw->w4 = 48; };
		if (objzmienna->licznik18 == 1 && objzmienna->licznik64 == 6) { scianao->o8 = 18; scianaw->w4 = 64; };
		if (objzmienna->licznik18 == 6 && objzmienna->licznik64 == 1) { scianao->o8 = 64; scianaw->w4 = 18; };
		//end
		timer2->Start(); int licznikruchow = 0; objzmienna->licznikruchow = 0;
		solve(&scianab->b1, &scianab->b2, &scianab->b3, &scianab->b4, &scianab->b5, &scianab->b6, &scianab->b7, &scianab->b8, &scianab->b9,
			&scianar->r1, &scianar->r2, &scianar->r3, &scianar->r4, &scianar->r5, &scianar->r6, &scianar->r7, &scianar->r8, &scianar->r9,
			&scianag->g1, &scianag->g2, &scianag->g3, &scianag->g4, &scianag->g5, &scianag->g6, &scianag->g7, &scianag->g8, &scianag->g9,
			&scianao->o1, &scianao->o2, &scianao->o3, &scianao->o4, &scianao->o5, &scianao->o6, &scianao->o7, &scianao->o8, &scianao->o9,
			&scianay->y1, &scianay->y2, &scianay->y3, &scianay->y4, &scianay->y5, &scianay->y6, &scianay->y7, &scianay->y8, &scianay->y9,
			&scianaw->w1, &scianaw->w2, &scianaw->w3, &scianaw->w4, &scianaw->w5, &scianaw->w6, &scianaw->w7, &scianaw->w8, &scianaw->w9,
			&objzmienna->swap01, &objzmienna->swap02, &objzmienna->swap03, &objzmienna->swap04, &objzmienna->swap05, &objzmienna->swapc06, &objzmienna->swapc07,
			&objzmienna->swapc08, &objzmienna->swapc09, &objzmienna->swapc10, &objzmienna->swapc11, &objzmienna->swapc12, &objzmienna->swapc13,
			&objzmienna->swapc14, &objzmienna->swapc15, &objzmienna->swapc16, &objzmienna->swapc17, &objzmienna->swapc18, &objzmienna->swapc19,
			&objzmienna->swapc20, &objzmienna->swapc21, &objzmienna->swapc22, &objzmienna->swapc23, &objzmienna->swapc24, &objzmienna->swapc25,
			&objzmienna->swapc26, &objzmienna->swapc27, &objzmienna->swapc28, &objzmienna->swapc29, &objzmienna->swapc30, &objzmienna->swapc31,
			&objzmienna->swapc32, &objzmienna->swapc33, &objzmienna->swapc34, &objzmienna->swapc35, &objzmienna->swapc36, &objzmienna->swapc37,
			&objzmienna->swape01, &objzmienna->swape02, &objzmienna->swape03, &objzmienna->swape04, &objzmienna->swape05,
			&objzmienna->swape06, &objzmienna->swape07, &objzmienna->swape08, &objzmienna->swape09, &objzmienna->swape10,
			&objzmienna->swape11, &objzmienna->swape12, &objzmienna->swape13, &objzmienna->swape14, &objzmienna->swape15,
			&objzmienna->swape16, &objzmienna->swape17, &objzmienna->swape18, &objzmienna->swape19, &objzmienna->swape20,
			&objzmienna->swape21, &objzmienna->swape22, &objzmienna->swape23, &objzmienna->swape24, &objzmienna->swape25,
			&objzmienna->swape26, &objzmienna->swape27, &objzmienna->swape28, &objzmienna->swape29, &objzmienna->swape30,
			&objzmienna->swape31, &objzmienna->swape32,
			&objzmienna->swapo01, &objzmienna->swapo02, &objzmienna->swapo03, &objzmienna->swapo04, &objzmienna->swapo05,
			&objzmienna->swapo06, &objzmienna->swapo07, &objzmienna->swapo08, &objzmienna->swapo09, &objzmienna->swapo10,
			&objzmienna->swapo11, &objzmienna->swapo12, &objzmienna->swapo13, &objzmienna->swapo14, &objzmienna->swapo15,
			&objzmienna->swapo16, &objzmienna->swapp01, &objzmienna->swapp02, &objzmienna->swapp03, &objzmienna->swapp04,
			&objzmienna->swapp05, &objzmienna->swapp06, &objzmienna->swapp07, &objzmienna->swapp08, &objzmienna->swapp09,
			&objzmienna->swapp10, &objzmienna->swapp11, &objzmienna->swapp12, &objzmienna->swapp13, &objzmienna->swapp14);
		timer1->Stop(); objzmienna->swapt = 0; timer1->Interval = 1;
		completetest(&scianab->b1, &scianab->b2, &scianab->b3, &scianab->b4, &scianab->b5, &scianab->b6, &scianab->b7, &scianab->b8, &scianab->b9,
			&scianar->r1, &scianar->r2, &scianar->r3, &scianar->r4, &scianar->r5, &scianar->r6, &scianar->r7, &scianar->r8, &scianar->r9,
			&scianag->g1, &scianag->g2, &scianag->g3, &scianag->g4, &scianag->g5, &scianag->g6, &scianag->g7, &scianag->g8, &scianag->g9,
			&scianao->o1, &scianao->o2, &scianao->o3, &scianao->o4, &scianao->o5, &scianao->o6, &scianao->o7, &scianao->o8, &scianao->o9,
			&scianay->y1, &scianay->y2, &scianay->y3, &scianay->y4, &scianay->y5, &scianay->y6, &scianay->y7, &scianay->y8, &scianay->y9,
			&scianaw->w1, &scianaw->w2, &scianaw->w3, &scianaw->w4, &scianaw->w5, &scianaw->w6, &scianaw->w7, &scianaw->w8, &scianaw->w9);
		if (objzmienna->zmiennatest == 1) {
			objzmienna->zmiennatest = 0;
			scianao->o1 = 11;
			scianao->o2 = 12;
			scianao->o3 = 13;
			scianao->o4 = 14;
			scianao->o5 = 15;
			scianao->o6 = 16;
			scianao->o7 = 17;
			scianao->o8 = 18;
			scianao->o9 = 19;
			scianay->y1 = 51;
			scianay->y2 = 52;
			scianay->y3 = 53;
			scianay->y4 = 54;
			scianay->y5 = 55;
			scianay->y6 = 56;
			scianay->y7 = 57;
			scianay->y8 = 58;
			scianay->y9 = 59;
			scianaw->w1 = 61;
			scianaw->w2 = 62;
			scianaw->w3 = 63;
			scianaw->w4 = 64;
			scianaw->w5 = 65;
			scianaw->w6 = 66;
			scianaw->w7 = 67;
			scianaw->w8 = 68;
			scianaw->w9 = 69;
			scianab->b1 = 21;
			scianab->b2 = 22;
			scianab->b3 = 23;
			scianab->b4 = 24;
			scianab->b5 = 25;
			scianab->b6 = 26;
			scianab->b7 = 27;
			scianab->b8 = 28;
			scianab->b9 = 29;
			scianag->g1 = 41;
			scianag->g2 = 42;
			scianag->g3 = 43;
			scianag->g4 = 44;
			scianag->g5 = 45;
			scianag->g6 = 46;
			scianag->g7 = 47;
			scianag->g8 = 48;
			scianag->g9 = 49;
			scianar->r1 = 31;
			scianar->r2 = 32;
			scianar->r3 = 33;
			scianar->r4 = 34;
			scianar->r5 = 35;
			scianar->r6 = 36;
			scianar->r7 = 37;
			scianar->r8 = 38;
			scianar->r9 = 39;
			//
			objzmienna->licznik11 = 1;
			objzmienna->licznik12 = 1;
			objzmienna->licznik13 = 1;
			objzmienna->licznik14 = 1;
			objzmienna->licznik16 = 1;
			objzmienna->licznik17 = 1;
			objzmienna->licznik18 = 1;
			objzmienna->licznik19 = 1;
			objzmienna->licznik21 = 2;
			objzmienna->licznik22 = 2;
			objzmienna->licznik23 = 2;
			objzmienna->licznik24 = 2;
			objzmienna->licznik26 = 2;
			objzmienna->licznik27 = 2;
			objzmienna->licznik28 = 2;
			objzmienna->licznik29 = 2;
			objzmienna->licznik31 = 3;
			objzmienna->licznik32 = 3;
			objzmienna->licznik33 = 3;
			objzmienna->licznik34 = 3;
			objzmienna->licznik36 = 3;
			objzmienna->licznik37 = 3;
			objzmienna->licznik38 = 3;
			objzmienna->licznik39 = 3;
			objzmienna->licznik41 = 4;
			objzmienna->licznik42 = 4;
			objzmienna->licznik43 = 4;
			objzmienna->licznik44 = 4;
			objzmienna->licznik46 = 4;
			objzmienna->licznik47 = 4;
			objzmienna->licznik48 = 4;
			objzmienna->licznik49 = 4;
			objzmienna->licznik51 = 5;
			objzmienna->licznik52 = 5;
			objzmienna->licznik53 = 5;
			objzmienna->licznik54 = 5;
			objzmienna->licznik56 = 5;
			objzmienna->licznik57 = 5;
			objzmienna->licznik58 = 5;
			objzmienna->licznik59 = 5;
			objzmienna->licznik61 = 6;
			objzmienna->licznik62 = 6;
			objzmienna->licznik63 = 6;
			objzmienna->licznik64 = 6;
			objzmienna->licznik66 = 6;
			objzmienna->licznik67 = 6;
			objzmienna->licznik68 = 6;
			objzmienna->licznik69 = 6;
			//
			timer2->Start();
			textBox1->Text = ""; textBox2->Text = ""; textBox3->Text = ""; textBox4->Text = ""; textBox5->Text = ""; textBox6->Text = ""; textBox7->Text = "";
			error404.Show();
		}
		else {
		     
			if (objzmienna->swap01 == 1) { textBox2->Text += "D' "; }
			if (objzmienna->swap01 == 2) { textBox2->Text += "D "; };
			if (objzmienna->swap01 == 3) { textBox2->Text += "2D "; };
			//blueone
			if (objzmienna->swap02 == 1) { textBox2->Text += "2F "; };
			if (objzmienna->swap02 == 2) { textBox2->Text += "U' R' F R "; };
			if (objzmienna->swap02 == 3) { textBox2->Text += "U' R' F "; };
			if (objzmienna->swap02 == 4) { textBox2->Text += "F' "; };
			if (objzmienna->swap02 == 5) { textBox2->Text += "D' L D "; };
			if (objzmienna->swap02 == 6) { textBox2->Text += "F "; };
			if (objzmienna->swap02 == 7) { textBox2->Text += "D R' D' "; };
			if (objzmienna->swap02 == 8) { textBox2->Text += "F' D R' D' "; };
			if (objzmienna->swap02 == 9) { textBox2->Text += "U' 2F "; };
			if (objzmienna->swap02 == 10) { textBox2->Text += "L F' L' "; };
			if (objzmienna->swap02 == 11) { textBox2->Text += "L F' "; };
			if (objzmienna->swap02 == 12) { textBox2->Text += "2U 2F "; };
			if (objzmienna->swap02 == 13) { textBox2->Text += "U R' F R "; };
			if (objzmienna->swap02 == 14) { textBox2->Text += "U R' F "; };
			if (objzmienna->swap02 == 15) { textBox2->Text += "U 2F "; };
			if (objzmienna->swap02 == 16) { textBox2->Text += "R' F R "; };
			if (objzmienna->swap02 == 17) { textBox2->Text += "R' F "; };
			if (objzmienna->swap02 == 18) { textBox2->Text += "2L F' 2L "; };
			if (objzmienna->swap02 == 19) { textBox2->Text += "2L F' "; };
			if (objzmienna->swap02 == 20) { textBox2->Text += "D' L' D "; };
			if (objzmienna->swap02 == 21) { textBox2->Text += "D R D' "; };
			if (objzmienna->swap02 == 22) { textBox2->Text += "2R F 2R "; };
			if (objzmienna->swap02 == 23) { textBox2->Text += "2R F "; };
			if (objzmienna->swap02 == 24) { textBox2->Text += "L' F' "; };
			if (objzmienna->swap02 == 25) { textBox2->Text += "L' D' L D "; };
			if (objzmienna->swap02 == 26) { textBox2->Text += "R D R' D' "; };
			if (objzmienna->swap02 == 27) { textBox2->Text += "R F "; };
			if (objzmienna->swap02 == 28) { textBox2->Text += "2D F' 2D F "; };
			if (objzmienna->swap02 == 29) { textBox2->Text += "B' 2L F' "; };
			if (objzmienna->swap02 == 30) { textBox2->Text += "B 2R F "; };
			if (objzmienna->swap02 == 31) { textBox2->Text += "B 2R F "; };
			if (objzmienna->swap02 == 32) { textBox2->Text += "D' R D F "; };
			//redone
			if (objzmienna->swap03 == 1) { textBox2->Text += "R D' F D "; };
			if (objzmienna->swap03 == 2) { textBox2->Text += "R' "; };
			if (objzmienna->swap03 == 3) { textBox2->Text += "D' F D "; };
			if (objzmienna->swap03 == 4) { textBox2->Text += "R "; };
			if (objzmienna->swap03 == 5) { textBox2->Text += "D B' D' "; };
			if (objzmienna->swap03 == 6) { textBox2->Text += "2R "; };
			if (objzmienna->swap03 == 7) { textBox2->Text += "D' R' F R D "; };
			if (objzmienna->swap03 == 8) { textBox2->Text += "U' 2R "; };
			if (objzmienna->swap03 == 9) { textBox2->Text += "F R' F' "; };
			if (objzmienna->swap03 == 10) { textBox2->Text += "F R' "; };
			if (objzmienna->swap03 == 11) { textBox2->Text += "2U 2R "; };
			if (objzmienna->swap03 == 12) { textBox2->Text += "D' L F' L' D "; };
			if (objzmienna->swap03 == 13) { textBox2->Text += "U 2R "; };
			if (objzmienna->swap03 == 14) { textBox2->Text += "B' R B "; };
			if (objzmienna->swap03 == 15) { textBox2->Text += "B' R "; };
			if (objzmienna->swap03 == 16) { textBox2->Text += "D' F' D "; };
			if (objzmienna->swap03 == 17) { textBox2->Text += "2F R' 2F "; };
			if (objzmienna->swap03 == 18) { textBox2->Text += "2F R' "; };
			if (objzmienna->swap03 == 19) { textBox2->Text += "D B D' "; };
			if (objzmienna->swap03 == 20) { textBox2->Text += "2D L' 2D "; };
			if (objzmienna->swap03 == 21) { textBox2->Text += "F' D' F D "; };
			if (objzmienna->swap03 == 22) { textBox2->Text += "F' R' "; };
			if (objzmienna->swap03 == 23) { textBox2->Text += "L' 2D L 2D "; };
			if (objzmienna->swap03 == 24) { textBox2->Text += "L' D' F' D "; };
			if (objzmienna->swap03 == 25) { textBox2->Text += "B D B' D' "; };
			if (objzmienna->swap03 == 26) { textBox2->Text += "B R "; };
			//greenone
			if (objzmienna->swap04 == 1) { textBox2->Text += "B D' R D "; };
			if (objzmienna->swap04 == 2) { textBox2->Text += "2B "; };
			if (objzmienna->swap04 == 3) { textBox2->Text += "U R B' R' "; };
			if (objzmienna->swap04 == 4) { textBox2->Text += "U R B' "; };
			if (objzmienna->swap04 == 5) { textBox2->Text += "B' "; };
			if (objzmienna->swap04 == 6) { textBox2->Text += "D' R D "; };
			if (objzmienna->swap04 == 7) { textBox2->Text += "B "; };
			if (objzmienna->swap04 == 8) { textBox2->Text += "D L' D' "; };
			if (objzmienna->swap04 == 9) { textBox2->Text += "L' B L "; };
			if (objzmienna->swap04 == 10) { textBox2->Text += "L' B "; };
			if (objzmienna->swap04 == 11) { textBox2->Text += "U 2B "; };
			if (objzmienna->swap04 == 12) { textBox2->Text += "R B' R' "; };
			if (objzmienna->swap04 == 13) { textBox2->Text += "R B' "; };
			if (objzmienna->swap04 == 14) { textBox2->Text += "U' 2B "; };
			if (objzmienna->swap04 == 15) { textBox2->Text += "U' R B' R' "; };
			if (objzmienna->swap04 == 16) { textBox2->Text += "U' R B' "; };
			if (objzmienna->swap04 == 17) { textBox2->Text += "2U 2B "; };
			if (objzmienna->swap04 == 18) { textBox2->Text += "2L B 2L "; };
			if (objzmienna->swap04 == 19) { textBox2->Text += "2L B "; };
			if (objzmienna->swap04 == 20) { textBox2->Text += "D L D' "; };
			if (objzmienna->swap04 == 21) { textBox2->Text += "2R B' 2R "; };
			if (objzmienna->swap04 == 22) { textBox2->Text += "2R B' "; };
			if (objzmienna->swap04 == 23) { textBox2->Text += "D' R' D "; };
			if (objzmienna->swap04 == 24) { textBox2->Text += "L' D L D' "; };
			if (objzmienna->swap04 == 25) { textBox2->Text += "L B "; };
			if (objzmienna->swap04 == 26) { textBox2->Text += "F' 2D F 2D "; };
			if (objzmienna->swap04 == 27) { textBox2->Text += "F' D' R' D "; };
			if (objzmienna->swap04 == 28) { textBox2->Text += "R' B' "; };
			if (objzmienna->swap04 == 29) { textBox2->Text += "L' D' L D "; };
			//orange
			if (objzmienna->swap05 == 1) { textBox2->Text += "L' D F' D' "; };
			if (objzmienna->swap05 == 2) { textBox2->Text += "D' B D "; };
			if (objzmienna->swap05 == 3) { textBox2->Text += "L' "; };
			if (objzmienna->swap05 == 4) { textBox2->Text += "D F' D' "; };
			if (objzmienna->swap05 == 5) { textBox2->Text += "L "; };
			if (objzmienna->swap05 == 6) { textBox2->Text += "D' B' D "; };
			if (objzmienna->swap05 == 7) { textBox2->Text += "2B L' 2B "; };
			if (objzmienna->swap05 == 8) { textBox2->Text += "2B L' "; };
			if (objzmienna->swap05 == 9) { textBox2->Text += "D F D' "; };
			if (objzmienna->swap05 == 10) { textBox2->Text += "2F L 2F "; };
			if (objzmienna->swap05 == 11) { textBox2->Text += "2F L "; };
			if (objzmienna->swap05 == 12) { textBox2->Text += "2L "; };
			if (objzmienna->swap05 == 13) { textBox2->Text += "U' F' L F "; };
			if (objzmienna->swap05 == 14) { textBox2->Text += "U' F' L "; };
			if (objzmienna->swap05 == 15) { textBox2->Text += "U' 2L "; };
			if (objzmienna->swap05 == 16) { textBox2->Text += "B L' B' "; };
			if (objzmienna->swap05 == 17) { textBox2->Text += "B L' "; };
			if (objzmienna->swap05 == 18) { textBox2->Text += "2U 2L "; };
			if (objzmienna->swap05 == 19) { textBox2->Text += "U F' L F "; };
			if (objzmienna->swap05 == 20) { textBox2->Text += "U F' L "; };
			if (objzmienna->swap05 == 21) { textBox2->Text += "U 2L "; };
			if (objzmienna->swap05 == 22) { textBox2->Text += "F' L F "; };
			if (objzmienna->swap05 == 23) { textBox2->Text += "F' L "; };
			if (objzmienna->swap05 == 24) { textBox2->Text += "B' D' B D "; };
			if (objzmienna->swap05 == 25) { textBox2->Text += "B' L' "; };
			if (objzmienna->swap05 == 26) { textBox2->Text += "R 2D R' 2D "; };
			if (objzmienna->swap05 == 27) { textBox2->Text += "R D F D' "; };
			if (objzmienna->swap05 == 28) { textBox2->Text += "F' D F D' "; };
			if (objzmienna->swap05 == 29) { textBox2->Text += "F L "; };
			//softcorners
			//i=1
			if (objzmienna->swapc06 == 1) { textBox3->Text += "U' F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc06 == 2) { textBox3->Text += "2U F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc06 == 3) { textBox3->Text += "F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc06 == 4) { textBox3->Text += "U F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc06 == 5) { textBox3->Text += "U' L' U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc06 == 6) { textBox3->Text += "L' U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc06 == 7) { textBox3->Text += "L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc06 == 8) { textBox3->Text += "U L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc06 == 9) { textBox3->Text += "U' F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc06 == 10) { textBox3->Text += "F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc06 == 11) { textBox3->Text += "F U' F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc06 == 12) { textBox3->Text += "U F U' F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			//
			if (objzmienna->swapc10 == 1) { textBox3->Text += "2U R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc10 == 2) { textBox3->Text += "U R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc10 == 3) { textBox3->Text += "U' R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc10 == 4) { textBox3->Text += "R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc10 == 5) { textBox3->Text += "U F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc10 == 6) { textBox3->Text += "U' F' U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc10 == 7) { textBox3->Text += "F' U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc10 == 8) { textBox3->Text += "F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc10 == 9) { textBox3->Text += "U R U' R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc10 == 10) { textBox3->Text += "U' R 2U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc10 == 11) { textBox3->Text += "R 2U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc10 == 12) { textBox3->Text += "R U' R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			//
			if (objzmienna->swapc14 == 1) { textBox3->Text += "L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc14 == 2) { textBox3->Text += "U' L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc14 == 3) { textBox3->Text += "U L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc14 == 4) { textBox3->Text += "2U L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc14 == 5) { textBox3->Text += "B' U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc14 == 6) { textBox3->Text += "B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc14 == 7) { textBox3->Text += "U B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc14 == 8) { textBox3->Text += "U' B' U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc14 == 9) { textBox3->Text += "L 2U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc14 == 10) { textBox3->Text += "L U' L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc14 == 11) { textBox3->Text += "U L U' L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc14 == 12) { textBox3->Text += "U' L 2U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			//
			if (objzmienna->swapc18 == 1) { textBox3->Text += "U R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc18 == 2) { textBox3->Text += "R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc18 == 3) { textBox3->Text += "2U R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc18 == 4) { textBox3->Text += "U' R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc18 == 5) { textBox3->Text += "R' 2U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc18 == 6) { textBox3->Text += "U R' 2U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc18 == 7) { textBox3->Text += "U' R' U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc18 == 8) { textBox3->Text += "R' U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc18 == 9) { textBox3->Text += "B U' B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc18 == 10) { textBox3->Text += "R' U' R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc18 == 11) { textBox3->Text += "U R' U' R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc18 == 12) { textBox3->Text += "B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			//down
			if (objzmienna->swapc22 == 1) { textBox3->Text += "L' U 2L F' L' F "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc22 == 2) { textBox3->Text += "F U' 2F L F L' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc22 == 3) { textBox3->Text += "F' U' 2F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc22 == 4) { textBox3->Text += "L' R U L R' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc22 == 5) { textBox3->Text += "R U' R' L' U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc22 == 6) { textBox3->Text += "R' F 2U F' R "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc22 == 7) { textBox3->Text += "B L' 2U L B' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc22 == 8) { textBox3->Text += "R' L' 2U L R "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc22 == 9) { textBox3->Text += "B' F U' F' B "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc22 == 10) { textBox3->Text += "L U 2L 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc22 == 11) { textBox3->Text += "L U L' F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			//
			if (objzmienna->swapc26 == 1) { textBox3->Text += "F U 2F 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc26 == 2) { textBox3->Text += "R L' U' R' L "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc26 == 3) { textBox3->Text += "L' U' L R U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc26 == 4) { textBox3->Text += "R U' 2R F R F' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc26 == 5) { textBox3->Text += "F' U 2F R' F' R "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc26 == 6) { textBox3->Text += "R' U' 2R 2U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc26 == 7) { textBox3->Text += "B F' U B' F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc26 == 8) { textBox3->Text += "R' U' R F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc26 == 9) { textBox3->Text += "B' R 2U R' B "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc26 == 10) { textBox3->Text += "L F' 2U F L' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc26 == 11) { textBox3->Text += "R L 2U R' L' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			//
			if (objzmienna->swapc34 == 1) { textBox3->Text += "B' F U B F' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc34 == 2) { textBox3->Text += "L' U' 2L 2U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc34 == 3) { textBox3->Text += "F U' F' B' U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc34 == 4) { textBox3->Text += "F' L 2U L' F "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc34 == 5) { textBox3->Text += "R B' 2U B R' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc34 == 6) { textBox3->Text += "R L 2U L' R' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc34 == 7) { textBox3->Text += "R' L U' R L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc34 == 8) { textBox3->Text += "B U 2B 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc34 == 9) { textBox3->Text += "R' U' R L U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc34 == 10) { textBox3->Text += "L U' 2L B L B' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc34 == 11) { textBox3->Text += "B' U 2B L' B' L "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			//
			if (objzmienna->swapc30 == 1) { textBox3->Text += "F R' 2U R F' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc30 == 2) { textBox3->Text += "L' B 2U B' L "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc30 == 3) { textBox3->Text += "R' L' 2U L R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc30 == 4) { textBox3->Text += "B F' U' B' F "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc30 == 5) { textBox3->Text += "R U 2R 2U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc30 == 6) { textBox3->Text += "R U R' B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc30 == 7) { textBox3->Text += "B U' 2B R B R' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc30 == 8) { textBox3->Text += "R' U 2R B' R' B "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc30 == 9) { textBox3->Text += "B' U' 2B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc30 == 10) { textBox3->Text += "L R' U R L' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc30 == 11) { textBox3->Text += "L U' L' R' U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };

			//i=2
			if (objzmienna->swapc07 == 1) { textBox3->Text += "U' F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc07 == 2) { textBox3->Text += "2U F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc07 == 3) { textBox3->Text += "F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc06 == 4) { textBox3->Text += "U F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc07 == 5) { textBox3->Text += "U' L' U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc07 == 6) { textBox3->Text += "L' U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc07 == 7) { textBox3->Text += "L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc07 == 8) { textBox3->Text += "U L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc07 == 9) { textBox3->Text += "U' F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc07 == 10) { textBox3->Text += "F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc07 == 11) { textBox3->Text += "F U' F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc07 == 12) { textBox3->Text += "U F U' F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			//
			if (objzmienna->swapc11 == 1) { textBox3->Text += "2U R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc11 == 2) { textBox3->Text += "U R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc11 == 3) { textBox3->Text += "U' R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc11 == 4) { textBox3->Text += "R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc11 == 5) { textBox3->Text += "U F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc11 == 6) { textBox3->Text += "U' F' U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc11 == 7) { textBox3->Text += "F' U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc11 == 8) { textBox3->Text += "F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc11 == 9) { textBox3->Text += "U R U' R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc11 == 10) { textBox3->Text += "U' R 2U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc11 == 11) { textBox3->Text += "R 2U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc11 == 12) { textBox3->Text += "R U' R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			//
			if (objzmienna->swapc15 == 1) { textBox3->Text += "L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc15 == 2) { textBox3->Text += "U' L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc15 == 3) { textBox3->Text += "U L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc15 == 4) { textBox3->Text += "2U L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc15 == 5) { textBox3->Text += "B' U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc15 == 6) { textBox3->Text += "B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc15 == 7) { textBox3->Text += "U B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc15 == 8) { textBox3->Text += "U' B' U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc15 == 9) { textBox3->Text += "L 2U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc15 == 10) { textBox3->Text += "L U' L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc15 == 11) { textBox3->Text += "U L U' L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc15 == 12) { textBox3->Text += "U' L 2U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			//
			if (objzmienna->swapc19 == 1) { textBox3->Text += "U R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc19 == 2) { textBox3->Text += "R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc19 == 3) { textBox3->Text += "2U R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc19 == 4) { textBox3->Text += "U' R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc19 == 5) { textBox3->Text += "R' 2U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc19 == 6) { textBox3->Text += "U R' 2U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc19 == 7) { textBox3->Text += "U' R' U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc19 == 8) { textBox3->Text += "R' U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc19 == 9) { textBox3->Text += "B U' B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc19 == 10) { textBox3->Text += "R' U' R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc19 == 11) { textBox3->Text += "U R' U' R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc19 == 12) { textBox3->Text += "B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			//down
			if (objzmienna->swapc23 == 1) { textBox3->Text += "L' U 2L F' L' F "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc23 == 2) { textBox3->Text += "F U' 2F L F L' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc23 == 3) { textBox3->Text += "F' U' 2F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc23 == 4) { textBox3->Text += "L' R U L R' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc23 == 5) { textBox3->Text += "R U' R' L' U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc23 == 6) { textBox3->Text += "R' F 2U F' R "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc23 == 7) { textBox3->Text += "B L' 2U L B' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc23 == 8) { textBox3->Text += "R' L' 2U L R "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc23 == 9) { textBox3->Text += "B' F U' F' B "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc23 == 10) { textBox3->Text += "L U 2L 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc23 == 11) { textBox3->Text += "L U L' F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			//
			if (objzmienna->swapc27 == 1) { textBox3->Text += "F U 2F 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc27 == 2) { textBox3->Text += "R L' U' R' L "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc27 == 3) { textBox3->Text += "L' U' L R U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc27 == 4) { textBox3->Text += "R U' 2R F R F' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc27 == 5) { textBox3->Text += "F' U 2F R' F' R "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc27 == 6) { textBox3->Text += "R' U' 2R 2U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc27 == 7) { textBox3->Text += "B F' U B' F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc27 == 8) { textBox3->Text += "R' U' R F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc27 == 9) { textBox3->Text += "B' R 2U R' B "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc27 == 10) { textBox3->Text += "L F' 2U F L' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc27 == 11) { textBox3->Text += "R L 2U R' L' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			//
			if (objzmienna->swapc35 == 1) { textBox3->Text += "B' F U B F' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc35 == 2) { textBox3->Text += "L' U' 2L 2U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc35 == 3) { textBox3->Text += "F U' F' B' U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc35 == 4) { textBox3->Text += "F' L 2U L' F "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc35 == 5) { textBox3->Text += "R B' 2U B R' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc35 == 6) { textBox3->Text += "R L 2U L' R' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc35 == 7) { textBox3->Text += "R' L U' R L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc35 == 8) { textBox3->Text += "B U 2B 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc35 == 9) { textBox3->Text += "R' U' R L U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc35 == 10) { textBox3->Text += "L U' 2L B L B' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc35 == 11) { textBox3->Text += "B' U 2B L' B' L "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			//
			if (objzmienna->swapc31 == 1) { textBox3->Text += "F R' 2U R F' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc31 == 2) { textBox3->Text += "L' B 2U B' L "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc31 == 3) { textBox3->Text += "R' L' 2U L R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc31 == 4) { textBox3->Text += "B F' U' B' F "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc31 == 5) { textBox3->Text += "R U 2R 2U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc31 == 6) { textBox3->Text += "R U R' B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc31 == 7) { textBox3->Text += "B U' 2B R B R' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc31 == 8) { textBox3->Text += "R' U 2R B' R' B "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc31 == 9) { textBox3->Text += "B' U' 2B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc31 == 10) { textBox3->Text += "L R' U R L' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc31 == 11) { textBox3->Text += "L U' L' R' U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };

			//i=3
			if (objzmienna->swapc08 == 1) { textBox3->Text += "U' F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc08 == 2) { textBox3->Text += "2U F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc08 == 3) { textBox3->Text += "F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc08 == 4) { textBox3->Text += "U F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc08 == 5) { textBox3->Text += "U' L' U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc08 == 6) { textBox3->Text += "L' U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc08 == 7) { textBox3->Text += "L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc08 == 8) { textBox3->Text += "U L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc08 == 9) { textBox3->Text += "U' F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc08 == 10) { textBox3->Text += "F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc08 == 11) { textBox3->Text += "F U' F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc08 == 12) { textBox3->Text += "U F U' F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			//
			if (objzmienna->swapc12 == 1) { textBox3->Text += "2U R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc12 == 2) { textBox3->Text += "U R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc12 == 3) { textBox3->Text += "U' R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc12 == 4) { textBox3->Text += "R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc12 == 5) { textBox3->Text += "U F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc12 == 6) { textBox3->Text += "U' F' U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc12 == 7) { textBox3->Text += "F' U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc12 == 8) { textBox3->Text += "F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc12 == 9) { textBox3->Text += "U R U' R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc12 == 10) { textBox3->Text += "U' R 2U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc12 == 11) { textBox3->Text += "R 2U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc12 == 12) { textBox3->Text += "R U' R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			//
			if (objzmienna->swapc16 == 1) { textBox3->Text += "L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc16 == 2) { textBox3->Text += "U' L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc16 == 3) { textBox3->Text += "U L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc16 == 4) { textBox3->Text += "2U L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc16 == 5) { textBox3->Text += "B' U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc16 == 6) { textBox3->Text += "B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc16 == 7) { textBox3->Text += "U B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc16 == 8) { textBox3->Text += "U' B' U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc16 == 9) { textBox3->Text += "L 2U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc16 == 10) { textBox3->Text += "L U' L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc16 == 11) { textBox3->Text += "U L U' L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc16 == 12) { textBox3->Text += "U' L 2U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			//
			if (objzmienna->swapc20 == 1) { textBox3->Text += "U R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc20 == 2) { textBox3->Text += "R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc20 == 3) { textBox3->Text += "2U R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc20 == 4) { textBox3->Text += "U' R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc20 == 5) { textBox3->Text += "R' 2U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc20 == 6) { textBox3->Text += "U R' 2U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc20 == 7) { textBox3->Text += "U' R' U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc20 == 8) { textBox3->Text += "R' U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc20 == 9) { textBox3->Text += "B U' B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc20 == 10) { textBox3->Text += "R' U' R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc20 == 11) { textBox3->Text += "U R' U' R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc20 == 12) { textBox3->Text += "B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			//down
			if (objzmienna->swapc24 == 1) { textBox3->Text += "L' U 2L F' L' F "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc24 == 2) { textBox3->Text += "F U' 2F L F L' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc24 == 3) { textBox3->Text += "F' U' 2F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc24 == 4) { textBox3->Text += "L' R U L R' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc24 == 5) { textBox3->Text += "R U' R' L' U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc24 == 6) { textBox3->Text += "R' F 2U F' R "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc24 == 7) { textBox3->Text += "B L' 2U L B' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc24 == 8) { textBox3->Text += "R' L' 2U L R "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc24 == 9) { textBox3->Text += "B' F U' F' B "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc24 == 10) { textBox3->Text += "L U 2L 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc24 == 11) { textBox3->Text += "L U L' F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			//
			if (objzmienna->swapc28 == 1) { textBox3->Text += "F U 2F 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc28 == 2) { textBox3->Text += "R L' U' R' L "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc28 == 3) { textBox3->Text += "L' U' L R U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc28 == 4) { textBox3->Text += "R U' 2R F R F' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc28 == 5) { textBox3->Text += "F' U 2F R' F' R "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc28 == 6) { textBox3->Text += "R' U' 2R 2U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc28 == 7) { textBox3->Text += "B F' U B' F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc28 == 8) { textBox3->Text += "R' U' R F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc28 == 9) { textBox3->Text += "B' R 2U R' B "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc28 == 10) { textBox3->Text += "L F' 2U F L' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc28 == 11) { textBox3->Text += "R L 2U R' L' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			//
			if (objzmienna->swapc36 == 1) { textBox3->Text += "B' F U B F' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc36 == 2) { textBox3->Text += "L' U' 2L 2U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc36 == 3) { textBox3->Text += "F U' F' B' U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc36 == 4) { textBox3->Text += "F' L 2U L' F "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc36 == 5) { textBox3->Text += "R B' 2U B R' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc36 == 6) { textBox3->Text += "R L 2U L' R' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc36 == 7) { textBox3->Text += "R' L U' R L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc36 == 8) { textBox3->Text += "B U 2B 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc36 == 9) { textBox3->Text += "R' U' R L U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc36 == 10) { textBox3->Text += "L U' 2L B L B' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc36 == 11) { textBox3->Text += "B' U 2B L' B' L "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			//
			if (objzmienna->swapc32 == 1) { textBox3->Text += "F R' 2U R F' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc32 == 2) { textBox3->Text += "L' B 2U B' L "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc32 == 3) { textBox3->Text += "R' L' 2U L R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc32 == 4) { textBox3->Text += "B F' U' B' F "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc32 == 5) { textBox3->Text += "R U 2R 2U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc32 == 6) { textBox3->Text += "R U R' B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc32 == 7) { textBox3->Text += "B U' 2B R B R' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc32 == 8) { textBox3->Text += "R' U 2R B' R' B "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc32 == 9) { textBox3->Text += "B' U' 2B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc32 == 10) { textBox3->Text += "L R' U R L' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc32 == 11) { textBox3->Text += "L U' L' R' U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };

			//i=4
			if (objzmienna->swapc09 == 1) { textBox3->Text += "U' F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc09 == 2) { textBox3->Text += "2U F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc09 == 3) { textBox3->Text += "F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc09 == 4) { textBox3->Text += "U F U' F' L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc09 == 5) { textBox3->Text += "U' L' U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc09 == 6) { textBox3->Text += "L' U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc09 == 7) { textBox3->Text += "L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc09 == 8) { textBox3->Text += "U L' 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc09 == 9) { textBox3->Text += "U' F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc09 == 10) { textBox3->Text += "F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc09 == 11) { textBox3->Text += "F U' F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc09 == 12) { textBox3->Text += "U F U' F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			//
			if (objzmienna->swapc13 == 1) { textBox3->Text += "2U R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc13 == 2) { textBox3->Text += "U R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc13 == 3) { textBox3->Text += "U' R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc13 == 4) { textBox3->Text += "R U' R' F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc13 == 5) { textBox3->Text += "U F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc13 == 6) { textBox3->Text += "U' F' U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc13 == 7) { textBox3->Text += "F' U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc13 == 8) { textBox3->Text += "F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc13 == 9) { textBox3->Text += "U R U' R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc13 == 10) { textBox3->Text += "U' R 2U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc13 == 11) { textBox3->Text += "R 2U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc13 == 12) { textBox3->Text += "R U' R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			//
			if (objzmienna->swapc17 == 1) { textBox3->Text += "L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc17 == 2) { textBox3->Text += "U' L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc17 == 3) { textBox3->Text += "U L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc17 == 4) { textBox3->Text += "2U L U' L' B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc17 == 5) { textBox3->Text += "B' U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc17 == 6) { textBox3->Text += "B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc17 == 7) { textBox3->Text += "U B' 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc17 == 8) { textBox3->Text += "U' B' U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc17 == 9) { textBox3->Text += "L 2U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc17 == 10) { textBox3->Text += "L U' L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc17 == 11) { textBox3->Text += "U L U' L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc17 == 12) { textBox3->Text += "U' L 2U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			//
			if (objzmienna->swapc21 == 1) { textBox3->Text += "U R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc21 == 2) { textBox3->Text += "R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc21 == 3) { textBox3->Text += "2U R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc21 == 4) { textBox3->Text += "U' R' U R B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc21 == 5) { textBox3->Text += "R' 2U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc21 == 6) { textBox3->Text += "U R' 2U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc21 == 7) { textBox3->Text += "U' R' U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc21 == 8) { textBox3->Text += "R' U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc21 == 9) { textBox3->Text += "B U' B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc21 == 10) { textBox3->Text += "R' U' R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc21 == 11) { textBox3->Text += "U R' U' R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc21 == 12) { textBox3->Text += "B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			//down
			if (objzmienna->swapc25 == 1) { textBox3->Text += "L' U 2L F' L' F "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc25 == 2) { textBox3->Text += "F U' 2F L F L' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc25 == 3) { textBox3->Text += "F' U' 2F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc25 == 4) { textBox3->Text += "L' R U L R' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc25 == 5) { textBox3->Text += "R U' R' L' U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc25 == 6) { textBox3->Text += "R' F 2U F' R "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc25 == 7) { textBox3->Text += "B L' 2U L B' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc25 == 8) { textBox3->Text += "R' L' 2U L R "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc25 == 9) { textBox3->Text += "B' F U' F' B "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc25 == 10) { textBox3->Text += "L U 2L 2U L "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			if (objzmienna->swapc25 == 11) { textBox3->Text += "L U L' F 2U F' "; objzmienna->swapc06 = 0; objzmienna->swapc07 = 0; objzmienna->swapc08 = 0; objzmienna->swapc09 = 0; objzmienna->swapc22 = 0; objzmienna->swapc23 = 0; objzmienna->swapc24 = 0; objzmienna->swapc25 = 0; };
			//
			if (objzmienna->swapc29 == 1) { textBox3->Text += "F U 2F 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc29 == 2) { textBox3->Text += "R L' U' R' L "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc29 == 3) { textBox3->Text += "L' U' L R U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc29 == 4) { textBox3->Text += "R U' 2R F R F' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc29 == 5) { textBox3->Text += "F' U 2F R' F' R "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc29 == 6) { textBox3->Text += "R' U' 2R 2U R' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc29 == 7) { textBox3->Text += "B F' U B' F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc29 == 8) { textBox3->Text += "R' U' R F' 2U F "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc29 == 9) { textBox3->Text += "B' R 2U R' B "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc29 == 10) { textBox3->Text += "L F' 2U F L' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			if (objzmienna->swapc29 == 11) { textBox3->Text += "R L 2U R' L' "; objzmienna->swapc10 = 0; objzmienna->swapc11 = 0; objzmienna->swapc12 = 0; objzmienna->swapc13 = 0; objzmienna->swapc26 = 0; objzmienna->swapc27 = 0; objzmienna->swapc28 = 0; objzmienna->swapc29 = 0; };
			//
			if (objzmienna->swapc37 == 1) { textBox3->Text += "B' F U B F' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc37 == 2) { textBox3->Text += "L' U' 2L 2U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc37 == 3) { textBox3->Text += "F U' F' B' U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc37 == 4) { textBox3->Text += "F' L 2U L' F "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc37 == 5) { textBox3->Text += "R B' 2U B R' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc37 == 6) { textBox3->Text += "R L 2U L' R' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc37 == 7) { textBox3->Text += "R' L U' R L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc37 == 8) { textBox3->Text += "B U 2B 2U B "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc37 == 9) { textBox3->Text += "R' U' R L U L' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc37 == 10) { textBox3->Text += "L U' 2L B L B' "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			if (objzmienna->swapc37 == 11) { textBox3->Text += "B' U 2B L' B' L "; objzmienna->swapc14 = 0; objzmienna->swapc15 = 0; objzmienna->swapc16 = 0; objzmienna->swapc17 = 0; objzmienna->swapc34 = 0; objzmienna->swapc35 = 0; objzmienna->swapc36 = 0; objzmienna->swapc37 = 0; };
			//
			if (objzmienna->swapc33 == 1) { textBox3->Text += "F R' 2U R F' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc33 == 2) { textBox3->Text += "L' B 2U B' L "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc33 == 3) { textBox3->Text += "R' L' 2U L R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc33 == 4) { textBox3->Text += "B F' U' B' F "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc33 == 5) { textBox3->Text += "R U 2R 2U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc33 == 6) { textBox3->Text += "R U R' B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc33 == 7) { textBox3->Text += "B U' 2B R B R' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc33 == 8) { textBox3->Text += "R' U 2R B' R' B "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc33 == 9) { textBox3->Text += "B' U' 2B 2U B' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc33 == 10) { textBox3->Text += "L R' U R L' "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			if (objzmienna->swapc33 == 11) { textBox3->Text += "L U' L' R' U R "; objzmienna->swapc18 = 0; objzmienna->swapc19 = 0; objzmienna->swapc20 = 0; objzmienna->swapc21 = 0; objzmienna->swapc30 = 0; objzmienna->swapc31 = 0; objzmienna->swapc32 = 0; objzmienna->swapc33 = 0; };
			//edges
			if (objzmienna->swape01 == 1) { textBox4->Text += "2U F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape01 == 2) { textBox4->Text += "U' F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape01 == 3) { textBox4->Text += "F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape01 == 4) { textBox4->Text += "U F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape01 == 5) { textBox4->Text += "U' L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape01 == 6) { textBox4->Text += "L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape01 == 7) { textBox4->Text += "U L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape01 == 8) { textBox4->Text += "2U L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			//
			if (objzmienna->swape05 == 1) { textBox4->Text += "2U F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape05 == 2) { textBox4->Text += "U' F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape05 == 3) { textBox4->Text += "F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape05 == 4) { textBox4->Text += "U F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape05 == 5) { textBox4->Text += "U R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape05 == 6) { textBox4->Text += "2U R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape05 == 7) { textBox4->Text += "U' R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape05 == 8) { textBox4->Text += "R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			//
			if (objzmienna->swape09 == 1) { textBox4->Text += "B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape09 == 2) { textBox4->Text += "U B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape09 == 3) { textBox4->Text += "2U B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape09 == 4) { textBox4->Text += "U' B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape09 == 5) { textBox4->Text += "U R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape09 == 6) { textBox4->Text += "2U R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape09 == 7) { textBox4->Text += "U' R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape09 == 8) { textBox4->Text += "R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			//
			if (objzmienna->swape13 == 1) { textBox4->Text += "B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape13 == 2) { textBox4->Text += "U B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape13 == 3) { textBox4->Text += "2U B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape13 == 4) { textBox4->Text += "U' B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape13 == 5) { textBox4->Text += "U' L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape13 == 6) { textBox4->Text += "L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape13 == 7) { textBox4->Text += "U L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape13 == 8) { textBox4->Text += "2U L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			//
			if (objzmienna->swape17 == 1) { textBox4->Text += "2F 2U L 2F L' 2U F' U F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape17 == 2) { textBox4->Text += "R U' R' U' F' U 2F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape17 == 3) { textBox4->Text += "R L' U L U F U' F' U' R' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape17 == 4) { textBox4->Text += "R' L' U L U F U' F' 2U R B 2U B' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape17 == 5) { textBox4->Text += "B U L' U L U F U' F' 2U B' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape17 == 6) { textBox4->Text += "B' U L' U L U F U' F' U B L 2U L' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape17 == 7) { textBox4->Text += "B' F U' F' U' L' U L U B "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			//
			if (objzmienna->swape21 == 1) { textBox4->Text += "L' R U' R' U' F' U F U L "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape21 == 2) { textBox4->Text += "L' U F' U F R' F R F' U 2L F' L' F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape21 == 3) { textBox4->Text += "2R 2U F 2R F' 2U R' U R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape21 == 4) { textBox4->Text += "B F' U F R' F R F' U' B' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape21 == 5) { textBox4->Text += "B U' R U' R' U' F' U F U' B' R' 2U R "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape21 == 6) { textBox4->Text += "L U F' U F R' F R F' 2U L' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape21 == 7) { textBox4->Text += "L R U' R' F R' F' R 2U 2L B L B' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			//
			if (objzmienna->swape25 == 1) { textBox4->Text += "F B U' B' U' R' U R 2U F' L' 2U L "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape25 == 2) { textBox4->Text += "L' U' B U' B' U' R' U R 2U L "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape25 == 3) { textBox4->Text += "F' U R' U R B' R B R' U 2F R' F' R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape25 == 4) { textBox4->Text += "F' B U' B' R B' R' B U F "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape25 == 5) { textBox4->Text += "2B 2U R 2B R' 2U B' U B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape25 == 6) { textBox4->Text += "L U' B U' B' R B' R' B U' 2L B L B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape25 == 7) { textBox4->Text += "L R' U R U B U' B' U' L' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			//
			if (objzmienna->swape29 == 1) { textBox4->Text += "F B' U B U L U' L' U' F' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape29 == 2) { textBox4->Text += "F U' L U' L' B L' B' L U' 2F L F L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape29 == 3) { textBox4->Text += "R U B' U B L' B L B' 2U R' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape29 == 4) { textBox4->Text += "F' B' U B L' B L B' 2U 2F R' F' R "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape29 == 5) { textBox4->Text += "R' L U' L' B L' B' L U R "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape29 == 6) { textBox4->Text += "R' U B' U B L' B L B' U 2R B' R' B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape29 == 7) { textBox4->Text += "2L 2U B 2L B' 2U L' U L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			//i=2
			if (objzmienna->swape02 == 1) { textBox4->Text += "2U F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape02 == 2) { textBox4->Text += "U' F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape02 == 3) { textBox4->Text += "F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape02 == 4) { textBox4->Text += "U F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape02 == 5) { textBox4->Text += "U' L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape02 == 6) { textBox4->Text += "L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape02 == 7) { textBox4->Text += "U L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape02 == 8) { textBox4->Text += "2U L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			//
			if (objzmienna->swape06 == 1) { textBox4->Text += "2U F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape06 == 2) { textBox4->Text += "U' F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape06 == 3) { textBox4->Text += "F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape06 == 4) { textBox4->Text += "U F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape06 == 5) { textBox4->Text += "U R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape06 == 6) { textBox4->Text += "2U R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape06 == 7) { textBox4->Text += "U' R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape06 == 8) { textBox4->Text += "R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			//
			if (objzmienna->swape10 == 1) { textBox4->Text += "B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape10 == 2) { textBox4->Text += "U B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape10 == 3) { textBox4->Text += "2U B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape10 == 4) { textBox4->Text += "U' B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape10 == 5) { textBox4->Text += "U R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape10 == 6) { textBox4->Text += "2U R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape10 == 7) { textBox4->Text += "U' R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape10 == 8) { textBox4->Text += "R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			//
			if (objzmienna->swape14 == 1) { textBox4->Text += "B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape14 == 2) { textBox4->Text += "U B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape14 == 3) { textBox4->Text += "2U B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape14 == 4) { textBox4->Text += "U' B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape14 == 5) { textBox4->Text += "U' L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape14 == 6) { textBox4->Text += "L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape14 == 7) { textBox4->Text += "U L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape14 == 8) { textBox4->Text += "2U L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			//
			if (objzmienna->swape18 == 1) { textBox4->Text += "2F 2U L 2F L' 2U F' U F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape18 == 2) { textBox4->Text += "R U' R' U' F' U 2F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape18 == 3) { textBox4->Text += "R L' U L U F U' F' U' R' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape18 == 4) { textBox4->Text += "R' L' U L U F U' F' 2U R B 2U B' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape18 == 5) { textBox4->Text += "B U L' U L U F U' F' 2U B' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape18 == 6) { textBox4->Text += "B' U L' U L U F U' F' U B L 2U L' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape18 == 7) { textBox4->Text += "B' F U' F' U' L' U L U B "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			//
			if (objzmienna->swape22 == 1) { textBox4->Text += "L' R U' R' U' F' U F U L "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape22 == 2) { textBox4->Text += "L' U F' U F R' F R F' U 2L F' L' F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape22 == 3) { textBox4->Text += "2R 2U F 2R F' 2U R' U R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape22 == 4) { textBox4->Text += "B F' U F R' F R F' U' B' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape22 == 5) { textBox4->Text += "B U' R U' R' U' F' U F U' B' R' 2U R "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape22 == 6) { textBox4->Text += "L U F' U F R' F R F' 2U L' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape22 == 7) { textBox4->Text += "L R U' R' F R' F' R 2U 2L B L B' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			//
			if (objzmienna->swape26 == 1) { textBox4->Text += "F B U' B' U' R' U R 2U F' L' 2U L "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape26 == 2) { textBox4->Text += "L' U' B U' B' U' R' U R 2U L "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape26 == 3) { textBox4->Text += "F' U R' U R B' R B R' U 2F R' F' R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape26 == 4) { textBox4->Text += "F' B U' B' R B' R' B U F "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape26 == 5) { textBox4->Text += "2B 2U R 2B R' 2U B' U B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape26 == 6) { textBox4->Text += "L U' B U' B' R B' R' B U' 2L B L B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape26 == 7) { textBox4->Text += "L R' U R U B U' B' U' L' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			//
			if (objzmienna->swape30 == 1) { textBox4->Text += "F B' U B U L U' L' U' F' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape30 == 2) { textBox4->Text += "F U' L U' L' B L' B' L U' 2F L F L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape30 == 3) { textBox4->Text += "R U B' U B L' B L B' 2U R' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape30 == 4) { textBox4->Text += "F' B' U B L' B L B' 2U 2F R' F' R "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape30 == 5) { textBox4->Text += "R' L U' L' B L' B' L U R "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape30 == 6) { textBox4->Text += "R' U B' U B L' B L B' U 2R B' R' B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape30 == 7) { textBox4->Text += "2L 2U B 2L B' 2U L' U L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			//i=3
			if (objzmienna->swape03 == 1) { textBox4->Text += "2U F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape03 == 2) { textBox4->Text += "U' F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape03 == 3) { textBox4->Text += "F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape03 == 4) { textBox4->Text += "U F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape03 == 5) { textBox4->Text += "U' L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape03 == 6) { textBox4->Text += "L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape03 == 7) { textBox4->Text += "U L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape03 == 8) { textBox4->Text += "2U L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			//
			if (objzmienna->swape07 == 1) { textBox4->Text += "2U F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape07 == 2) { textBox4->Text += "U' F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape07 == 3) { textBox4->Text += "F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape07 == 4) { textBox4->Text += "U F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape07 == 5) { textBox4->Text += "U R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape07 == 6) { textBox4->Text += "2U R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape07 == 7) { textBox4->Text += "U' R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape07 == 8) { textBox4->Text += "R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			//
			if (objzmienna->swape11 == 1) { textBox4->Text += "B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape11 == 2) { textBox4->Text += "U B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape11 == 3) { textBox4->Text += "2U B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape11 == 4) { textBox4->Text += "U' B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape11 == 5) { textBox4->Text += "U R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape11 == 6) { textBox4->Text += "2U R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape11 == 7) { textBox4->Text += "U' R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape11 == 8) { textBox4->Text += "R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			//
			if (objzmienna->swape15 == 1) { textBox4->Text += "B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape15 == 2) { textBox4->Text += "U B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape15 == 3) { textBox4->Text += "2U B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape15 == 4) { textBox4->Text += "U' B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape15 == 5) { textBox4->Text += "U' L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape15 == 6) { textBox4->Text += "L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape15 == 7) { textBox4->Text += "U L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape15 == 8) { textBox4->Text += "2U L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			//
			if (objzmienna->swape19 == 1) { textBox4->Text += "2F 2U L 2F L' 2U F' U F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape19 == 2) { textBox4->Text += "R U' R' U' F' U 2F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape19 == 3) { textBox4->Text += "R L' U L U F U' F' U' R' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape19 == 4) { textBox4->Text += "R' L' U L U F U' F' 2U R B 2U B' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape19 == 5) { textBox4->Text += "B U L' U L U F U' F' 2U B' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape19 == 6) { textBox4->Text += "B' U L' U L U F U' F' U B L 2U L' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape19 == 7) { textBox4->Text += "B' F U' F' U' L' U L U B "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			//
			if (objzmienna->swape23 == 1) { textBox4->Text += "L' R U' R' U' F' U F U L "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape23 == 2) { textBox4->Text += "L' U F' U F R' F R F' U 2L F' L' F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape23 == 3) { textBox4->Text += "2R 2U F 2R F' 2U R' U R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape23 == 4) { textBox4->Text += "B F' U F R' F R F' U' B' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape23 == 5) { textBox4->Text += "B U' R U' R' U' F' U F U' B' R' 2U R "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape23 == 6) { textBox4->Text += "L U F' U F R' F R F' 2U L' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape23 == 7) { textBox4->Text += "L R U' R' F R' F' R 2U 2L B L B' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			//
			if (objzmienna->swape27 == 1) { textBox4->Text += "F B U' B' U' R' U R 2U F' L' 2U L "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape27 == 2) { textBox4->Text += "L' U' B U' B' U' R' U R 2U L "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape27 == 3) { textBox4->Text += "F' U R' U R B' R B R' U 2F R' F' R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape27 == 4) { textBox4->Text += "F' B U' B' R B' R' B U F "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape27 == 5) { textBox4->Text += "2B 2U R 2B R' 2U B' U B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape27 == 6) { textBox4->Text += "L U' B U' B' R B' R' B U' 2L B L B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape27 == 7) { textBox4->Text += "L R' U R U B U' B' U' L' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			//
			if (objzmienna->swape31 == 1) { textBox4->Text += "F B' U B U L U' L' U' F' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape31 == 2) { textBox4->Text += "F U' L U' L' B L' B' L U' 2F L F L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape31 == 3) { textBox4->Text += "R U B' U B L' B L B' 2U R' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape31 == 4) { textBox4->Text += "F' B' U B L' B L B' 2U 2F R' F' R "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape31 == 5) { textBox4->Text += "R' L U' L' B L' B' L U R "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape31 == 6) { textBox4->Text += "R' U B' U B L' B L B' U 2R B' R' B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape31 == 7) { textBox4->Text += "2L 2U B 2L B' 2U L' U L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			//i=4
			if (objzmienna->swape04 == 1) { textBox4->Text += "2U F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape04 == 2) { textBox4->Text += "U' F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape04 == 3) { textBox4->Text += "F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape04 == 4) { textBox4->Text += "U F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape04 == 5) { textBox4->Text += "U' L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape04 == 6) { textBox4->Text += "L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape04 == 7) { textBox4->Text += "U L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape04 == 8) { textBox4->Text += "2U L' U L U F U' F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			//
			if (objzmienna->swape08 == 1) { textBox4->Text += "2U F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape08 == 2) { textBox4->Text += "U' F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape08 == 3) { textBox4->Text += "F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape08 == 4) { textBox4->Text += "U F' U F U R U' R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape08 == 5) { textBox4->Text += "U R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape08 == 6) { textBox4->Text += "2U R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape08 == 7) { textBox4->Text += "U' R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape08 == 8) { textBox4->Text += "R U' R' U' F' U F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			//
			if (objzmienna->swape12 == 1) { textBox4->Text += "B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape12 == 2) { textBox4->Text += "U B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape12 == 3) { textBox4->Text += "2U B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape12 == 4) { textBox4->Text += "U' B U' B' U' R' U R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape12 == 5) { textBox4->Text += "U R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape12 == 6) { textBox4->Text += "2U R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape12 == 7) { textBox4->Text += "U' R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape12 == 8) { textBox4->Text += "R' U R U B U' B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			//
			if (objzmienna->swape16 == 1) { textBox4->Text += "B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape16 == 2) { textBox4->Text += "U B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape16 == 3) { textBox4->Text += "2U B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape16 == 4) { textBox4->Text += "U' B' U B U L U' L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape16 == 5) { textBox4->Text += "U' L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape16 == 6) { textBox4->Text += "L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape16 == 7) { textBox4->Text += "U L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape16 == 8) { textBox4->Text += "2U L U' L' U' B' U B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			//
			if (objzmienna->swape20 == 1) { textBox4->Text += "2F 2U L 2F L' 2U F' U F' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape20 == 2) { textBox4->Text += "R U' R' U' F' U 2F U' F' U' L' U L "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape20 == 3) { textBox4->Text += "R L' U L U F U' F' U' R' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape20 == 4) { textBox4->Text += "R' L' U L U F U' F' 2U R B 2U B' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape20 == 5) { textBox4->Text += "B U L' U L U F U' F' 2U B' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape20 == 6) { textBox4->Text += "B' U L' U L U F U' F' U B L 2U L' "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			if (objzmienna->swape20 == 7) { textBox4->Text += "B' F U' F' U' L' U L U B "; objzmienna->swape01 = 0; objzmienna->swape02 = 0; objzmienna->swape03 = 0; objzmienna->swape04 = 0; objzmienna->swape17 = 0; objzmienna->swape18 = 0; objzmienna->swape19 = 0; objzmienna->swapc20 = 0; };
			//
			if (objzmienna->swape24 == 1) { textBox4->Text += "L' R U' R' U' F' U F U L "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape24 == 2) { textBox4->Text += "L' U F' U F R' F R F' U 2L F' L' F "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape24 == 3) { textBox4->Text += "2R 2U F 2R F' 2U R' U R' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape24 == 4) { textBox4->Text += "B F' U F R' F R F' U' B' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape24 == 5) { textBox4->Text += "B U' R U' R' U' F' U F U' B' R' 2U R "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape24 == 6) { textBox4->Text += "L U F' U F R' F R F' 2U L' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			if (objzmienna->swape24 == 7) { textBox4->Text += "L R U' R' F R' F' R 2U 2L B L B' "; objzmienna->swape05 = 0; objzmienna->swape06 = 0; objzmienna->swape07 = 0; objzmienna->swape08 = 0; objzmienna->swape21 = 0; objzmienna->swape22 = 0; objzmienna->swape23 = 0; objzmienna->swapc24 = 0; };
			//
			if (objzmienna->swape28 == 1) { textBox4->Text += "F B U' B' U' R' U R 2U F' L' 2U L "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape28 == 2) { textBox4->Text += "L' U' B U' B' U' R' U R 2U L "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape28 == 3) { textBox4->Text += "F' U R' U R B' R B R' U 2F R' F' R "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape28 == 4) { textBox4->Text += "F' B U' B' R B' R' B U F "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape28 == 5) { textBox4->Text += "2B 2U R 2B R' 2U B' U B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape28 == 6) { textBox4->Text += "L U' B U' B' R B' R' B U' 2L B L B' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			if (objzmienna->swape28 == 7) { textBox4->Text += "L R' U R U B U' B' U' L' "; objzmienna->swape09 = 0; objzmienna->swape10 = 0; objzmienna->swape11 = 0; objzmienna->swape12 = 0; objzmienna->swape25 = 0; objzmienna->swape26 = 0; objzmienna->swape27 = 0; objzmienna->swapc28 = 0; };
			//
			if (objzmienna->swape32 == 1) { textBox4->Text += "F B' U B U L U' L' U' F' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape32 == 2) { textBox4->Text += "F U' L U' L' B L' B' L U' 2F L F L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape32 == 3) { textBox4->Text += "R U B' U B L' B L B' 2U R' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape32 == 4) { textBox4->Text += "F' B' U B L' B L B' 2U 2F R' F' R "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape32 == 5) { textBox4->Text += "R' L U' L' B L' B' L U R "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape32 == 6) { textBox4->Text += "R' U B' U B L' B L B' U 2R B' R' B "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			if (objzmienna->swape32 == 7) { textBox4->Text += "2L 2U B 2L B' 2U L' U L' "; objzmienna->swape13 = 0; objzmienna->swape14 = 0; objzmienna->swape15 = 0; objzmienna->swape16 = 0; objzmienna->swape29 = 0; objzmienna->swape30 = 0; objzmienna->swape31 = 0; objzmienna->swapc32 = 0; };
			//oll
			if (objzmienna->swapo01 == 1) { textBox5->Text += "F R U R' U' F' "; };
			if (objzmienna->swapo01 == 2) { textBox5->Text += "U F R U R' U' F' "; };
			if (objzmienna->swapo01 == 3) { textBox5->Text += "F R U R' U' R U R' U' F' "; };
			if (objzmienna->swapo01 == 4) { textBox5->Text += "F' L' U' L U L' U' L U F "; };
			if (objzmienna->swapo01 == 5) { textBox5->Text += "U' F' L' U' L U L' U' L U F "; };
			if (objzmienna->swapo01 == 6) { textBox5->Text += "U F R U R' U' R U R' U' F' "; };
			if (objzmienna->swapo01 == 7) { textBox5->Text += "R U2 R2 F R F' U2 R' F R F' "; };
			if (objzmienna->swapo02 == 1) { textBox5->Text += "R 2U R' U' R U R' U' R U' R' "; };
			if (objzmienna->swapo02 == 2) { textBox5->Text += "U R 2U R' U' R U R' U' R U' R' "; };
			if (objzmienna->swapo02 == 3) { textBox5->Text += "R 2U 2R U' 2R U' 2R 2U R "; };
			if (objzmienna->swapo02 == 4) { textBox5->Text += "U R 2U 2R U' 2R U' 2R 2U R "; };
			if (objzmienna->swapo02 == 5) { textBox5->Text += "2U R 2U 2R U' 2R U' 2R 2U R "; };
			if (objzmienna->swapo02 == 6) { textBox5->Text += "U' R 2U 2R U' 2R U' 2R 2U R "; };
			if (objzmienna->swapo03 == 1) { textBox5->Text += "2R D' R 2U R' D R 2U R "; };
			if (objzmienna->swapo03 == 2) { textBox5->Text += "U' 2R D' R 2U R' D R 2U R "; };
			if (objzmienna->swapo03 == 3) { textBox5->Text += "2U 2R D' R 2U R' D R 2U R "; };
			if (objzmienna->swapo03 == 4) { textBox5->Text += "U 2R D' R 2U R' D R 2U R "; };
			if (objzmienna->swapo04 == 1) { textBox5->Text += "2U L F R' F' L' F R F' "; };
			if (objzmienna->swapo04 == 2) { textBox5->Text += "U' L F R' F' L' F R F' "; };
			if (objzmienna->swapo04 == 3) { textBox5->Text += "L F R' F' L' F R F' "; };
			if (objzmienna->swapo04 == 4) { textBox5->Text += "U L F R' F' L' F R F' "; };
			if (objzmienna->swapo05 == 1) { textBox5->Text += "L' U' L U' L' 2U L "; };
			if (objzmienna->swapo06 == 1) { textBox5->Text += "B' U' B U' B' 2U B "; };
			if (objzmienna->swapo07 == 1) { textBox5->Text += "R' U' R U' R' 2U R "; };
			if (objzmienna->swapo08 == 1) { textBox5->Text += "F' U' F U' F' 2U F "; };
			if (objzmienna->swapo09 == 1) { textBox5->Text += "L U L' U L 2U L' "; };
			if (objzmienna->swapo10 == 1) { textBox5->Text += "B U B' U B 2U B' "; };
			if (objzmienna->swapo11 == 1) { textBox5->Text += "R U R' U R 2U R' "; };
			if (objzmienna->swapo12 == 1) { textBox5->Text += "F U F' U F 2U F' "; };
			if (objzmienna->swapo13 == 1) { textBox5->Text += "R' F R B' R' F' R B "; };
			if (objzmienna->swapo14 == 1) { textBox5->Text += "B' R B L' B' R' B L "; };
			if (objzmienna->swapo15 == 1) { textBox5->Text += "L' B L F' L' B' L F "; };
			if (objzmienna->swapo16 == 1) { textBox5->Text += "F' L F R' F' L' F R "; };
			//pll
			if (objzmienna->swapp01 == 1) { textBox6->Text += "L U' R' U L' 2U R U' R' 2U R "; };
			if (objzmienna->swapp01 == 2) { textBox6->Text += "L U' R' U L' 2U R U' R' 2U R U' "; };
			if (objzmienna->swapp01 == 3) { textBox6->Text += "L U' R' U L' 2U R U' R' 2U R 2U "; };
			if (objzmienna->swapp01 == 4) { textBox6->Text += "L U' R' U L' 2U R U' R' 2U R U "; };
			if (objzmienna->swapp01 == 5) { textBox6->Text += "U' L U' R' U L' 2U R U' R' 2U R U "; };
			if (objzmienna->swapp01 == 6) { textBox6->Text += "U' L U' R' U L' 2U R U' R' 2U R "; };
			if (objzmienna->swapp01 == 7) { textBox6->Text += "U' L U' R' U L' 2U R U' R' 2U R U' "; };
			if (objzmienna->swapp01 == 8) { textBox6->Text += "U' L U' R' U L' 2U R U' R' 2U R 2U "; };
			if (objzmienna->swapp01 == 9) { textBox6->Text += "R' U L U' R 2U L' U L 2U L' "; };
			if (objzmienna->swapp01 == 10) { textBox6->Text += "R' U L U' R 2U L' U L 2U L' U' "; };
			if (objzmienna->swapp01 == 11) { textBox6->Text += "R' U L U' R 2U L' U L 2U L' 2U "; };
			if (objzmienna->swapp01 == 12) { textBox6->Text += "R' U L U' R 2U L' U L 2U L' U "; };
			if (objzmienna->swapp01 == 13) { textBox6->Text += "U R' U L U' R 2U L' U L 2U L' U "; };
			if (objzmienna->swapp01 == 14) { textBox6->Text += "U R' U L U' R 2U L' U L 2U L' "; };
			if (objzmienna->swapp01 == 15) { textBox6->Text += "U R' U L U' R 2U L' U L 2U L' U' "; };
			if (objzmienna->swapp01 == 16) { textBox6->Text += "U R' U L U' R 2U L' U L 2U L' 2U "; };
			if (objzmienna->swapp02 == 1) { textBox6->Text += "R U R' U' R' F R2 U' R' U' R U R' F' "; };
			if (objzmienna->swapp03 == 1) { textBox6->Text += "U' "; };
			if (objzmienna->swapp03 == 2) { textBox6->Text += "2U "; };
			if (objzmienna->swapp03 == 3) { textBox6->Text += "U "; };
			if (objzmienna->swapp04 == 1) { textBox6->Text += "R2 U2 R U2 R2 U2 R2 U2 R U2 R2 2U "; };
			if (objzmienna->swapp05 == 1) { textBox6->Text += "R B' R' F R B R' F' R B R' F R B' R' F' "; };
			if (objzmienna->swapp06 == 1) { textBox6->Text += "U' R B' R' F R B R' F' R B R' F R B' R' F' U "; };
			if (objzmienna->swapp07 == 1) { textBox6->Text += "R' F R' 2B R F' R' 2B 2R "; };
			if (objzmienna->swapp08 == 1) { textBox6->Text += "U R' F R' 2B R F' R' 2B 2R U' "; };
			if (objzmienna->swapp09 == 1) { textBox6->Text += "2U R' F R' 2B R F' R' 2B 2R 2U "; };
			if (objzmienna->swapp10 == 1) { textBox6->Text += "U' R' F R' 2B R F' R' 2B 2R U "; };
			if (objzmienna->swapp11 == 1) { textBox6->Text += "2R 2B R F R' 2B R F' R "; };
			if (objzmienna->swapp12 == 1) { textBox6->Text += "U 2R 2B R F R' 2B R F' R U' "; };
			if (objzmienna->swapp13 == 1) { textBox6->Text += "2U 2R 2B R F R' 2B R F' R 2U "; };
			if (objzmienna->swapp14 == 1) { textBox6->Text += "U' 2R 2B R F R' 2B R F' R U "; };
			licznikruchow = objzmienna->licznikruchow;
			textBox7->Text = licznikruchow.ToString();
			licznikruchow = 0;
		}
	}

	public: System::Void Timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		timer1->Interval = 1000;
		if ((scianao->o1 == 11) && (scianao->o2 == 12) && (scianao->o3 == 13) && (scianao->o4 == 14) && (scianao->o5 == 15) && (scianao->o6 == 16) && (scianao->o7 == 17) &&
			(scianao->o8 == 18) && (scianao->o9 == 19) && (scianay->y1 == 51) && (scianay->y2 == 52) && (scianay->y3 == 53) && (scianay->y4 == 54) && (scianay->y5 == 55) &&
			(scianay->y6 == 56) && (scianay->y7 == 57) && (scianay->y8 == 58) && (scianay->y9 == 59) && (scianaw->w1 == 61) && (scianaw->w2 == 62) && (scianaw->w3 == 63) &&
			(scianaw->w4 == 64) && (scianaw->w5 == 65) && (scianaw->w6 == 66) && (scianaw->w7 == 67) && (scianaw->w8 == 68) && (scianaw->w9 == 69) && (scianab->b1 == 21) &&
			(scianab->b2 == 22) && (scianab->b3 == 23) && (scianab->b4 == 24) && (scianab->b5 == 25) && (scianab->b6 == 26) && (scianab->b7 == 27) && (scianab->b8 == 28) &&
			(scianab->b9 == 29) && (scianag->g1 == 41) && (scianag->g2 == 42) && (scianag->g3 == 43) && (scianag->g4 == 44) && (scianag->g5 == 45) && (scianag->g6 == 46) &&
			(scianag->g7 == 47) && (scianag->g8 == 48) && (scianag->g9 == 49) && (scianar->r1 == 31) && (scianar->r2 == 32) && (scianar->r3 == 33) && (scianar->r4 == 34) &&
			(scianar->r5 == 35) && (scianar->r6 == 36) && (scianar->r7 == 37) && (scianar->r8 == 38) && (scianar->r9 == 39))
		{
			textBox1->Text = ""; textBox2->Text = ""; textBox3->Text = ""; textBox4->Text = ""; textBox5->Text = ""; textBox6->Text = ""; textBox7->Text = "";
		};



		scramble(&scianab->b1, &scianab->b2, &scianab->b3, &scianab->b4, &scianab->b5, &scianab->b6, &scianab->b7, &scianab->b8, &scianab->b9,
			&scianar->r1, &scianar->r2, &scianar->r3, &scianar->r4, &scianar->r5, &scianar->r6, &scianar->r7, &scianar->r8, &scianar->r9,
			&scianag->g1, &scianag->g2, &scianag->g3, &scianag->g4, &scianag->g5, &scianag->g6, &scianag->g7, &scianag->g8, &scianag->g9,
			&scianao->o1, &scianao->o2, &scianao->o3, &scianao->o4, &scianao->o5, &scianao->o6, &scianao->o7, &scianao->o8, &scianao->o9,
			&scianay->y1, &scianay->y2, &scianay->y3, &scianay->y4, &scianay->y5, &scianay->y6, &scianay->y7, &scianay->y8, &scianay->y9,
			&scianaw->w1, &scianaw->w2, &scianaw->w3, &scianaw->w4, &scianaw->w5, &scianaw->w6, &scianaw->w7, &scianaw->w8, &scianaw->w9, &objzmienna->Oswap);
		
		progressBar1->Increment(5);
		switch (objzmienna->Oswap) {
		case 1: {textBox1->Text += "F "; break; }
		case 2: {textBox1->Text += "F' "; break; }
		case 3: {textBox1->Text += "2F "; break; }
		case 4: {textBox1->Text += "R "; break; }
		case 5: {textBox1->Text += "R' "; break; }
		case 6: {textBox1->Text += "2R "; break; }
		case 7: {textBox1->Text += "B "; break; }
		case 8: {textBox1->Text += "B' "; break; }
		case 9: {textBox1->Text += "2B "; break; }
		case 10: {textBox1->Text += "L "; break; }
		case 11: {textBox1->Text += "L' "; break; }
		case 12: {textBox1->Text += "2L "; break; }
		case 13: {textBox1->Text += "U "; break; }
		case 14: {textBox1->Text += "U' "; break; }
		case 15: {textBox1->Text += "2U "; break; }
		case 16: {textBox1->Text += "D "; break; }
		case 17: {textBox1->Text += "D' "; break; }
		case 18: {textBox1->Text += "2D "; break; }
		}
		timer2->Start();
		objzmienna->swapt += 1; if (objzmienna->swapt == 20) { timer1->Stop(); timer1->Interval = 1; }
	}

	private: System::Void Timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		
		read(&scianab->b1, &scianab->b2, &scianab->b3, &scianab->b4, &scianab->b5, &scianab->b6, &scianab->b7, &scianab->b8, &scianab->b9,
			&scianar->r1, &scianar->r2, &scianar->r3, &scianar->r4, &scianar->r5, &scianar->r6, &scianar->r7, &scianar->r8, &scianar->r9,
			&scianag->g1, &scianag->g2, &scianag->g3, &scianag->g4, &scianag->g5, &scianag->g6, &scianag->g7, &scianag->g8, &scianag->g9,
			&scianao->o1, &scianao->o2, &scianao->o3, &scianao->o4, &scianao->o5, &scianao->o6, &scianao->o7, &scianao->o8, &scianao->o9,
			&scianay->y1, &scianay->y2, &scianay->y3, &scianay->y4, &scianay->y5, &scianay->y6, &scianay->y7, &scianay->y8, &scianay->y9,
			&scianaw->w1, &scianaw->w2, &scianaw->w3, &scianaw->w4, &scianaw->w5, &scianaw->w6, &scianaw->w7, &scianaw->w8, &scianaw->w9,
			&objzmienna->swap11, &objzmienna->swap12, &objzmienna->swap13, &objzmienna->swap14, &objzmienna->swap16, &objzmienna->swap17, &objzmienna->swap18, &objzmienna->swap19,
			&objzmienna->swap21, &objzmienna->swap22, &objzmienna->swap23, &objzmienna->swap24, &objzmienna->swap26, &objzmienna->swap27, &objzmienna->swap28, &objzmienna->swap29,
			&objzmienna->swap31, &objzmienna->swap32, &objzmienna->swap33, &objzmienna->swap34, &objzmienna->swap36, &objzmienna->swap37, &objzmienna->swap38, &objzmienna->swap39,
			&objzmienna->swap41, &objzmienna->swap42, &objzmienna->swap43, &objzmienna->swap44, &objzmienna->swap46, &objzmienna->swap47, &objzmienna->swap48, &objzmienna->swap49,
			&objzmienna->swap51, &objzmienna->swap52, &objzmienna->swap53, &objzmienna->swap54, &objzmienna->swap56, &objzmienna->swap57, &objzmienna->swap58, &objzmienna->swap59,
			&objzmienna->swap61, &objzmienna->swap62, &objzmienna->swap63, &objzmienna->swap64, &objzmienna->swap66, &objzmienna->swap67, &objzmienna->swap68, &objzmienna->swap69);
		//O
		switch (objzmienna->swap11) {
		case 1: {button5->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik11 = 1; }
		case 2: {button5->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik11 = 2; }
		case 3: {button5->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik11 = 3; }
		case 4: {button5->BackColor = System::Drawing::Color::Green; break;  objzmienna->licznik11 = 4; }
		case 5: {button5->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik11 = 5; }
		case 6: {button5->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik11 = 6; }
		}
		//
		switch (objzmienna->swap12) {
		case 1: {button6->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik12 = 1; }
		case 2: {button6->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik12 = 2; }
		case 3: {button6->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik12 = 3; }
		case 4: {button6->BackColor = System::Drawing::Color::Green; break;  objzmienna->licznik12 = 4; }
		case 5: {button6->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik12 = 5; }
		case 6: {button6->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik12 = 6; }
		}
		//
		switch (objzmienna->swap13) {
		case 1: {button7->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik13 = 1; }
		case 2: {button7->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik13 = 2; }
		case 3: {button7->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik13 = 3; }
		case 4: {button7->BackColor = System::Drawing::Color::Green; break;  objzmienna->licznik13 = 4; }
		case 5: {button7->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik13 = 5; }
		case 6: {button7->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik13 = 6; }
		}
		//
		switch (objzmienna->swap14) {
		case 1: {button8->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik14 = 1; }
		case 2: {button8->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik14 = 2; }
		case 3: {button8->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik14 = 3; }
		case 4: {button8->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik14 = 4; }
		case 5: {button8->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik14 = 5; }
		case 6: {button8->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik14 = 6; }
		}
		//
		switch (objzmienna->swap16) {
		case 1: {button10->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik16 = 1; }
		case 2: {button10->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik16 = 2; }
		case 3: {button10->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik16 = 3; }
		case 4: {button10->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik16 = 4; }
		case 5: {button10->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik16 = 5; }
		case 6: {button10->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik16 = 6; }
		}
		//
		switch (objzmienna->swap17) {
		case 1: {button11->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik17 = 1; }
		case 2: {button11->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik17 = 2; }
		case 3: {button11->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik17 = 3; }
		case 4: {button11->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik17 = 4; }
		case 5: {button11->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik17 = 5; }
		case 6: {button11->BackColor = System::Drawing::Color::White; break; objzmienna->licznik17 = 6; }
		}
		//
		switch (objzmienna->swap18) {
		case 1: {button12->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik18 = 1; }
		case 2: {button12->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik18 = 2; }
		case 3: {button12->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik18 = 3; }
		case 4: {button12->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik18 = 4; }
		case 5: {button12->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik18 = 5; }
		case 6: {button12->BackColor = System::Drawing::Color::White; break; objzmienna->licznik18 = 6; }
		}
		//
		switch (objzmienna->swap19) {
		case 1: {button13->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik19 = 1; }
		case 2: {button13->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik19 = 2; }
		case 3: {button13->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik19 = 3; }
		case 4: {button13->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik19 = 4; }
		case 5: {button13->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik19 = 5; }
		case 6: {button13->BackColor = System::Drawing::Color::White; break; objzmienna->licznik19 = 6; }
		}
		//B
		switch (objzmienna->swap21) {
		case 1: {button14->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik21 = 1; }
		case 2: {button14->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik21 = 2; }
		case 3: {button14->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik21 = 3; }
		case 4: {button14->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik21 = 4; }
		case 5: {button14->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik21 = 5; }
		case 6: {button14->BackColor = System::Drawing::Color::White; break; objzmienna->licznik21 = 6; }
		}
		//
		switch (objzmienna->swap22) {
		case 1: {button15->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik22 = 1; }
		case 2: {button15->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik22 = 2; }
		case 3: {button15->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik22 = 3; }
		case 4: {button15->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik22 = 4; }
		case 5: {button15->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik22 = 5; }
		case 6: {button15->BackColor = System::Drawing::Color::White; break; objzmienna->licznik22 = 6; }
		}
		//
		switch (objzmienna->swap23) {
		case 1: {button16->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik23 = 1; }
		case 2: {button16->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik23 = 2; }
		case 3: {button16->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik23 = 3; }
		case 4: {button16->BackColor = System::Drawing::Color::Green; break;  objzmienna->licznik23 = 4; }
		case 5: {button16->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik23 = 5; }
		case 6: {button16->BackColor = System::Drawing::Color::White; break; objzmienna->licznik23 = 6; }
		}
		//
		switch (objzmienna->swap24) {
		case 1: {button17->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik24 = 1; }
		case 2: {button17->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik24 = 2; }
		case 3: {button17->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik24 = 3; }
		case 4: {button17->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik24 = 4; }
		case 5: {button17->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik24 = 5; }
		case 6: {button17->BackColor = System::Drawing::Color::White; break; objzmienna->licznik24 = 6; }
		}
		//
		switch (objzmienna->swap26) {
		case 1: {button19->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik26 = 1; }
		case 2: {button19->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik26 = 2; }
		case 3: {button19->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik26 = 3; }
		case 4: {button19->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik26 = 4; }
		case 5: {button19->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik26 = 5; }
		case 6: {button19->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik26 = 6; }
		}
		//
		switch (objzmienna->swap27) {
		case 1: {button20->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik27 = 1; }
		case 2: {button20->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik27 = 2; }
		case 3: {button20->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik27 = 3; }
		case 4: {button20->BackColor = System::Drawing::Color::Green; break;  objzmienna->licznik27 = 4; }
		case 5: {button20->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik27 = 5; }
		case 6: {button20->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik27 = 6; }
		}
		//
		switch (objzmienna->swap28) {
		case 1: {button21->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik28 = 1; }
		case 2: {button21->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik28 = 2; }
		case 3: {button21->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik28 = 3; }
		case 4: {button21->BackColor = System::Drawing::Color::Green; break;  objzmienna->licznik28 = 4; }
		case 5: {button21->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik28 = 5; }
		case 6: {button21->BackColor = System::Drawing::Color::White; break; objzmienna->licznik28 = 6; }
		}
		//
		switch (objzmienna->swap29) {
		case 1: {button22->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik29 = 1; }
		case 2: {button22->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik29 = 2; }
		case 3: {button22->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik29 = 3; }
		case 4: {button22->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik29 = 4; }
		case 5: {button22->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik29 = 5; }
		case 6: {button22->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik29 = 6; }
		}
		//R
		switch (objzmienna->swap31) {
		case 1: {button23->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik31 = 1; }
		case 2: {button23->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik31 = 2; }
		case 3: {button23->BackColor = System::Drawing::Color::Red; break;  objzmienna->licznik31 = 3; }
		case 4: {button23->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik31 = 4; }
		case 5: {button23->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik31 = 5; }
		case 6: {button23->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik31 = 6; }
		}
		//
		switch (objzmienna->swap32) {
		case 1: {button24->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik32 = 1; }
		case 2: {button24->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik32 = 2; }
		case 3: {button24->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik32 = 3; }
		case 4: {button24->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik32 = 4; }
		case 5: {button24->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik32 = 5; }
		case 6: {button24->BackColor = System::Drawing::Color::White; break; objzmienna->licznik32 = 6; }
		}
		//
		switch (objzmienna->swap33) {
		case 1: {button25->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik33 = 1; }
		case 2: {button25->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik33 = 2; }
		case 3: {button25->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik33 = 3; }
		case 4: {button25->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik33 = 4; }
		case 5: {button25->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik33 = 5; }
		case 6: {button25->BackColor = System::Drawing::Color::White; break; objzmienna->licznik33 = 6; }
		}
		//
		switch (objzmienna->swap34) {
		case 1: {button26->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik34 = 1; }
		case 2: {button26->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik34 = 2; }
		case 3: {button26->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik34 = 3; }
		case 4: {button26->BackColor = System::Drawing::Color::Green; break;  objzmienna->licznik34 = 4; }
		case 5: {button26->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik34 = 5; }
		case 6: {button26->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik34 = 6; }
		}
		//
		switch (objzmienna->swap36) {
		case 1: {button28->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik36 = 1; }
		case 2: {button28->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik36 = 2; }
		case 3: {button28->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik36 = 3; }
		case 4: {button28->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik36 = 4; }
		case 5: {button28->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik36 = 5; }
		case 6: {button28->BackColor = System::Drawing::Color::White; break; objzmienna->licznik36 = 6; }
		}
		//
		switch (objzmienna->swap37) {
		case 1: {button29->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik37 = 1; }
		case 2: {button29->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik37 = 2; }
		case 3: {button29->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik37 = 3; }
		case 4: {button29->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik37 = 4; }
		case 5: {button29->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik37 = 5; }
		case 6: {button29->BackColor = System::Drawing::Color::White; break; objzmienna->licznik37 = 6; }
		}
		//
		switch (objzmienna->swap38) {
		case 1: {button30->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik38 = 1; }
		case 2: {button30->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik38 = 2; }
		case 3: {button30->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik38 = 3; }
		case 4: {button30->BackColor = System::Drawing::Color::Green; break;  objzmienna->licznik38 = 4; }
		case 5: {button30->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik38 = 5; }
		case 6: {button30->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik38 = 6; }
		}
		//
		switch (objzmienna->swap39) {
		case 1: {button31->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik39 = 1; }
		case 2: {button31->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik39 = 2; }
		case 3: {button31->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik39 = 3; }
		case 4: {button31->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik39 = 4; }
		case 5: {button31->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik39 = 5; }
		case 6: {button31->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik39 = 6; }
		}
		//G
		switch (objzmienna->swap41) {
		case 1: {button32->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik41 = 1; }
		case 2: {button32->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik41 = 2; }
		case 3: {button32->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik41 = 3; }
		case 4: {button32->BackColor = System::Drawing::Color::Green; break;  objzmienna->licznik41 = 4; }
		case 5: {button32->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik41 = 5; }
		case 6: {button32->BackColor = System::Drawing::Color::White; break; objzmienna->licznik41 = 6; }
		}
		//
		switch (objzmienna->swap42) {
		case 1: {button33->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik42 = 1; }
		case 2: {button33->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik42 = 2; }
		case 3: {button33->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik42 = 3; }
		case 4: {button33->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik42 = 4; }
		case 5: {button33->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik42 = 5; }
		case 6: {button33->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik42 = 6; }
		}
		//
		switch (objzmienna->swap43) {
		case 1: {button34->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik43 = 1; }
		case 2: {button34->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik43 = 2; }
		case 3: {button34->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik43 = 3; }
		case 4: {button34->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik43 = 4; }
		case 5: {button34->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik43 = 5; }
		case 6: {button34->BackColor = System::Drawing::Color::White; break; objzmienna->licznik43 = 6; }
		}
		//
		switch (objzmienna->swap44) {
		case 1: {button35->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik44 = 1; }
		case 2: {button35->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik44 = 2; }
		case 3: {button35->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik44 = 3; }
		case 4: {button35->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik44 = 4; }
		case 5: {button35->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik44 = 5; }
		case 6: {button35->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik44 = 6; }
		}
		//
		switch (objzmienna->swap46) {
		case 1: {button37->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik46 = 1; }
		case 2: {button37->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik46 = 2; }
		case 3: {button37->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik46 = 3; }
		case 4: {button37->BackColor = System::Drawing::Color::Green; break;  objzmienna->licznik46 = 4; }
		case 5: {button37->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik46 = 5; }
		case 6: {button37->BackColor = System::Drawing::Color::White; break; objzmienna->licznik46 = 6; }
		}
		//
		switch (objzmienna->swap47) {
		case 1: {button38->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik47 = 1; }
		case 2: {button38->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik47 = 2; }
		case 3: {button38->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik47 = 3; }
		case 4: {button38->BackColor = System::Drawing::Color::Green; break;  objzmienna->licznik47 = 4; }
		case 5: {button38->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik47 = 5; }
		case 6: {button38->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik47 = 6; }
		}
		//
		switch (objzmienna->swap48) {
		case 1: {button39->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik48 = 1; }
		case 2: {button39->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik48 = 2; }
		case 3: {button39->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik48 = 3; }
		case 4: {button39->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik48 = 4; }
		case 5: {button39->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik48 = 5; }
		case 6: {button39->BackColor = System::Drawing::Color::White; break; objzmienna->licznik48 = 6; }
		}
		//
		switch (objzmienna->swap49) {
		case 1: {button40->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik49 = 1; }
		case 2: {button40->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik49 = 2; }
		case 3: {button40->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik49 = 3; }
		case 4: {button40->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik49 = 4; }
		case 5: {button40->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik49 = 5; }
		case 6: {button40->BackColor = System::Drawing::Color::White; break; objzmienna->licznik49 = 6; }
		}
		//Y
		switch (objzmienna->swap51) {
		case 1: {button41->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik51 = 1; }
		case 2: {button41->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik51 = 2; }
		case 3: {button41->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik51 = 3; }
		case 4: {button41->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik51 = 4; }
		case 5: {button41->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik51 = 5; }
		case 6: {button41->BackColor = System::Drawing::Color::White; break; objzmienna->licznik51 = 6; }
		}
		//
		switch (objzmienna->swap52) {
		case 1: {button42->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik52 = 1; }
		case 2: {button42->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik52 = 2; }
		case 3: {button42->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik52 = 3; }
		case 4: {button42->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik52 = 4; }
		case 5: {button42->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik52 = 5; }
		case 6: {button42->BackColor = System::Drawing::Color::White; break; objzmienna->licznik52 = 6; }
		}
		//
		switch (objzmienna->swap53) {
		case 1: {button43->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik53 = 1; }
		case 2: {button43->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik53 = 2; }
		case 3: {button43->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik53 = 3; }
		case 4: {button43->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik53 = 4; }
		case 5: {button43->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik53 = 5; }
		case 6: {button43->BackColor = System::Drawing::Color::White; break; objzmienna->licznik53 = 6; }
		}
		//
		switch (objzmienna->swap54) {
		case 1: {button44->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik54 = 1; }
		case 2: {button44->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik54 = 2; }
		case 3: {button44->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik54 = 3; }
		case 4: {button44->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik54 = 4; }
		case 5: {button44->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik54 = 5; }
		case 6: {button44->BackColor = System::Drawing::Color::White; break; objzmienna->licznik54 = 6; }
		}
		//
		switch (objzmienna->swap56) {
		case 1: {button46->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik56 = 1; }
		case 2: {button46->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik56 = 2; }
		case 3: {button46->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik56 = 3; }
		case 4: {button46->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik56 = 4; }
		case 5: {button46->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik56 = 5; }
		case 6: {button46->BackColor = System::Drawing::Color::White; break; objzmienna->licznik56 = 6; }
		}
		//
		switch (objzmienna->swap57) {
		case 1: {button47->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik57 = 1; }
		case 2: {button47->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik57 = 2; }
		case 3: {button47->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik57 = 3; }
		case 4: {button47->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik57 = 4; }
		case 5: {button47->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik57 = 5; }
		case 6: {button47->BackColor = System::Drawing::Color::White; break; objzmienna->licznik57 = 6; }
		}
		//
		switch (objzmienna->swap58) {
		case 1: {button48->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik58 = 1; }
		case 2: {button48->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik58 = 2; }
		case 3: {button48->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik58 = 3; }
		case 4: {button48->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik58 = 4; }
		case 5: {button48->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik58 = 5; }
		case 6: {button48->BackColor = System::Drawing::Color::White; break; objzmienna->licznik58 = 6; }
		}
		//
		switch (objzmienna->swap59) {
		case 1: {button49->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik59 = 1; }
		case 2: {button49->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik59 = 2; }
		case 3: {button49->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik59 = 3; }
		case 4: {button49->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik59 = 4; }
		case 5: {button49->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik59 = 5; }
		case 6: {button49->BackColor = System::Drawing::Color::White; break; objzmienna->licznik59 = 6; }
		}
		//W
		switch (objzmienna->swap61) {
		case 1: {button50->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik61 = 1; }
		case 2: {button50->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik61 = 2; }
		case 3: {button50->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik61 = 3; }
		case 4: {button50->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik61 = 4; }
		case 5: {button50->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik61 = 5; }
		case 6: {button50->BackColor = System::Drawing::Color::White; break; objzmienna->licznik61 = 6; }
		}
		//
		switch (objzmienna->swap62) {
		case 1: {button51->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik62 = 1; }
		case 2: {button51->BackColor = System::Drawing::Color::Blue; break; objzmienna->licznik62 = 2; }
		case 3: {button51->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik62 = 3; }
		case 4: {button51->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik62 = 4; }
		case 5: {button51->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik62 = 5; }
		case 6: {button51->BackColor = System::Drawing::Color::White; break; objzmienna->licznik62 = 6; }
		}
		//
		switch (objzmienna->swap63) {
		case 1: {button52->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik63 = 1; }
		case 2: {button52->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik63 = 2; }
		case 3: {button52->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik63 = 3; }
		case 4: {button52->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik63 = 4; }
		case 5: {button52->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik63 = 5; }
		case 6: {button52->BackColor = System::Drawing::Color::White; break; objzmienna->licznik63 = 6; }
		}
		//
		switch (objzmienna->swap64) {
		case 1: {button53->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik64 = 1; }
		case 2: {button53->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik64 = 2; }
		case 3: {button53->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik64 = 3; }
		case 4: {button53->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik64 = 4; }
		case 5: {button53->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik64 = 5; }
		case 6: {button53->BackColor = System::Drawing::Color::White; break; objzmienna->licznik64 = 6; }
		}
		//
		switch (objzmienna->swap66) {
		case 1: {button55->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik66 = 1; }
		case 2: {button55->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik66 = 2; }
		case 3: {button55->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik66 = 3; }
		case 4: {button55->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik66 = 4; }
		case 5: {button55->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik66 = 5; }
		case 6: {button55->BackColor = System::Drawing::Color::White; break; objzmienna->licznik66 = 6; }
		}
		//
		switch (objzmienna->swap67) {
		case 1: {button56->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik67 = 1; }
		case 2: {button56->BackColor = System::Drawing::Color::Blue; break;   objzmienna->licznik67 = 2; }
		case 3: {button56->BackColor = System::Drawing::Color::Red; break;    objzmienna->licznik67 = 3; }
		case 4: {button56->BackColor = System::Drawing::Color::Green; break;  objzmienna->licznik67 = 4; }
		case 5: {button56->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik67 = 5; }
		case 6: {button56->BackColor = System::Drawing::Color::White; break; objzmienna->licznik67 = 6; }
		}
		//
		switch (objzmienna->swap68) {
		case 1: {button57->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik68 = 1; }
		case 2: {button57->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik68 = 2; }
		case 3: {button57->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik68 = 3; }
		case 4: {button57->BackColor = System::Drawing::Color::Green; break; objzmienna->licznik68 = 4; }
		case 5: {button57->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik68 = 5; }
		case 6: {button57->BackColor = System::Drawing::Color::White; break; objzmienna->licznik68 = 6; }
		}
		//
		switch (objzmienna->swap69) {
		case 1: {button58->BackColor = System::Drawing::Color::Orange; break; objzmienna->licznik69 = 1; }
		case 2: {button58->BackColor = System::Drawing::Color::Blue; break;  objzmienna->licznik69 = 2; }
		case 3: {button58->BackColor = System::Drawing::Color::Red; break;   objzmienna->licznik69 = 3; }
		case 4: {button58->BackColor = System::Drawing::Color::Green; break;  objzmienna->licznik69 = 4; }
		case 5: {button58->BackColor = System::Drawing::Color::Yellow; break; objzmienna->licznik69 = 5; }
		case 6: {button58->BackColor = System::Drawing::Color::White; break;  objzmienna->licznik69 = 6; }
		}
		timer2->Stop();
	}
	private: System::Void Button45_Click(System::Object^ sender, System::EventArgs^ e) {
		U(&scianay->y1, &scianay->y2, &scianay->y3, &scianay->y4, &scianay->y5, &scianay->y6, &scianay->y7, &scianay->y8, &scianay->y9,
			&scianab->b1, &scianab->b2, &scianab->b3, &scianar->r1, &scianar->r2, &scianar->r3, &scianag->g1, &scianag->g2, &scianag->g3,
			&scianao->o1, &scianao->o2, &scianao->o3);
		textBox1->Text += "U ";
		textBox2->Text = ""; textBox3->Text = ""; textBox4->Text = ""; textBox5->Text = ""; textBox6->Text = "";
		timer1->Stop();
		timer2->Start();
		button59->Focus();
	}
	private: System::Void Button27_Click(System::Object^ sender, System::EventArgs^ e) {
		R(&scianar->r1, &scianar->r2, &scianar->r3, &scianar->r4, &scianar->r5, &scianar->r6, &scianar->r7, &scianar->r8, &scianar->r9,
			&scianaw->w3, &scianaw->w6, &scianaw->w9, &scianag->g7, &scianag->g4, &scianag->g1, &scianay->y3, &scianay->y6, &scianay->y9,
			&scianab->b3, &scianab->b6, &scianab->b9);
		textBox1->Text += "R ";
		textBox2->Text = ""; textBox3->Text = ""; textBox4->Text = ""; textBox5->Text = ""; textBox6->Text = "";
		timer1->Stop();
		timer2->Start();
		button59->Focus();
	}
	private: System::Void Button36_Click(System::Object^ sender, System::EventArgs^ e) {
		B(&scianag->g1, &scianag->g2, &scianag->g3, &scianag->g4, &scianag->g5, &scianag->g6, &scianag->g7, &scianag->g8, &scianag->g9,
			&scianaw->w9, &scianaw->w8, &scianaw->w7, &scianao->o7, &scianao->o4, &scianao->o1, &scianay->y1, &scianay->y2, &scianay->y3,
			&scianar->r3, &scianar->r6, &scianar->r9);
		textBox1->Text += "B ";
		textBox2->Text = ""; textBox3->Text = ""; textBox4->Text = ""; textBox5->Text = ""; textBox6->Text = "";
		timer1->Stop();
		timer2->Start();
		button59->Focus();
	}
	private: System::Void Button18_Click(System::Object^ sender, System::EventArgs^ e) {
		F(&scianab->b1, &scianab->b2, &scianab->b3, &scianab->b4, &scianab->b5, &scianab->b6, &scianab->b7, &scianab->b8, &scianab->b9,
			&scianaw->w1, &scianaw->w2, &scianaw->w3, &scianar->r7, &scianar->r4, &scianar->r1, &scianay->y9, &scianay->y8, &scianay->y7,
			&scianao->o3, &scianao->o6, &scianao->o9);
		textBox1->Text += "F ";
		textBox2->Text = ""; textBox3->Text = ""; textBox4->Text = ""; textBox5->Text = ""; textBox6->Text = "";
		timer1->Stop();
		timer2->Start();
		button59->Focus();
	}
	private: System::Void Button9_Click(System::Object^ sender, System::EventArgs^ e) {
		L(&scianao->o1, &scianao->o2, &scianao->o3, &scianao->o4, &scianao->o5, &scianao->o6, &scianao->o7, &scianao->o8, &scianao->o9,
			&scianaw->w7, &scianaw->w4, &scianaw->w1, &scianab->b7, &scianab->b4, &scianab->b1, &scianay->y7, &scianay->y4, &scianay->y1,
			&scianag->g3, &scianag->g6, &scianag->g9);
		textBox1->Text += "L ";
		textBox2->Text = ""; textBox3->Text = ""; textBox4->Text = ""; textBox5->Text = ""; textBox6->Text = "";
		timer1->Stop();
		timer2->Start();
		button59->Focus();
	}
	private: System::Void Button54_Click(System::Object^ sender, System::EventArgs^ e) {
		D(&scianaw->w1, &scianaw->w2, &scianaw->w3, &scianaw->w4, &scianaw->w5, &scianaw->w6, &scianaw->w7, &scianaw->w8, &scianaw->w9,
			&scianag->g9, &scianag->g8, &scianag->g7, &scianar->r9, &scianar->r8, &scianar->r7, &scianab->b9, &scianab->b8, &scianab->b7,
			&scianao->o9, &scianao->o8, &scianao->o7);
		textBox1->Text += "D ";
		textBox2->Text = ""; textBox3->Text = ""; textBox4->Text = ""; textBox5->Text = ""; textBox6->Text = "";
		timer1->Stop();
		timer2->Start();
		button59->Focus();
	}

	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		button59->Focus();
		timer1->Stop();
	}
	

	double miliseconds=0;
	double seconds=0;
	double minutes = 0;
private: System::Void Timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	    miliseconds += 1;
	    if (miliseconds ==64) { miliseconds =0; seconds += 1;  };
	    if (seconds >= 60) { seconds =0; minutes += 1; };
		//
	    if (inspection == 1 &&minutes == 0 && seconds == 0 && miliseconds < 10)
	    {label10->Text = seconds.ToString() + ".0" + miliseconds.ToString();}
		if (inspection == 1 && minutes == 0 && seconds == 0 && miliseconds >= 10)
		{label10->Text = seconds.ToString() + "."+ miliseconds.ToString();}
		if (inspection == 1 && minutes == 0 && seconds < 10 && miliseconds < 10)
		{label10->Text = " " + seconds.ToString() + ".0" + miliseconds.ToString();}
		if (inspection == 1 && minutes == 0 && seconds < 10 && miliseconds >= 10)
		{label10->Text = " " + seconds.ToString() + "."+ miliseconds.ToString();}
		if (inspection == 1 && minutes == 0 && seconds >= 10 && miliseconds < 10)
		{label10->Text = seconds.ToString() + ".0" + miliseconds.ToString();}
		if (inspection == 1 && minutes == 0 && seconds >= 10 && miliseconds >= 10)
		{label10->Text = seconds.ToString() + "." + miliseconds.ToString();}
		//
		if (inspection == 1 && minutes > 0 && seconds == 0 && miliseconds < 10)
		{label10->Text = minutes.ToString() + ":0" + seconds.ToString() + ".0" + miliseconds.ToString();}
		if (inspection == 1 && minutes > 0 && seconds == 0 && miliseconds >= 10)
		{label10->Text = minutes.ToString() + ":0" + seconds.ToString() + "." + miliseconds.ToString();}
		if (inspection == 1 && minutes > 0 && seconds < 10 && miliseconds < 10)
		{label10->Text = minutes.ToString() + ":0" + seconds.ToString() + ".0" + miliseconds.ToString();}
		if (inspection == 1 && minutes > 0 && seconds < 10 && miliseconds >= 10)
		{label10->Text = minutes.ToString() + ":0" + seconds.ToString() + "." + miliseconds.ToString();}
		if (inspection == 1 && minutes > 0 && seconds >= 10 && miliseconds < 10)
		{label10->Text = minutes.ToString() + ":" + seconds.ToString() + ".0" + miliseconds.ToString();}
		if (inspection == 1 && minutes > 0 && seconds >= 10 && miliseconds >= 10)
		{label10->Text = minutes.ToString() + ":" + seconds.ToString() + "." + miliseconds.ToString();}

		if (stoper == 1 && label10->ForeColor == ForeColor.Red && miliseconds >= 10)
		{
			stoper = 2; label10->ForeColor == ForeColor.Green;
		}
}
		 bool stoper = 1; int inspection=0; int tylkoraz = 0;
private: System::Void down(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (stoper == true) {label10->Text = " 0.00";
		if (label10->ForeColor == ForeColor.Black){label10->ForeColor = ForeColor.Red;}
		timer3->Start();
		if (miliseconds >= 10) {
			
			label10->ForeColor = ForeColor.Green;//stoper = 2;
			timer3->Stop();
			seconds = 0; miliseconds = 0; 
		}
		button2->PerformClick();
	}
	if (stoper == false) {
		if (tylkoraz == 0){
		inspection = 0;
		objzmienna->liczbaulozen += 1;
		timer3->Stop();
		label10->ForeColor = ForeColor.Black;
		button59->Text = "START!\n(Spacja)";
		objzmienna->minutesbufor = minutes;
		objzmienna->secondsbufor = seconds;
		objzmienna->milisecondsbufor = miliseconds;
		label11->BackColor = ForeColor.Transparent;
		label24->BackColor = ForeColor.Transparent;
		timer4->Start();
		minutes = 0;
		seconds = 0;
		miliseconds = 0;
		timer5->Start();
		tylkoraz = 1;
	}
	}
} 
private: System::Void up(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (stoper == true && label10->ForeColor == ForeColor.Red) {
		timer3->Stop();
		label10->ForeColor = ForeColor.Black;
		button59->Text = "START!\n(Spacja)";
		minutes = 0;
		seconds = 0;
		miliseconds = 0; 
	}
	if (stoper == true && label10->ForeColor == ForeColor.Green) {
		inspection = 1;
		label10->ForeColor = ForeColor.Green;
		timer3->Start();
		button59->Text = "STOP!\n(Spacja)";
		stoper = 0; 
		button1->PerformClick();
	}else
	{
		stoper = 1;
	}	tylkoraz = 0;
}
private: System::Void Timer4_Tick(System::Object^ sender, System::EventArgs^ e) {
	objzmienna->minutes5 = objzmienna->minutes4;
	objzmienna->seconds5 = objzmienna->seconds4;
	objzmienna->miliseconds5 = objzmienna->miliseconds4;

	objzmienna->minutes4 = objzmienna->minutes3;
	objzmienna->seconds4 = objzmienna->seconds3;
	objzmienna->miliseconds4 = objzmienna->miliseconds3;

	objzmienna->minutes3 = objzmienna->minutes2;
	objzmienna->seconds3 = objzmienna->seconds2;
	objzmienna->miliseconds3 = objzmienna->miliseconds2;

	objzmienna->minutes2 = objzmienna->minutes1;
	objzmienna->seconds2 = objzmienna->seconds1;
	objzmienna->miliseconds2 = objzmienna->miliseconds1;

	objzmienna->minutes1 = objzmienna->minutesbufor;
	objzmienna->seconds1 = objzmienna->secondsbufor;
	objzmienna->miliseconds1 = objzmienna->milisecondsbufor; 

	if (objzmienna->bestminutes == 0 && objzmienna->bestseconds == 0 && objzmienna->bestmiliseconds == 0)
	{
		objzmienna->bestminutes = objzmienna->minutesbufor;
		objzmienna->bestseconds = objzmienna->secondsbufor;
		objzmienna->bestmiliseconds = objzmienna->milisecondsbufor; 
	}
	else { 
		if (objzmienna->bestminutes > objzmienna->minutesbufor) 
		{
			objzmienna->bestminutes = objzmienna->minutesbufor;
			objzmienna->bestseconds = objzmienna->secondsbufor;
			objzmienna->bestmiliseconds = objzmienna->milisecondsbufor; label11->BackColor = ForeColor.Green;
		}
		else {
			if (objzmienna->bestminutes == objzmienna->minutesbufor && objzmienna->bestseconds>objzmienna->secondsbufor)
			{
				objzmienna->bestminutes = objzmienna->minutesbufor;
				objzmienna->bestseconds = objzmienna->secondsbufor;
				objzmienna->bestmiliseconds = objzmienna->milisecondsbufor; label11->BackColor = ForeColor.Green;
			}
			else {
				if (objzmienna->bestminutes == objzmienna->minutesbufor && objzmienna->bestseconds == objzmienna->secondsbufor && objzmienna->bestmiliseconds > objzmienna->milisecondsbufor)
				{
					objzmienna->bestminutes = objzmienna->minutesbufor;
					objzmienna->bestseconds = objzmienna->secondsbufor;
					objzmienna->bestmiliseconds = objzmienna->milisecondsbufor; label11->BackColor = ForeColor.Green;
				}
			}
		}
	};
	if (objzmienna->bestminutes == 0 && objzmienna->bestseconds == 0 && objzmienna->bestmiliseconds < 10)
	{label11->Text = objzmienna->bestseconds.ToString() + ".0" + objzmienna->bestmiliseconds.ToString();}
	if (objzmienna->bestminutes == 0 && objzmienna->bestseconds == 0 && objzmienna->bestmiliseconds >= 10)
	{label11->Text =  objzmienna->bestseconds.ToString() + "." + objzmienna->bestmiliseconds.ToString();}
	if (objzmienna->bestminutes == 0 && objzmienna->bestseconds < 10 && objzmienna->bestmiliseconds < 10)
	{label11->Text =  " " + objzmienna->bestseconds.ToString() + ".0" + objzmienna->bestmiliseconds.ToString();}
	if (objzmienna->bestminutes == 0 && objzmienna->bestseconds < 10 && objzmienna->bestmiliseconds >= 10)
	{label11->Text =  " " + objzmienna->bestseconds.ToString() + "." + objzmienna->bestmiliseconds.ToString();}
	if (objzmienna->bestminutes == 0 && objzmienna->bestseconds >= 10 && objzmienna->bestmiliseconds < 10)
	{label11->Text =  objzmienna->bestseconds.ToString() + ".0" + objzmienna->bestmiliseconds.ToString();}
	if (objzmienna->bestminutes == 0 && objzmienna->bestseconds >= 10 && objzmienna->bestmiliseconds >= 10)
	{label11->Text =  objzmienna->bestseconds.ToString() + "." + objzmienna->bestmiliseconds.ToString();}
	//
	if (objzmienna->bestminutes > 0 && objzmienna->bestseconds == 0 && objzmienna->bestmiliseconds < 10)
	{label11->Text =  objzmienna->bestminutes.ToString() + ":0" + objzmienna->bestseconds.ToString() + ".0" + objzmienna->bestmiliseconds.ToString();}
	if (objzmienna->bestminutes > 0 && objzmienna->bestseconds == 0 && objzmienna->bestmiliseconds >= 10)
	{label11->Text =  objzmienna->bestminutes.ToString() + ":0" + objzmienna->bestseconds.ToString() + "." + objzmienna->bestmiliseconds.ToString();}
	if (objzmienna->bestminutes > 0 && objzmienna->bestseconds < 10 && objzmienna->bestmiliseconds < 10)
	{label11->Text =  objzmienna->bestminutes.ToString() + ":0" + objzmienna->bestseconds.ToString() + ".0" + objzmienna->bestmiliseconds.ToString();}
	if (objzmienna->bestminutes > 0 && objzmienna->bestseconds < 10 && objzmienna->bestmiliseconds >= 10)
	{label11->Text =  objzmienna->bestminutes.ToString() + ":0" + objzmienna->bestseconds.ToString() + "." + objzmienna->bestmiliseconds.ToString();}
	if (objzmienna->bestminutes > 0 && objzmienna->bestseconds >= 10 && objzmienna->bestmiliseconds < 10)
	{label11->Text =  objzmienna->bestminutes.ToString() + ":" + objzmienna->bestseconds.ToString() + ".0" + objzmienna->bestmiliseconds.ToString();}
	if (objzmienna->bestminutes > 0 && objzmienna->bestseconds >= 10 && objzmienna->bestmiliseconds >= 10)
	{label11->Text =  objzmienna->bestminutes.ToString() + ":" + objzmienna->bestseconds.ToString() + "." + objzmienna->bestmiliseconds.ToString();}
	
	if (objzmienna->minutes1 == 0 && objzmienna->seconds1 == 0 && objzmienna->miliseconds1 < 10)
	{label13->Text =  objzmienna->seconds1.ToString() + ".0" + objzmienna->miliseconds1.ToString();}
	if (objzmienna->minutes1 == 0 && objzmienna->seconds1 == 0 && objzmienna->miliseconds1 >= 10)
	{label13->Text =  objzmienna->seconds1.ToString() + "." + objzmienna->miliseconds1.ToString();}
	if (objzmienna->minutes1 == 0 && objzmienna->seconds1 < 10 && objzmienna->miliseconds1 < 10)
	{label13->Text =  " " + objzmienna->seconds1.ToString() + ".0" + objzmienna->miliseconds1.ToString();}
	if (objzmienna->minutes1 == 0 && objzmienna->seconds1 < 10 && objzmienna->miliseconds1 >= 10)
	{label13->Text =  " " + objzmienna->seconds1.ToString() + "." + objzmienna->miliseconds1.ToString();}
	if (objzmienna->minutes1 == 0 && objzmienna->seconds1 >= 10 && objzmienna->miliseconds1 < 10)
	{label13->Text =  objzmienna->seconds1.ToString() + ".0" + objzmienna->miliseconds1.ToString();}
	if (objzmienna->minutes1 == 0 && objzmienna->seconds1 >= 10 && objzmienna->miliseconds1 >= 10)
	{label13->Text =  objzmienna->seconds1.ToString() + "." + objzmienna->miliseconds1.ToString();}
	//
	if (objzmienna->minutes1 > 0 && objzmienna->seconds1 == 0 && objzmienna->miliseconds1 < 10)
	{label13->Text =  objzmienna->minutes1.ToString() + ":0" + objzmienna->seconds1.ToString() + ".0" + objzmienna->miliseconds1.ToString();}
	if (objzmienna->minutes1 > 0 && objzmienna->seconds1 == 0 && objzmienna->miliseconds1 >= 10)
	{label13->Text = objzmienna->minutes1.ToString() + ":0" + objzmienna->seconds1.ToString() + "." + objzmienna->miliseconds1.ToString();}
	if (objzmienna->minutes1 > 0 && objzmienna->seconds1 < 10 && objzmienna->miliseconds1 < 10)
	{label13->Text =  objzmienna->minutes1.ToString() + ":0" + objzmienna->seconds1.ToString() + ".0" + objzmienna->miliseconds1.ToString();}
	if (objzmienna->minutes1 > 0 && objzmienna->seconds1 < 10 && objzmienna->miliseconds1 >= 10)
	{label13->Text =  objzmienna->minutes1.ToString() + ":0" + objzmienna->seconds1.ToString() + "." + objzmienna->miliseconds1.ToString();}
	if (objzmienna->minutes1 > 0 && objzmienna->seconds1 >= 10 && objzmienna->miliseconds1 < 10)
	{label13->Text =  objzmienna->minutes1.ToString() + ":" + objzmienna->seconds1.ToString() + ".0" + objzmienna->miliseconds1.ToString();}
	if (objzmienna->minutes1 > 0 && objzmienna->seconds1 >= 10 && objzmienna->miliseconds1 >= 10)
	{label13->Text =  objzmienna->minutes1.ToString() + ":" + objzmienna->seconds1.ToString() + "." + objzmienna->miliseconds1.ToString();}

	if (objzmienna->minutes2 == 0 && objzmienna->seconds2 == 0 && objzmienna->miliseconds2 == 0) {}else{
	if (objzmienna->minutes2 == 0 && objzmienna->seconds2 == 0 && objzmienna->miliseconds2 < 10)
	{label14->Text = objzmienna->seconds2.ToString() + ".0" + objzmienna->miliseconds2.ToString();}
	if (objzmienna->minutes2 == 0 && objzmienna->seconds2 == 0 && objzmienna->miliseconds2 >= 10)
	{label14->Text =  objzmienna->seconds2.ToString() + "." + objzmienna->miliseconds2.ToString();}
	if (objzmienna->minutes2 == 0 && objzmienna->seconds2 < 10 && objzmienna->miliseconds2 < 10)
	{label14->Text =  " " + objzmienna->seconds2.ToString() + ".0" + objzmienna->miliseconds2.ToString();}
	if (objzmienna->minutes2 == 0 && objzmienna->seconds2 < 10 && objzmienna->miliseconds2 >= 10)
	{label14->Text =  " " + objzmienna->seconds2.ToString() + "." + objzmienna->miliseconds2.ToString();}
	if (objzmienna->minutes2 == 0 && objzmienna->seconds2 >= 10 && objzmienna->miliseconds2 < 10)
	{label14->Text =  objzmienna->seconds2.ToString() + ".0" + objzmienna->miliseconds2.ToString();}
	if (objzmienna->minutes2 == 0 && objzmienna->seconds2 >= 10 && objzmienna->miliseconds2 >= 10)
	{label14->Text =  objzmienna->seconds2.ToString() + "." + objzmienna->miliseconds2.ToString();}
	//
	if (objzmienna->minutes2 > 0 && objzmienna->seconds2 == 0 && objzmienna->miliseconds2 < 10)
	{label14->Text =  objzmienna->minutes2.ToString() + ":0" + objzmienna->seconds2.ToString() + ".0" + objzmienna->miliseconds2.ToString();}
	if (objzmienna->minutes2 > 0 && objzmienna->seconds2 == 0 && objzmienna->miliseconds2 >= 10)
	{label14->Text =  objzmienna->minutes2.ToString() + ":0" + objzmienna->seconds2.ToString() + "." + objzmienna->miliseconds2.ToString();}
	if (objzmienna->minutes2 > 0 && objzmienna->seconds2 < 10 && objzmienna->miliseconds2 < 10)
	{label14->Text =  objzmienna->minutes2.ToString() + ":0" + objzmienna->seconds2.ToString() + ".0" + objzmienna->miliseconds2.ToString();}
	if (objzmienna->minutes2 > 0 && objzmienna->seconds2 < 10 && objzmienna->miliseconds2 >= 10)
	{label14->Text =  objzmienna->minutes2.ToString() + ":0" + objzmienna->seconds2.ToString() + "." + objzmienna->miliseconds2.ToString();}
	if (objzmienna->minutes2 > 0 && objzmienna->seconds2 >= 10 && objzmienna->miliseconds2 < 10)
	{label14->Text =  objzmienna->minutes2.ToString() + ":" + objzmienna->seconds2.ToString() + ".0" + objzmienna->miliseconds2.ToString();}
	if (objzmienna->minutes2 > 0 && objzmienna->seconds2 >= 10 && objzmienna->miliseconds2 >= 10)
	{label14->Text =  objzmienna->minutes2.ToString() + ":" + objzmienna->seconds2.ToString() + "." + objzmienna->miliseconds2.ToString();}}

	if (objzmienna->minutes3 == 0 && objzmienna->seconds3 == 0 && objzmienna->miliseconds3 == 0) {}else{
	if (objzmienna->minutes3 == 0 && objzmienna->seconds3 == 0 && objzmienna->miliseconds3 < 10)
	{label15->Text =  objzmienna->seconds3.ToString() + ".0" + objzmienna->miliseconds3.ToString();}
	if (objzmienna->minutes3 == 0 && objzmienna->seconds3 == 0 && objzmienna->miliseconds3 >= 10)
	{label15->Text =  objzmienna->seconds3.ToString() + "." + objzmienna->miliseconds3.ToString();}
	if (objzmienna->minutes3 == 0 && objzmienna->seconds3 < 10 && objzmienna->miliseconds3 < 10)
	{label15->Text =  " " + objzmienna->seconds3.ToString() + ".0" + objzmienna->miliseconds3.ToString();}
	if (objzmienna->minutes3 == 0 && objzmienna->seconds3 < 10 && objzmienna->miliseconds3 >= 10)
	{label15->Text =  " " + objzmienna->seconds3.ToString() + "." + objzmienna->miliseconds3.ToString();}
	if (objzmienna->minutes3 == 0 && objzmienna->seconds3 >= 10 && objzmienna->miliseconds3 < 10)
	{label15->Text =  objzmienna->seconds3.ToString() + ".0" + objzmienna->miliseconds3.ToString();}
	if (objzmienna->minutes3 == 0 && objzmienna->seconds3 >= 10 && objzmienna->miliseconds3 >= 10)
	{label15->Text =  objzmienna->seconds3.ToString() + "." + objzmienna->miliseconds3.ToString();}
	//
	if (objzmienna->minutes3 > 0 && objzmienna->seconds3 == 0 && objzmienna->miliseconds3 < 10)
	{label15->Text =  objzmienna->minutes3.ToString() + ":0" + objzmienna->seconds3.ToString() + ".0" + objzmienna->miliseconds3.ToString();}
	if (objzmienna->minutes3 > 0 && objzmienna->seconds3 == 0 && objzmienna->miliseconds3 >= 10)
	{label15->Text =  objzmienna->minutes3.ToString() + ":0" + objzmienna->seconds3.ToString() + "." + objzmienna->miliseconds3.ToString();}
	if (objzmienna->minutes3 > 0 && objzmienna->seconds3 < 10 && objzmienna->miliseconds3 < 10)
	{label15->Text =  objzmienna->minutes3.ToString() + ":0" + objzmienna->seconds3.ToString() + ".0" + objzmienna->miliseconds3.ToString();}
	if (objzmienna->minutes3 > 0 && objzmienna->seconds3 < 10 && objzmienna->miliseconds3 >= 10)
	{label15->Text =  objzmienna->minutes3.ToString() + ":0" + objzmienna->seconds3.ToString() + "." + objzmienna->miliseconds3.ToString();}
	if (objzmienna->minutes3 > 0 && objzmienna->seconds3 >= 10 && objzmienna->miliseconds3 < 10)
	{label15->Text =  objzmienna->minutes3.ToString() + ":" + objzmienna->seconds3.ToString() + ".0" + objzmienna->miliseconds3.ToString();}
	if (objzmienna->minutes3 > 0 && objzmienna->seconds3 >= 10 && objzmienna->miliseconds3 >= 10)
	{label15->Text =  objzmienna->minutes3.ToString() + ":" + objzmienna->seconds3.ToString() + "." + objzmienna->miliseconds3.ToString();}}

	if (objzmienna->minutes4 == 0 && objzmienna->seconds4 == 0 && objzmienna->miliseconds4 == 0) {}else{
	if (objzmienna->minutes4 == 0 && objzmienna->seconds4 == 0 && objzmienna->miliseconds4 < 10)
	{label16->Text =  objzmienna->seconds4.ToString() + ".0" + objzmienna->miliseconds4.ToString();}
	if (objzmienna->minutes4 == 0 && objzmienna->seconds4 == 0 && objzmienna->miliseconds4 >= 10)
	{label16->Text =  objzmienna->seconds4.ToString() + "." + objzmienna->miliseconds4.ToString();}
	if (objzmienna->minutes4 == 0 && objzmienna->seconds4 < 10 && objzmienna->miliseconds4 < 10)
	{label16->Text =  " " + objzmienna->seconds4.ToString() + ".0" + objzmienna->miliseconds4.ToString();}
	if (objzmienna->minutes4 == 0 && objzmienna->seconds4 < 10 && objzmienna->miliseconds4 >= 10)
	{label16->Text =  " " + objzmienna->seconds4.ToString() + "." + objzmienna->miliseconds4.ToString();}
	if (objzmienna->minutes4 == 0 && objzmienna->seconds4 >= 10 && objzmienna->miliseconds4 < 10)
	{label16->Text =  objzmienna->seconds4.ToString() + ".0" + objzmienna->miliseconds4.ToString();}
	if (objzmienna->minutes4 == 0 && objzmienna->seconds4 >= 10 && objzmienna->miliseconds4 >= 10)
	{label16->Text =  objzmienna->seconds4.ToString() + "." + objzmienna->miliseconds4.ToString();}
	//
	if (objzmienna->minutes4 > 0 && objzmienna->seconds4 == 0 && objzmienna->miliseconds4 < 10)
	{label16->Text =  objzmienna->minutes4.ToString() + ":0" + objzmienna->seconds4.ToString() + ".0" + objzmienna->miliseconds4.ToString();}
	if (objzmienna->minutes4 > 0 && objzmienna->seconds4 == 0 && objzmienna->miliseconds4 >= 10)
	{label16->Text =  objzmienna->minutes4.ToString() + ":0" + objzmienna->seconds4.ToString() + "." + objzmienna->miliseconds4.ToString();}
	if (objzmienna->minutes4 > 0 && objzmienna->seconds4 < 10 && objzmienna->miliseconds4 < 10)
	{label16->Text =  objzmienna->minutes4.ToString() + ":0" + objzmienna->seconds4.ToString() + ".0" + objzmienna->miliseconds4.ToString();}
	if (objzmienna->minutes4 > 0 && objzmienna->seconds4 < 10 && objzmienna->miliseconds4 >= 10)
	{label16->Text =  objzmienna->minutes4.ToString() + ":0" + objzmienna->seconds4.ToString() + "." + objzmienna->miliseconds4.ToString();}
	if (objzmienna->minutes4 > 0 && objzmienna->seconds4 >= 10 && objzmienna->miliseconds4 < 10)
	{label16->Text =  objzmienna->minutes4.ToString() + ":" + objzmienna->seconds4.ToString() + ".0" + objzmienna->miliseconds4.ToString();}
	if (objzmienna->minutes4 > 0 && objzmienna->seconds4 >= 10 && objzmienna->miliseconds4 >= 10)
	{label16->Text = objzmienna->minutes4.ToString() + ":" + objzmienna->seconds4.ToString() + "." + objzmienna->miliseconds4.ToString();}}

	if (objzmienna->minutes5 == 0 && objzmienna->seconds5 == 0 && objzmienna->miliseconds5 == 0) {}else{
	if (objzmienna->minutes5 == 0 && objzmienna->seconds5 == 0 && objzmienna->miliseconds5 < 10)
	{label17->Text =  objzmienna->seconds5.ToString() + ".0" + objzmienna->miliseconds5.ToString();}
	if (objzmienna->minutes5 == 0 && objzmienna->seconds5 == 0 && objzmienna->miliseconds5 >= 10)
	{label17->Text =  objzmienna->seconds5.ToString() + "." + objzmienna->miliseconds5.ToString();}
	if (objzmienna->minutes5 == 0 && objzmienna->seconds5 < 10 && objzmienna->miliseconds5 < 10)
	{label17->Text =  " " + objzmienna->seconds5.ToString() + ".0" + objzmienna->miliseconds5.ToString();}
	if (objzmienna->minutes5 == 0 && objzmienna->seconds5 < 10 && objzmienna->miliseconds5 >= 10)
	{label17->Text =  " " + objzmienna->seconds5.ToString() + "." + objzmienna->miliseconds5.ToString();}
	if (objzmienna->minutes5 == 0 && objzmienna->seconds5 >= 10 && objzmienna->miliseconds5 < 10)
	{label17->Text =  objzmienna->seconds5.ToString() + ".0" + objzmienna->miliseconds5.ToString();}
	if (objzmienna->minutes5 == 0 && objzmienna->seconds5 >= 10 && objzmienna->miliseconds5 >= 10)
	{label17->Text =  objzmienna->seconds5.ToString() + "." + objzmienna->miliseconds5.ToString();}
	//
	if (objzmienna->minutes5 > 0 && objzmienna->seconds5 == 0 && objzmienna->miliseconds5 < 10)
	{label17->Text =  objzmienna->minutes5.ToString() + ":0" + objzmienna->seconds5.ToString() + ".0" + objzmienna->miliseconds5.ToString();}
	if (objzmienna->minutes5 > 0 && objzmienna->seconds5 == 0 && objzmienna->miliseconds5 >= 10)
	{label17->Text =  objzmienna->minutes5.ToString() + ":0" + objzmienna->seconds5.ToString() + "." + objzmienna->miliseconds5.ToString();}
	if (objzmienna->minutes5 > 0 && objzmienna->seconds5 < 10 && objzmienna->miliseconds5 < 10)
	{label17->Text = objzmienna->minutes5.ToString() + ":0" + objzmienna->seconds5.ToString() + ".0" + objzmienna->miliseconds5.ToString();}
	if (objzmienna->minutes5 > 0 && objzmienna->seconds5 < 10 && objzmienna->miliseconds5 >= 10)
	{label17->Text =  objzmienna->minutes5.ToString() + ":0" + objzmienna->seconds5.ToString() + "." + objzmienna->miliseconds5.ToString();}
	if (objzmienna->minutes5 > 0 && objzmienna->seconds5 >= 10 && objzmienna->miliseconds5 < 10)
	{label17->Text =  objzmienna->minutes5.ToString() + ":" + objzmienna->seconds5.ToString() + ".0" + objzmienna->miliseconds5.ToString();}
	if (objzmienna->minutes5 > 0 && objzmienna->seconds5 >= 10 && objzmienna->miliseconds5 >= 10)
	{label17->Text =  objzmienna->minutes5.ToString() + ":" + objzmienna->seconds5.ToString() + "." + objzmienna->miliseconds5.ToString();}}

	if (objzmienna->minutes5 == 0 && objzmienna->seconds5 == 0 && objzmienna->miliseconds5 == 0){}else
	{
		objzmienna->avgbufor = ((objzmienna->minutes1 * 3842 + objzmienna->seconds1 * 64 + objzmienna->miliseconds1)+
			                   (objzmienna->minutes2 * 3840 + objzmienna->seconds2 * 64 + objzmienna->miliseconds2)+
			                   (objzmienna->minutes3 * 3840 + objzmienna->seconds3 * 64 + objzmienna->miliseconds3)+
			                   (objzmienna->minutes4 * 3840 + objzmienna->seconds4 * 64 + objzmienna->miliseconds4)+
			                   (objzmienna->minutes5 * 3840 + objzmienna->seconds5 * 64 + objzmienna->miliseconds5))/5;
		//if(objzmienna->liczbaulozen>)
		objzmienna->avgminutes = objzmienna->avgbufor/3840;
		objzmienna->avgseconds = (objzmienna->avgbufor - objzmienna->avgminutes * 3840) / 64;
		objzmienna->avgmiliseconds = objzmienna->avgbufor - objzmienna->avgminutes * 3840 - objzmienna->avgseconds * 64;
		
		if (objzmienna->avgminutes == 0 && objzmienna->avgseconds == 0 && objzmienna->avgmiliseconds == 0) {}else{
	if (objzmienna->avgminutes == 0 && objzmienna->avgseconds == 0 && objzmienna->avgmiliseconds < 10)
	{label18->Text =   objzmienna->avgseconds.ToString() + ".0" + objzmienna->avgmiliseconds.ToString();}
	if (objzmienna->avgminutes == 0 && objzmienna->avgseconds == 0 && objzmienna->avgmiliseconds >= 10)
	{label18->Text =  objzmienna->avgseconds.ToString() + "." + objzmienna->avgmiliseconds.ToString();}
	if (objzmienna->avgminutes == 0 && objzmienna->avgseconds < 10 && objzmienna->avgmiliseconds < 10)
	{label18->Text =  " " + objzmienna->avgseconds.ToString() + ".0" + objzmienna->avgmiliseconds.ToString();}
	if (objzmienna->avgminutes == 0 && objzmienna->avgseconds < 10 && objzmienna->avgmiliseconds >= 10)
	{label18->Text =  " " + objzmienna->avgseconds.ToString() + "." + objzmienna->avgmiliseconds.ToString();}
	if (objzmienna->avgminutes == 0 && objzmienna->avgseconds >= 10 && objzmienna->avgmiliseconds < 10)
	{label18->Text =  objzmienna->avgseconds.ToString() + ".0" + objzmienna->avgmiliseconds.ToString();}
	if (objzmienna->avgminutes == 0 && objzmienna->avgseconds >= 10 && objzmienna->avgmiliseconds >= 10)
	{label18->Text =  objzmienna->avgseconds.ToString() + "." + objzmienna->avgmiliseconds.ToString();}
	//
	if (objzmienna->avgminutes > 0 && objzmienna->avgseconds == 0 && objzmienna->avgmiliseconds < 10)
	{label18->Text =  objzmienna->avgminutes.ToString() + ":0" + objzmienna->avgseconds.ToString() + ".0" + objzmienna->avgmiliseconds.ToString();}
	if (objzmienna->avgminutes > 0 && objzmienna->avgseconds == 0 && objzmienna->avgmiliseconds >= 10)
	{label18->Text =  objzmienna->avgminutes.ToString() + ":0" + objzmienna->avgseconds.ToString() + "." + objzmienna->avgmiliseconds.ToString();}
	if (objzmienna->avgminutes > 0 && objzmienna->avgseconds < 10 && objzmienna->avgmiliseconds < 10)
	{label18->Text =  objzmienna->avgminutes.ToString() + ":0" + objzmienna->avgseconds.ToString() + ".0" + objzmienna->avgmiliseconds.ToString();}
	if (objzmienna->avgminutes > 0 && objzmienna->avgseconds < 10 && objzmienna->avgmiliseconds >= 10)
	{label18->Text =  objzmienna->avgminutes.ToString() + ":0" + objzmienna->avgseconds.ToString() + "." + objzmienna->avgmiliseconds.ToString();}
	if (objzmienna->avgminutes > 0 && objzmienna->avgseconds >= 10 && objzmienna->avgmiliseconds < 10)
	{label18->Text =  objzmienna->avgminutes.ToString() + ":" + objzmienna->avgseconds.ToString() + ".0" + objzmienna->avgmiliseconds.ToString();}
	if (objzmienna->avgminutes > 0 && objzmienna->avgseconds >= 10 && objzmienna->avgmiliseconds >= 10)
	{label18->Text =  objzmienna->avgminutes.ToString() + ":" + objzmienna->avgseconds.ToString() + "." + objzmienna->avgmiliseconds.ToString();}}
	}
	if (objzmienna->liczbaulozen == 0) {}
	else { label25->Text =  objzmienna->liczbaulozen.ToString(); }

	if (objzmienna->bestavgminutes == 0 && objzmienna->bestavgseconds == 0 && objzmienna->bestavgmiliseconds == 0)
	{
		objzmienna->bestavgminutes = objzmienna->avgminutes;
		objzmienna->bestavgseconds = objzmienna->avgseconds;
		objzmienna->bestavgmiliseconds = objzmienna->avgmiliseconds;
	}
	else {
		if (objzmienna->bestavgminutes > objzmienna->avgminutes)
		{
			objzmienna->bestavgminutes = objzmienna->avgminutes;
			objzmienna->bestavgseconds = objzmienna->avgseconds;
			objzmienna->bestavgmiliseconds = objzmienna->avgmiliseconds; label24->BackColor = ForeColor.Green;
		}
		else {
			if (objzmienna->bestavgminutes == objzmienna->avgminutes && objzmienna->bestavgseconds > objzmienna->avgseconds)
			{
				objzmienna->bestavgminutes = objzmienna->avgminutes;
				objzmienna->bestavgseconds = objzmienna->avgseconds;
				objzmienna->bestavgmiliseconds = objzmienna->avgmiliseconds; label24->BackColor = ForeColor.Green;
			}
			else {
				if (objzmienna->bestavgminutes == objzmienna->avgminutes && objzmienna->bestavgseconds == objzmienna->avgseconds && objzmienna->bestavgmiliseconds > objzmienna->avgmiliseconds)
				{
					objzmienna->bestavgminutes = objzmienna->avgminutes;
					objzmienna->bestavgseconds = objzmienna->avgseconds;
					objzmienna->bestavgmiliseconds = objzmienna->avgmiliseconds; label24->BackColor = ForeColor.Green;
				}
			}
		}
	};
	if (objzmienna->bestavgminutes == 0 && objzmienna->bestavgseconds == 0 && objzmienna->bestavgmiliseconds == 0) {}else{
	if (objzmienna->bestavgminutes == 0 && objzmienna->bestavgseconds == 0 && objzmienna->bestavgmiliseconds < 10)
	{label24->Text =  objzmienna->bestavgseconds.ToString() + ".0" + objzmienna->bestavgmiliseconds.ToString();}
	if (objzmienna->bestavgminutes == 0 && objzmienna->bestavgseconds == 0 && objzmienna->bestavgmiliseconds >= 10)
	{label24->Text =  objzmienna->bestavgseconds.ToString() + "." + objzmienna->bestavgmiliseconds.ToString();}
	if (objzmienna->bestavgminutes == 0 && objzmienna->bestavgseconds < 10 && objzmienna->bestavgmiliseconds < 10)
	{label24->Text =  " " + objzmienna->bestavgseconds.ToString() + ".0" + objzmienna->bestavgmiliseconds.ToString();}
	if (objzmienna->bestavgminutes == 0 && objzmienna->bestavgseconds < 10 && objzmienna->bestavgmiliseconds >= 10)
	{label24->Text =  " " + objzmienna->bestavgseconds.ToString() + "." + objzmienna->bestavgmiliseconds.ToString();}
	if (objzmienna->bestavgminutes == 0 && objzmienna->bestavgseconds >= 10 && objzmienna->bestavgmiliseconds < 10)
	{label24->Text =  objzmienna->bestavgseconds.ToString() + ".0" + objzmienna->bestavgmiliseconds.ToString();}
	if (objzmienna->bestavgminutes == 0 && objzmienna->bestavgseconds >= 10 && objzmienna->bestavgmiliseconds >= 10)
	{label24->Text =  objzmienna->bestavgseconds.ToString() + "." + objzmienna->bestavgmiliseconds.ToString();}
	//
	if (objzmienna->bestavgminutes > 0 && objzmienna->bestavgseconds == 0 && objzmienna->bestavgmiliseconds < 10)
	{label24->Text =  objzmienna->bestavgminutes.ToString() + ":0" + objzmienna->bestavgseconds.ToString() + ".0" + objzmienna->bestavgmiliseconds.ToString();}
	if (objzmienna->bestavgminutes > 0 && objzmienna->bestavgseconds == 0 && objzmienna->bestavgmiliseconds >= 10)
	{label24->Text =  objzmienna->bestavgminutes.ToString() + ":0" + objzmienna->bestavgseconds.ToString() + "." + objzmienna->bestavgmiliseconds.ToString();}
	if (objzmienna->bestavgminutes > 0 && objzmienna->bestavgseconds < 10 && objzmienna->bestavgmiliseconds < 10)
	{label24->Text =  objzmienna->bestavgminutes.ToString() + ":0" + objzmienna->bestavgseconds.ToString() + ".0" + objzmienna->bestavgmiliseconds.ToString();}
	if (objzmienna->bestavgminutes > 0 && objzmienna->bestavgseconds < 10 && objzmienna->bestavgmiliseconds >= 10)
	{label24->Text =  objzmienna->bestavgminutes.ToString() + ":0" + objzmienna->bestavgseconds.ToString() + "." + objzmienna->bestavgmiliseconds.ToString();}
	if (objzmienna->bestavgminutes > 0 && objzmienna->bestavgseconds >= 10 && objzmienna->bestavgmiliseconds < 10)
	{label24->Text =  objzmienna->bestavgminutes.ToString() + ":" + objzmienna->bestavgseconds.ToString() + ".0" + objzmienna->bestavgmiliseconds.ToString();}
	if (objzmienna->bestavgminutes > 0 && objzmienna->bestavgseconds >= 10 && objzmienna->bestavgmiliseconds >= 10)
	{label24->Text =  objzmienna->bestavgminutes.ToString() + ":" + objzmienna->bestavgseconds.ToString() + "." + objzmienna->bestavgmiliseconds.ToString();}}

	timer4->Stop();
}

int atrybut = 1; int avgatrybut = 1;
private: System::Void Timer5_Tick(System::Object^ sender, System::EventArgs^ e) {

	int milisecondschart = objzmienna->milisecondsbufor * 100 / 64;
	if (milisecondschart < 10)
	{
		chart1->Series["Time"]->Points->AddXY(atrybut, (objzmienna->minutesbufor * 60 + objzmienna->secondsbufor) + ".0" + milisecondschart);
	}
	if (milisecondschart > 10)
	{
		chart1->Series["Time"]->Points->AddXY(atrybut, (objzmienna->minutesbufor * 60 + objzmienna->secondsbufor) + "." + milisecondschart);
	}
	int milisecondsavgchart = objzmienna->avgmiliseconds * 100 / 64;
	if (objzmienna->liczbaulozen >= 5) {
		if (milisecondsavgchart < 10)
		{
			chart1->Series["Avg"]->Points->AddXY(avgatrybut, (objzmienna->avgminutes * 60 + objzmienna->avgseconds) + ".0" + milisecondsavgchart);
		}
		if (milisecondsavgchart > 10)
		{
			chart1->Series["Avg"]->Points->AddXY(avgatrybut, (objzmienna->avgminutes * 60 + objzmienna->avgseconds) + "." + milisecondsavgchart);
		}
	}

	atrybut += 1; avgatrybut += 1;
	timer5->Stop();
} bool mode = false;
private: System::Void Button61_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mode==false) {
		FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		WindowState = FormWindowState::Maximized;
		button59->Focus();
		label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Bold));
		label10->Location = System::Drawing::Point(650, 360);
		button61->Location = System::Drawing::Point(1400, 670);
		button3->Location = System::Drawing::Point(1400, 720);
		button4->Location = System::Drawing::Point(1400, 770);
		button61->Text = "Speedcube Mode turn off";
		mode = !mode;
	}
	else {
		FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
		WindowState = FormWindowState::Normal;
		
			button59->Focus();
			label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold));
			label10->Location = System::Drawing::Point(273, 298);
			button61->Location = System::Drawing::Point(375, 456);
			button3->Location = System::Drawing::Point(375, 502);
			button4->Location = System::Drawing::Point(375, 548);
			button61->Text = "Speedcube Mode";
			mode = 0;
		}
	
}
};
}






