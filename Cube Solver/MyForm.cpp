#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "Klasy.hpp"
//#include "MyForm1.cpp"
//#include "funkcje.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <limits>
#include <random>

//using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;





[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CubeSlover::MyForm form;
	Application::Run(% form);
}