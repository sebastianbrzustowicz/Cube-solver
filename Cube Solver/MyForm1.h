#pragma once

namespace CubeSlover {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;

	protected:



	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(273, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Okey!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::Button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(614, 272);
			this->label1->TabIndex = 1;
			this->label1->Text = L"                                   Instructions for using the program: \n"
				"1. We keep the cube in blue before usand yellow at the top through the entire arrangement.\n"
				"    You can easily do this by looking at the colors of the center blocks.\n"
				"2. Moves notation :\n"
				"    F - front wall\n"
				"    U - upper wall\n"
				"    D - down wall\n"
				"    L - left wall\n"
				"    R - right wall\n"
				"    B - bottom wall\n"
				"    We execute moves clockwise,\n"
				"    but when there is a symbol('), we do them counter-clockwise, \n"
				"    when it occurs before the moves(2) movement is performed twice.\n"
				"3. When entering your own scramble, mark the color of each block individually\n"
				"    or if we want to twist the entire wall, we can click on the centers.\n"
				"    If you enter the colors incorrectly, i.e.non - existing variations of the cube, an error will pop up.";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(668, 363);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(686, 410);
			this->MinimumSize = System::Drawing::Size(686, 410);
			this->Name = L"MyForm1";
			this->Text = L"Instrukcja";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide();
	}
	};
}
