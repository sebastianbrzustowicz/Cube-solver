#include "funkcje.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <dos.h>
#include <limits>
#include <random>

using namespace std;
/*void choose(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9, int opcja)
{
	switch (opcja)
	{
	case '1':
	{   system("cls");
	customorange(o1, o2, o3, o4, o5, o6, o7, o8, o9);
	customblue(b1, b2, b3, b4, b5, b6, b7, b8, b9);
	customred(r1, r2, r3, r4, r5, r6, r7, r8, r9);
	customgreen(g1, g2, g3, g4, g5, g6, g7, g8, g9);
	customyellow(y1, y2, y3, y4, y5, y6, y7, y8, y9);
	customwhite(w1, w2, w3, w4, w5, w6, w7, w8, w9);
	break;
	};
	case '2':
	{   system("cls");
	//scramble(b1, b2, b3, b4, b5, b6, b7, b8, b9,
	//	r1, r2, r3, r4, r5, r6, r7, r8, r9,
	//	g1, g2, g3, g4, g5, g6, g7, g8, g9,
	//	o1, o2, o3, o4, o5, o6, o7, o8, o9,
	//	y1, y2, y3, y4, y5, y6, y7, y8, y9,
	//	w1, w2, w3, w4, w5, w6, w7, w8, w9);
	break;
	}
	case '3':  system("cls");
		break;
	case '4':
		instrukcja(); _getch(); system("cls");
		break;
	case '5':
		exit(0);
		break;
	}
}


void instrukcja()
{
	cout << "                             Instrukcje do korzystania z programu:" << endl << endl <<
		"1. Kostkê trzymamy kolorem niebieskim przed sob¹ i ¿óltym u góry przez ca³e u³o¿enie." << endl <<
		"   Mo¿na to ³atwo zrobic patrz¹c na kolory œrodkowych klocków (centrów)." << endl <<
		"2. Notacja ruchów:" << endl <<
		"F - ruch œcian¹ frontow¹  (front)" << endl <<
		"U - ruch œcian¹ górn¹     (up)" << endl <<
		"D - ruch œcian¹ doln¹     (down)" << endl <<
		"L - ruch œcian¹ lew¹      (left)" << endl <<
		"R - ruch œcian¹ praw¹     (right)" << endl <<
		"B - ruch œcian¹ tyln¹     (bottom)" << endl <<
		"   Ruchy wykonujemy zgodnie z kierunkiem wskazówek zegara," << endl <<
		"   natomiast gdy wystêpuje prim \"'\", wykonujemy je przeciwnie do ruchu wskazówek zegara," << endl <<
		"   gdy wystêpuje przed ruchem dwójka \"2\" ruch wykonujemy dwa razy." << endl <<
		"3. Podczas wprowadzania w³asnego scramble'a wpisujemy oznaczenie ka¿dego klocka pojedyñczo." << endl <<
		"   Gdy patrzymy na kolcek, który mamy wpisaæ trzeba przeanalizowaæ gdzie jest jego prawid³owe miejsce" << endl <<
		"   i wtedy wpisujemy koordynaty tego prawid³owego miejsca." << endl <<
		"   Jeden koordynat sk³ada siê z dwóch cyfr pierwsza oznacza kolor:" << endl <<
		"   1 - pomarañczowy" << endl <<
		"   2 - niebieski" << endl <<
		"   3 - czerwony" << endl <<
		"   4 - zielony" << endl <<
		"   5 - ¿ó³ty" << endl <<
		"   6 - bia³y" << endl <<
		"   Druga cyfra oznacza umiejscowienie ca³ego klocka na prawid³owej pozycji (np. górny-lewy róg to 1 itd.)." << endl <<
		"   Siatka wszystkich prawid³owych koordynatów na u³o¿onej kostce wygl¹da tak:" << endl
		<< "*****************************************************" << endl
		<< "           " << "51" << " " << "52" << " " << "53" << endl << "           " << "54" << " " << "55" << " " << "56" << endl << "           " << "57" << " " << "58" << " " << "59" << endl
		<< "11" << " " << "12" << " " << "13" << "   " << "21" << " " << "22" << " " << "23" << "   " << "31" << " " << "32" << " " << "33" << "   " << "41" << " " << "42" << " " << "43" << endl
		<< "14" << " " << "15" << " " << "16" << "   " << "24" << " " << "25" << " " << "26" << "   " << "34" << " " << "35" << " " << "36" << "   " << "44" << " " << "45" << " " << "46" << endl
		<< "17" << " " << "18" << " " << "19" << "   " << "27" << " " << "28" << " " << "29" << "   " << "37" << " " << "38" << " " << "39" << "   " << "47" << " " << "48" << " " << "49" << endl
		<< "           " << "61" << " " << "62" << " " << "63" << endl << "           " << "64" << " " << "65" << " " << "66" << endl << "           " << "67" << " " << "68" << " " << "69" << endl
		<< "*****************************************************" << endl <<
		"   I o takie w³aœnie prawid³owe koordynaty prosi nas program (np. 46, 63, 28)" << endl <<
		"   Nale¿y pamiêtaæ, ¿e podczas sprawdzania jaka powinna byæ prawid³owa pozycja dla klocka" << endl <<
		"   trzeba sprawdziæ czy wszystkie kolory klocka (dla rogów - 3, dla krawêdzi - 2) zgadzaj¹ si¹ z centrami!" << endl <<
		"   Pamiêtajmy te¿ o domyœlnym trzymaniu kostki ¿ó³tym centrem do góry." << endl <<
		"   Wpisywanie mo¿e zaj¹æ trochê czasu."
		<< endl << endl << "Nacjœnik dowolny klawisz, aby powróciæ do menu ...";

};
void menu()
{
	cout << "                                   *** Rubik's cube scrambler and solver ***" << endl <<
		"                                    ***************************************" << endl << endl;
	cout << "                                            Naciœnij opcjê 1 - 5" << endl <<
		"1. Stwórz scramble'a" << endl <<
		"2. Wygeneruj scramble'a" << endl <<
		"3. eksperymentalnie" << endl <<
		"4. Instrukcja" << endl <<
		"5. Wyjœcie" << endl << endl;

};


void customorange(int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9)
{
	bool valid_input = false;
	cout << "                   Wpisz oznaczenia œciany pomarañczowej    krok (1/6)" << endl << endl;
	//	cout << "Górny - prawy róg œciany pomarañczowej:    "; {do { cout << "Wpisz prawid³owe koordynaty       :"; cin >> *o1;cout<< endl; } while ((*o1) > 69 || (*o1) < 11 || ((*o1) == 20 || (*o1) == 30 || (*o1) == 40 || (*o1) == 50 || (*o1) == 60 || (*o1) == 15 || (*o1) == 25 || (*o1) == 35 || (*o1) == 45 || (*o1) == 55 || (*o1) == 65)); };
	do {
		cout << "Górny - lewy róg œciany pomarañczowej:    "; cin >> *o1;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	//	cout << "Górna krawêdŸ œciany pomarañczowej    :    "; cin >> *o2; 


	//do{
	do {
		cout << "Górna krawêdŸ œciany pomarañczowej    :    "; cin >> *o2;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	//} while ((*o1) == 69); //|| (*o1) < 11 || ((*o1) == 20 || (*o1) == 30 || (*o1) == 40 || (*o1) == 50 || (*o1) == 60 || (*o1) == 15 || (*o1) == 25 || (*o1) == 35 || (*o1) == 45 || (*o1) == 55 || (*o1) == 65)));
	do {
		cout << "Górny - prawy róg œciany pomarañczowej :    "; cin >> *o3;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Lewa krawêdŸ œciany pomarañczowej     :    "; cin >> *o4;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	cout << "Center                                :    ----" << endl;
	do {
		cout << "Prawa krawêdŸ œciany pomarañczowej    :    "; cin >> *o6;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolny - lewy róg œciany pomarañczowej :    "; cin >> *o7;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolna krawêdŸ œciany pomarañczowej    :    "; cin >> *o8;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolny - prawy róg œciany pomarañczowej:    "; cin >> *o9;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	cout << endl;
};
void customblue(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9)
{
	bool valid_input = false;
	cout << "                   Wpisz oznaczenia œciany niebieskiej    krok (2/6)" << endl << endl;
	do {
		cout << "Górny - lewy róg œciany niebieskiej:    "; cin >> *b1;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Górna krawêdŸ œciany niebieskiej    :    "; cin >> *b2;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Górny - prawy róg œciany niebieskiej :    "; cin >> *b3;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Lewa krawêdŸ œciany niebieskiej     :    "; cin >> *b4;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	cout << "Center                              :    ----" << endl;
	do {
		cout << "Prawa krawêdŸ œciany niebieskiej    :    "; cin >> *b6;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolny - lewy róg œciany niebieskiej :    "; cin >> *b7;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolna krawêdŸ œciany niebieskiej    :    "; cin >> *b8;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolny - prawy róg œciany niebieskiej:    "; cin >> *b9;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);

	cout << endl;
};
void customred(int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9)
{
	cout << "                   Wpisz oznaczenia œciany czerwonej    krok (3/6)" << endl << endl;
	bool valid_input = false;
	do {
		cout << "Górny - prawy róg œciany czerwonej:    "; cin >> *r1;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Górna krawêdŸ œciany czerwonej    :    "; cin >> *r2;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Górny - lewy róg sciany czerwonej :    "; cin >> *r3;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Lewa krawêdŸ œciany czerwonej     :    "; cin >> *r4;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	cout << "Center                            :    ----" << endl;
	do {
		cout << "Prawa krawêdŸ œciany czerwonej    :    "; cin >> *r6;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolny - lewy róg œciany czerwonej :    "; cin >> *r7;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolna krawêdŸ œciany czerwonej    :    "; cin >> *r8;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolny - prawy róg œciany czerwonej:    "; cin >> *r9;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	cout << endl;
};
void customgreen(int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9)
{
	cout << "                   Wpisz oznaczenia œciany zielonej    krok (4/6)" << endl << endl;
	bool valid_input = false;
	do {
		cout << "Górny - prawy róg œciany zielonej:    "; cin >> *g1;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Górna krawêdŸ œciany zielonej    :    "; cin >> *g2;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Górny - lewy róg sciany zielonej :    "; cin >> *g3;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Lewa krawêdŸ œciany zielonej     :    "; cin >> *g4;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	cout << "Center                            :    ----" << endl;
	do {
		cout << "Prawa krawêdŸ œciany zielonej    :    "; cin >> *g6;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolny - lewy róg œciany zielonej :    "; cin >> *g7;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolna krawêdŸ œciany zielonej    :    "; cin >> *g8;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolny - prawy róg œciany zielonej:    "; cin >> *g9;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	cout << endl;
};
void customyellow(int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9)
{
	cout << "                   Wpisz oznaczenia œciany ¿ó³tej    krok (5/6)" << endl << endl;
	bool valid_input = false;
	do {
		cout << "Górny - prawy róg œciany ¿ó³tej:    "; cin >> *y1;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Górna krawêdŸ œciany ¿ó³tej    :    "; cin >> *y2;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Górny - lewy róg sciany ¿ó³tej :    "; cin >> *y3;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Lewa krawêdŸ œciany ¿ó³tej     :    "; cin >> *y4;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	cout << "Center                            :    ----" << endl;
	do {
		cout << "Prawa krawêdŸ œciany ¿ó³tej    :    "; cin >> *y6;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolny - lewy róg œciany ¿ó³tej :    "; cin >> *y7;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolna krawêdŸ œciany ¿ó³tej    :    "; cin >> *y8;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolny - prawy róg œciany ¿ó³tej:    "; cin >> *y9;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	cout << endl;
};
void customwhite(int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9)
{
	cout << "                   Wpisz oznaczenia œciany bia³ej    krok (6/6)" << endl << endl;
	bool valid_input = false;
	do {
		cout << "Górny - prawy róg œciany bia³ej:    "; cin >> *w1;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Górna krawêdŸ œciany bia³ej    :    "; cin >> *w2;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Górny - lewy róg sciany bia³ej :    "; cin >> *w3;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Lewa krawêdŸ œciany bia³ej     :    "; cin >> *w4;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	cout << "Center                            :    ----" << endl;
	do {
		cout << "Prawa krawêdŸ œciany bia³ej    :    "; cin >> *w6;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolny - lewy róg œciany bia³ej :    "; cin >> *w7;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolna krawêdŸ œciany bia³ej    :    "; cin >> *w8;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	do {
		cout << "Dolny - prawy róg œciany bia³ej:    "; cin >> *w9;
		if (!(valid_input = cin.good())) {
			cout << "Koordynaty nieprawid³owe! \n";
			cin.clear();
			cin.ignore(2147483647, '\n');
		}
	} while (!valid_input);
	cout << endl;
};*/

/*void F(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* w1, int* w2, int* w3,
	int* r7, int* r4, int* r1,
	int* y9, int* y8, int* y7,
	int* o3, int* o6, int* o9)
{
	swap(*w1, *r7);
	swap(*r7, *y9);
	swap(*y9, *o3);
	// **
	swap(*w2, *r4);
	swap(*r4, *y8);
	swap(*y8, *o6);
	// **
	swap(*w3, *r1);
	swap(*r1, *y7);
	swap(*y7, *o9);
	// **
	swap(*b1, *b7);
	swap(*b7, *b9);
	swap(*b9, *b3);
	// **
	swap(*b4, *b8);
	swap(*b8, *b6);
	swap(*b6, *b2);
}
void Fp(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* w1, int* w2, int* w3,
	int* r7, int* r4, int* r1,
	int* y9, int* y8, int* y7,
	int* o3, int* o6, int* o9)
{
	for (int i = 0; i < 3; i++)
	{
		swap(*w1, *r7);
		swap(*r7, *y9);
		swap(*y9, *o3);
		// **
		swap(*w2, *r4);
		swap(*r4, *y8);
		swap(*y8, *o6);
		// **
		swap(*w3, *r1);
		swap(*r1, *y7);
		swap(*y7, *o9);
		// **
		swap(*b1, *b7);
		swap(*b7, *b9);
		swap(*b9, *b3);
		// **
		swap(*b4, *b8);
		swap(*b8, *b6);
		swap(*b6, *b2);
	}
}
void FF(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* w1, int* w2, int* w3,
	int* r7, int* r4, int* r1,
	int* y9, int* y8, int* y7,
	int* o3, int* o6, int* o9)
{
	for (int i = 0; i < 2; i++)
	{
		swap(*w1, *r7);
		swap(*r7, *y9);
		swap(*y9, *o3);
		// **
		swap(*w2, *r4);
		swap(*r4, *y8);
		swap(*y8, *o6);
		// **
		swap(*w3, *r1);
		swap(*r1, *y7);
		swap(*y7, *o9);
		// **
		swap(*b1, *b7);
		swap(*b7, *b9);
		swap(*b9, *b3);
		// **
		swap(*b4, *b8);
		swap(*b8, *b6);
		swap(*b6, *b2);
	}
}

void R(int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* w3, int* w6, int* w9,
	int* g7, int* g4, int* g1,
	int* y3, int* y6, int* y9,
	int* b3, int* b6, int* b9)
{
	swap(*w3, *g7);
	swap(*g7, *y3);
	swap(*y3, *b3);
	// **
	swap(*w6, *g4);
	swap(*g4, *y6);
	swap(*y6, *b6);
	// **
	swap(*w9, *g1);
	swap(*g1, *y9);
	swap(*y9, *b9);
	// **
	swap(*r1, *r7);
	swap(*r7, *r9);
	swap(*r9, *r3);
	// **
	swap(*r4, *r8);
	swap(*r8, *r6);
	swap(*r6, *r2);
}
void Rp(int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* w3, int* w6, int* w9,
	int* g7, int* g4, int* g1,
	int* y3, int* y6, int* y9,
	int* b3, int* b6, int* b9)
{
	for (int i = 0; i < 3; i++)
	{
		swap(*w3, *g7);
		swap(*g7, *y3);
		swap(*y3, *b3);
		// **
		swap(*w6, *g4);
		swap(*g4, *y6);
		swap(*y6, *b6);
		// **
		swap(*w9, *g1);
		swap(*g1, *y9);
		swap(*y9, *b9);
		// **
		swap(*r1, *r7);
		swap(*r7, *r9);
		swap(*r9, *r3);
		// **
		swap(*r4, *r8);
		swap(*r8, *r6);
		swap(*r6, *r2);
	}
}
void RR(int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* w3, int* w6, int* w9,
	int* g7, int* g4, int* g1,
	int* y3, int* y6, int* y9,
	int* b3, int* b6, int* b9)
{
	for (int i = 0; i < 2; i++)
	{
		swap(*w3, *g7);
		swap(*g7, *y3);
		swap(*y3, *b3);
		// **
		swap(*w6, *g4);
		swap(*g4, *y6);
		swap(*y6, *b6);
		// **
		swap(*w9, *g1);
		swap(*g1, *y9);
		swap(*y9, *b9);
		// **
		swap(*r1, *r7);
		swap(*r7, *r9);
		swap(*r9, *r3);
		// **
		swap(*r4, *r8);
		swap(*r8, *r6);
		swap(*r6, *r2);
	}
}
void B(int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* w9, int* w8, int* w7,
	int* o7, int* o4, int* o1,
	int* y1, int* y2, int* y3,
	int* r3, int* r6, int* r9)
{
	swap(*w9, *o7);
	swap(*o7, *y1);
	swap(*y1, *r3);
	// **
	swap(*w8, *o4);
	swap(*o4, *y2);
	swap(*y2, *r6);
	// **
	swap(*w7, *o1);
	swap(*o1, *y3);
	swap(*y3, *r9);
	// **
	swap(*g1, *g7);
	swap(*g7, *g9);
	swap(*g9, *g3);
	// **
	swap(*g4, *g8);
	swap(*g8, *g6);
	swap(*g6, *g2);
}
void Bp(int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* w9, int* w8, int* w7,
	int* o7, int* o4, int* o1,
	int* y1, int* y2, int* y3,
	int* r3, int* r6, int* r9)
{
	for (int i = 0; i < 3; i++)
	{
		swap(*w9, *o7);
		swap(*o7, *y1);
		swap(*y1, *r3);
		// **
		swap(*w8, *o4);
		swap(*o4, *y2);
		swap(*y2, *r6);
		// **
		swap(*w7, *o1);
		swap(*o1, *y3);
		swap(*y3, *r9);
		// **
		swap(*g1, *g7);
		swap(*g7, *g9);
		swap(*g9, *g3);
		// **
		swap(*g4, *g8);
		swap(*g8, *g6);
		swap(*g6, *g2);
	}
}
void BB(int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* w9, int* w8, int* w7,
	int* o7, int* o4, int* o1,
	int* y1, int* y2, int* y3,
	int* r3, int* r6, int* r9)
{
	for (int i = 0; i < 2; i++)
	{
		swap(*w9, *o7);
		swap(*o7, *y1);
		swap(*y1, *r3);
		// **
		swap(*w8, *o4);
		swap(*o4, *y2);
		swap(*y2, *r6);
		// **
		swap(*w7, *o1);
		swap(*o1, *y3);
		swap(*y3, *r9);
		// **
		swap(*g1, *g7);
		swap(*g7, *g9);
		swap(*g9, *g3);
		// **
		swap(*g4, *g8);
		swap(*g8, *g6);
		swap(*g6, *g2);
	}
}
void L(int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* w7, int* w4, int* w1,
	int* b7, int* b4, int* b1,
	int* y7, int* y4, int* y1,
	int* g3, int* g6, int* g9)
{
	swap(*w7, *b7);
	swap(*b7, *y7);
	swap(*y7, *g3);
	// **
	swap(*w4, *b4);
	swap(*b4, *y4);
	swap(*y4, *g6);
	// **
	swap(*w1, *b1);
	swap(*b1, *y1);
	swap(*y1, *g9);
	// **
	swap(*o1, *o7);
	swap(*o7, *o9);
	swap(*o9, *o3);
	// **
	swap(*o4, *o8);
	swap(*o8, *o6);
	swap(*o6, *o2);
}
void Lp(int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* w7, int* w4, int* w1,
	int* b7, int* b4, int* b1,
	int* y7, int* y4, int* y1,
	int* g3, int* g6, int* g9)
{
	for (int i = 0; i < 3; i++)
	{
		swap(*w7, *b7);
		swap(*b7, *y7);
		swap(*y7, *g3);
		// **
		swap(*w4, *b4);
		swap(*b4, *y4);
		swap(*y4, *g6);
		// **
		swap(*w1, *b1);
		swap(*b1, *y1);
		swap(*y1, *g9);
		// **
		swap(*o1, *o7);
		swap(*o7, *o9);
		swap(*o9, *o3);
		// **
		swap(*o4, *o8);
		swap(*o8, *o6);
		swap(*o6, *o2);
	}
}
void LL(int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* w7, int* w4, int* w1,
	int* b7, int* b4, int* b1,
	int* y7, int* y4, int* y1,
	int* g3, int* g6, int* g9)
{
	for (int i = 0; i < 2; i++)
	{
		swap(*w7, *b7);
		swap(*b7, *y7);
		swap(*y7, *g3);
		// **
		swap(*w4, *b4);
		swap(*b4, *y4);
		swap(*y4, *g6);
		// **
		swap(*w1, *b1);
		swap(*b1, *y1);
		swap(*y1, *g9);
		// **
		swap(*o1, *o7);
		swap(*o7, *o9);
		swap(*o9, *o3);
		// **
		swap(*o4, *o8);
		swap(*o8, *o6);
		swap(*o6, *o2);
	}
}
void U(int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* b1, int* b2, int* b3,
	int* r1, int* r2, int* r3,
	int* g1, int* g2, int* g3,
	int* o1, int* o2, int* o3)
{
	swap(*b1, *r1);
	swap(*r1, *g1);
	swap(*g1, *o1);
	// **
	swap(*b2, *r2);
	swap(*r2, *g2);
	swap(*g2, *o2);
	// **
	swap(*b3, *r3);
	swap(*r3, *g3);
	swap(*g3, *o3);
	// **
	swap(*y1, *y7);
	swap(*y7, *y9);
	swap(*y9, *y3);
	// **
	swap(*y4, *y8);
	swap(*y8, *y6);
	swap(*y6, *y2);
}
void Up(int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* b1, int* b2, int* b3,
	int* r1, int* r2, int* r3,
	int* g1, int* g2, int* g3,
	int* o1, int* o2, int* o3)
{
	for (int i = 0; i < 3; i++)
	{
		swap(*b1, *r1);
		swap(*r1, *g1);
		swap(*g1, *o1);
		// **
		swap(*b2, *r2);
		swap(*r2, *g2);
		swap(*g2, *o2);
		// **
		swap(*b3, *r3);
		swap(*r3, *g3);
		swap(*g3, *o3);
		// **
		swap(*y1, *y7);
		swap(*y7, *y9);
		swap(*y9, *y3);
		// **
		swap(*y4, *y8);
		swap(*y8, *y6);
		swap(*y6, *y2);
	}
}
void UU(int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* b1, int* b2, int* b3,
	int* r1, int* r2, int* r3,
	int* g1, int* g2, int* g3,
	int* o1, int* o2, int* o3)
{
	for (int i = 0; i < 2; i++)
	{
		swap(*b1, *r1);
		swap(*r1, *g1);
		swap(*g1, *o1);
		// **
		swap(*b2, *r2);
		swap(*r2, *g2);
		swap(*g2, *o2);
		// **
		swap(*b3, *r3);
		swap(*r3, *g3);
		swap(*g3, *o3);
		// **
		swap(*y1, *y7);
		swap(*y7, *y9);
		swap(*y9, *y3);
		// **
		swap(*y4, *y8);
		swap(*y8, *y6);
		swap(*y6, *y2);
	}
}
void D(int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9,
	int* g9, int* g8, int* g7,
	int* r9, int* r8, int* r7,
	int* b9, int* b8, int* b7,
	int* o9, int* o8, int* o7)
{
	swap(*g9, *r9);
	swap(*r9, *b9);
	swap(*b9, *o9);
	// **
	swap(*g8, *r8);
	swap(*r8, *b8);
	swap(*b8, *o8);
	// **
	swap(*g7, *r7);
	swap(*r7, *b7);
	swap(*b7, *o7);
	// **
	swap(*w1, *w7);
	swap(*w7, *w9);
	swap(*w9, *w3);
	// **
	swap(*w4, *w8);
	swap(*w8, *w6);
	swap(*w6, *w2);
}
void Dp(int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9,
	int* g9, int* g8, int* g7,
	int* r9, int* r8, int* r7,
	int* b9, int* b8, int* b7,
	int* o9, int* o8, int* o7)
{
	for (int i = 0; i < 3; i++)
	{
		swap(*g9, *r9);
		swap(*r9, *b9);
		swap(*b9, *o9);
		// **
		swap(*g8, *r8);
		swap(*r8, *b8);
		swap(*b8, *o8);
		// **
		swap(*g7, *r7);
		swap(*r7, *b7);
		swap(*b7, *o7);
		// **
		swap(*w1, *w7);
		swap(*w7, *w9);
		swap(*w9, *w3);
		// **
		swap(*w4, *w8);
		swap(*w8, *w6);
		swap(*w6, *w2);
	}
}
void DD(int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9,
	int* g9, int* g8, int* g7,
	int* r9, int* r8, int* r7,
	int* b9, int* b8, int* b7,
	int* o9, int* o8, int* o7)
{
	for (int i = 0; i < 2; i++)
	{
		swap(*g9, *r9);
		swap(*r9, *b9);
		swap(*b9, *o9);
		// **
		swap(*g8, *r8);
		swap(*r8, *b8);
		swap(*b8, *o8);
		// **
		swap(*g7, *r7);
		swap(*r7, *b7);
		swap(*b7, *o7);
		// **
		swap(*w1, *w7);
		swap(*w7, *w9);
		swap(*w9, *w3);
		// **
		swap(*w4, *w8);
		swap(*w8, *w6);
		swap(*w6, *w2);
	}
}
void softset(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9)
{
	fstream plik;
	plik.open("plik.txt", ios::out | ios::app);

	// *********** soft base
	if (*w2 == 62 && *w4 == 64 && *w6 == 66 && *w8 == 68) {}
	else {
		if (*w6 == 62 && *w8 == 66 && *w4 == 68 && *w2 == 64)
		{
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D' ";
		}
		else
		{
			if (*w6 == 68 && *w8 == 64 && *w4 == 62 && *w2 == 66)
			{
				D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
				plik << "D ";
			}
			else
			{
				if (*w6 == 64 && *w8 == 62 && *w4 == 66 && *w2 == 68)
				{
					DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
					plik << "2D ";
				}
			}
		}
		if ((*w2 == 62 && *w4 == 64 && *w6 == 66) || (*w8 == 68 && *w4 == 64 && *w6 == 66) || (*w2 == 62 && *w8 == 68 && *w6 == 66) || (*w2 == 62 && *w4 == 64 && *w8 == 68)) {}
		else {
			if ((*w6 == 62 && *w8 == 66 && *w4 == 68) || (*w8 == 66 && *w4 == 68 && *w2 == 64) || (*w4 == 68 && *w2 == 64 && *w6 == 62) || (*w2 == 64 && *w6 == 62 && *w8 == 66))
			{
				Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
				plik << "D' ";
			}
			else
			{
				if ((*w6 == 68 && *w8 == 64 && *w4 == 62) || (*w8 == 64 && *w4 == 62 && *w2 == 66) || (*w4 == 62 && *w2 == 66 && *w6 == 68) || (*w2 == 66 && *w6 == 68 && *w8 == 64))
				{
					D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
					plik << "D ";
				}
				else
				{
					if ((*w6 == 64 && *w8 == 62 && *w4 == 66) || (*w8 == 62 && *w4 == 66 && *w2 == 68) || (*w4 == 66 && *w2 == 68 && *w6 == 64) || (*w2 == 68 && *w6 == 64 && *w8 == 62))
					{
						DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
						plik << "2D ";
					}
				}
			}
			if ((*w2 == 62 && *w4 == 64) || (*w8 == 68 && *w4 == 64) || (*w8 == 68 && *w6 == 66) || (*w2 == 62 && *w6 == 66)) {}
			else {
				if ((*w6 == 62 && *w8 == 66) || (*w6 == 62 && *w4 == 68) || (*w6 == 62 && *w2 == 64) || (*w8 == 66 && *w4 == 68) || (*w8 == 66 && *w2 == 64) || (*w4 == 68 && *w2 == 64))
				{
					Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
					plik << "D' ";
				}
				else
				{
					if ((*w6 == 68 && *w8 == 64) || (*w6 == 68 && *w4 == 62) || (*w6 == 68 && *w2 == 66) || (*w8 == 64 && *w4 == 62) || (*w8 == 64 && *w2 == 66) || (*w4 == 62 && *w2 == 66))
					{
						D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
						plik << "D ";
					}
					else
					{
						if ((*w6 == 64 && *w8 == 62) || (*w6 == 64 && *w4 == 66) || (*w6 == 64 && *w2 == 68) || (*w8 == 62 && *w4 == 66) || (*w8 == 62 && *w2 == 68) || (*w4 == 66 && *w2 == 68))
						{
							DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
							plik << "2D ";
						}
					}
				}
				if ((*w6 == 66) || (*w8 == 68) || (*w4 == 64) || (*w2 == 62)) {}
				else {
					if ((*w6 == 62) || (*w8 == 66) || (*w4 == 68) || (*w2 == 64))
					{
						Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
						plik << "D' ";
					}
					else
					{
						if ((*w6 == 68) || (*w8 == 64) || (*w4 == 62) || (*w2 == 66))
						{
							D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
							plik << "D ";
						}
						else
						{
							if ((*w6 == 64) || (*w8 == 62) || (*w4 == 66) || (*w2 == 68))
							{
								DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
								plik << "2D ";
							}
						}
					}
				}
			}
		}
	}

	// ***********
	plik << endl;
	plik.close();
}
void blueone(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9)
{
	fstream plik;
	plik.open("plik.txt", ios::out | ios::app);

	if (*b2 == 28 && *y8 == 62)
	{
		FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "2F";
	}
	if (*b2 == 62 && *y8 == 28 && *w6 == 66)
	{
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "U' R' F R";
	}
	if (*b2 == 62 && *y8 == 28)
	{
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "U' R' F";
	}
	if (*o6 == 62 && *b4 == 28)
	{
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "F'";
	}
	if (*o6 == 28 && *b4 == 62)
	{
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D' L D";
	}
	if (*b6 == 28 && *r4 == 62)
	{
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "F";
	}
	if (*b6 == 62 && *r4 == 28)
	{
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D R' D'";
	}
	if (*b8 == 62 && *w2 == 28)
	{
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "F' D R' D'";
	}
	if (*y4 == 62 && *o2 == 28)
	{
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "U' 2F";
	}
	if (*y4 == 28 && *o2 == 62 && *w4 == 64)
	{
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "L F' L'";
	}
	if (*y4 == 28 && *o2 == 62)
	{
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "L F'";
	}
	if (*g2 == 28 && *y2 == 62)
	{
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "2U 2F";
	}
	if (*g2 == 62 && *y2 == 28 && *w6 == 66)
	{
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9,
			b3, b6, b9);
		plik << "U R' F R";
	}
	if (*g2 == 62 && *y2 == 28)
	{
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "U R' F";
	}
	if (*y6 == 62 && *r2 == 28)
	{
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "U 2F";
	}
	if (*y6 == 28 && *r2 == 62 && *w6 == 66)
	{
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "R' F R";
	}
	if (*y6 == 28 && *r2 == 62)
	{
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "R' F";
	}
	if (*g6 == 28 && *o4 == 62 && *w4 == 64)
	{
		LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "2L F' 2L";
	}
	if (*g6 == 28 && *o4 == 62)
	{
		LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "2L F'";
	}
	if (*g6 == 62 && *o4 == 28)
	{
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D' L' D";
	}
	if (*g4 == 62 && *r6 == 28)
	{
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D R D'";
	}
	if (*g4 == 28 && *r6 == 62 && *w6 == 66)
	{
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "2R F 2R";
	}
	if (*g4 == 28 && *r6 == 62)
	{
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "2R F";
	}
	if (*o8 == 62 && *w4 == 28)
	{
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "L' F'";
	}
	if (*o8 == 28 && *w4 == 62)
	{
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "L' D' L D";
	}
	if (*r8 == 28 && *w6 == 62)
	{
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "R D R' D'";
	}
	if (*r8 == 62 && *w6 == 28)
	{
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "R F";
	}
	if (*g8 == 28 && *w8 == 62 && *w4 == 64 && *w6 == 66)
	{
		DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "2D F' 2D F";
	}
	if (*g8 == 28 && *w8 == 62 && *w6 == 66)
	{
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "B' 2L F'";
	}
	if (*g8 == 28 && *w8 == 62 && *w4 == 64)
	{
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "B 2R F";
	}
	if (*g8 == 28 && *w8 == 62)
	{
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "B 2R F";
	}
	if (*g8 == 62 && *w8 == 28)
	{
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "D' R D F";
	}
	plik << endl;
	plik.close();
}
void redone(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9)
{
	fstream plik;
	plik.open("plik.txt", ios::out | ios::app);
	if (*r8 == 66 && *w6 == 38)
	{
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "R D' F D";
	}
	if (*b6 == 66 && *r4 == 38)
	{
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "R'";
	}
	if (*b6 == 38 && *r4 == 66)
	{
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D' F D";
	}
	if (*g4 == 66 && *r6 == 38)
	{
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "R";
	}
	if (*g4 == 38 && *r6 == 66)
	{
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D B' D'";
	}
	if (*y6 == 66 && *r2 == 38)
	{
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "2R";
	}
	if (*y6 == 38 && *r2 == 66)
	{
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D' R' F R D";
	}
	if (*y8 == 66 && *b2 == 38)
	{
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "U' 2R";
	}
	if (*y8 == 38 && *b2 == 66 && *w2 == 62)
	{
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "F R' F'";
	}
	if (*y8 == 38 && *b2 == 66)
	{
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "F R'";
	}
	if (*y4 == 66 && *o2 == 38)
	{
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "2U 2R";
	}
	if (*y4 == 38 && *o2 == 66)
	{
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D' L F' L' D";
	}
	if (*y2 == 66 && *g2 == 38)
	{
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "U 2R";
	}
	if (*y2 == 38 && *g2 == 66)
	{
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "B' R B";
	}
	if (*y2 == 38 && *g2 == 66 && *w8 == 68)
	{
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "B' R";
	}
	if (*o6 == 66 && *b4 == 38)
	{
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D' F' D";
	}
	if (*o6 == 38 && *b4 == 66 && *w2 == 62)
	{
		FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "2F R' 2F";
	}
	if (*o6 == 38 && *b4 == 66)
	{
		FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "2F R'";
	}
	if (*o4 == 66 && *g6 == 38)
	{
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D B D'";
	}
	if (*o4 == 38 && *g6 == 66)
	{
		DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "2D L' 2D";
	}
	if (*b8 == 38 && *w2 == 66)
	{
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "F' D' F D";
	}
	if (*b8 == 66 && *w2 == 38)
	{
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "F' R'";
	}
	if (*o8 == 38 && *w4 == 66)
	{
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "L' 2D L 2D";
	}
	if (*o8 == 66 && *w4 == 38)
	{
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "L' D' F' D";
	}
	if (*g8 == 38 && *w8 == 66)
	{
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "B D B' D'";
	}
	if (*g8 == 66 && *w8 == 38)
	{
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "B R";
	}
	plik << endl;
	plik.close();
}
void greenone(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9)
{
	fstream plik;
	plik.open("plik.txt", ios::out | ios::app);
	if (*g8 == 68 && *w8 == 48)
	{
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "B D' R D";
	}
	if (*y2 == 68 && *g2 == 48)
	{
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "2B";
	}
	if (*y2 == 48 && *g2 == 68 && *w6 == 66)
	{
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "U R B' R'";
	}
	if (*y2 == 48 && *g2 == 68)
	{
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "U R B'";
	}
	if (*r6 == 68 && *g4 == 48)
	{
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "B'";
	}
	if (*r6 == 48 && *g4 == 68)
	{
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D' R D";
	}
	if (*o4 == 68 && *g6 == 48)
	{
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "B";
	}
	if (*o4 == 48 && *g6 == 68)
	{
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D L' D'";
	}
	if (*o2 == 68 && *y4 == 48 && *w4 == 64)
	{
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "L' B L";
	}
	if (*o2 == 68 && *y4 == 48)
	{
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "L' B";
	}
	if (*o2 == 48 && *y4 == 68)
	{
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "U 2B";
	}
	if (*r2 == 68 && *y6 == 48 && *w6 == 66)
	{
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "R B' R'";
	}
	if (*r2 == 68 && *y6 == 48)
	{
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "R B'";
	}
	if (*r2 == 48 && *y6 == 68)
	{
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "U' 2B";
	}
	if (*b2 == 68 && *y8 == 48 && *w6 == 66)
	{
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "U' R B' R'";
	}
	if (*b2 == 68 && *y8 == 48)
	{
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "U' R B'";
	}
	if (*b2 == 48 && *y8 == 68)
	{
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "2U 2B";
	}
	if (*o6 == 68 && *b4 == 48 && *w4 == 64)
	{
		LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "2L B 2L";
	}
	if (*o6 == 68 && *b4 == 48)
	{
		LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "2L B";
	}
	if (*o6 == 48 && *b4 == 68)
	{
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D L D'";
	}
	if (*r4 == 68 && *b6 == 48 && *w6 == 66)
	{
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "2R B' 2R";
	}
	if (*r4 == 68 && *b6 == 48)
	{
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "2R B'";
	}
	if (*r4 == 48 && *b6 == 68)
	{
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D' R' D";
	}
	if (*o8 == 48 && *w4 == 68)
	{
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "L' D L D'";
	}
	if (*o8 == 68 && *w4 == 48)
	{
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "L B";
	}
	if (*w2 == 68 && *b8 == 48)
	{
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "F' 2D F 2D";
	}
	if (*w2 == 48 && *b8 == 68)
	{
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "F' D' R' D";
	}
	if (*r8 == 68 && *w6 == 48)
	{
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "R' B'";
	}
	if (*r8 == 48 && *w6 == 68)
	{
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "L' D' L D";
	}
	plik << endl;
	plik.close();
}
void orangeone(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9)
{
	fstream plik;
	plik.open("plik.txt", ios::out | ios::app);

	if (*o8 == 64 && *w4 == 18)
	{
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "L' D F' D'";
	}
	if (*o4 == 64 && *g6 == 18)
	{
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D' B D";
	}
	if (*o4 == 18 && *g6 == 64)
	{
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "L'";
	}
	if (*o6 == 64 && *b4 == 18)
	{
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D F' D'";
	}
	if (*o6 == 18 && *b4 == 64)
	{
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "L";
	}
	if (*r6 == 64 && *g4 == 18)
	{
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D' B' D";
	}
	if (*r6 == 18 && *g4 == 64 && *w8 == 68)
	{
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "2B L' 2B";
	}
	if (*r6 == 18 && *g4 == 64)
	{
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "2B L'";
	}
	if (*r4 == 64 && *b6 == 18)
	{
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "D F D'";
	}
	if (*r4 == 18 && *b6 == 64 && *w2 == 62)
	{
		FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "2F L 2F";
	}
	if (*r4 == 18 && *b6 == 64)
	{
		FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "2F L";
	}
	if (*y4 == 64 && *o2 == 18)
	{
		LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "2L";
	}
	if (*y4 == 18 && *o2 == 64 && *w2 == 62)
	{
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "U' F' L F";
	}
	if (*y4 == 18 && *o2 == 64)
	{
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "U' F' L";
	}
	if (*y2 == 64 && *g2 == 18)
	{
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "U' 2L";
	}
	if (*y2 == 18 && *g2 == 64 && *w8 == 68)
	{
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "B L' B'";
	}
	if (*y2 == 18 && *g2 == 64)
	{
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "B L'";
	}
	if (*y6 == 64 && *r2 == 18)
	{
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "2U 2L";
	}
	if (*y6 == 18 && *r2 == 64 && *w2 == 62)
	{
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "U F' L F";
	}
	if (*y6 == 18 && *r2 == 64)
	{
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "U F' L";
	}
	if (*y8 == 64 && *b2 == 18)
	{
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "U 2L";
	}
	if (*y8 == 18 && *b2 == 64 && *w2 == 62)
	{
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "F' L F";
	}
	if (*y8 == 18 && *b2 == 64)
	{
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "F' L";
	}
	if (*g8 == 18 && *w8 == 64)
	{
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "B' D' B D";
	}
	if (*g8 == 64 && *w8 == 18)
	{
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "B' L'";
	}
	if (*r8 == 18 && *w6 == 64)
	{
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "R 2D R' 2D";
	}
	if (*r8 == 64 && *w6 == 18)
	{
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "R D F D'";
	}
	if (*b8 == 18 && *w2 == 64)
	{
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		plik << "F' D F D'";
	}
	if (*b8 == 64 && *w2 == 18)
	{
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "F L";
	}
	plik << endl;
	plik.close();
}
void softcorners(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9)
{
	fstream plik;
	plik.open("plik.txt", ios::out | ios::app);
	for (int i = 0; i < 4; i++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (*y1 == 61)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "U' F U' F' L' 2U L ";
			}
			if (*y3 == 61)
			{
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "2U F U' F' L' 2U L ";
			}
			if (*y7 == 61)
			{
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "F U' F' L' 2U L ";
			}
			if (*y9 == 61)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "U F U' F' L' 2U L ";
			}
			if (*b1 == 61)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "U' L' U L ";
			}
			if (*r1 == 61)
			{
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "L' U L ";
			}
			if (*g1 == 61)
			{
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "L' 2U L ";
			}
			if (*o1 == 61)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "U L' 2U L ";
			}
			if (*b3 == 61)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "U' F 2U F' ";
			}
			if (*r3 == 61)
			{
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "F 2U F' ";
			}
			if (*g3 == 61)
			{
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "F U' F' ";
			}
			if (*o3 == 61)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "U F U' F' ";
			}
			//********** next corner
			if (*y1 == 63)
			{
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "2U R U' R' F' 2U F ";
			}
			if (*y3 == 63)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "U R U' R' F' 2U F ";
			}
			if (*y7 == 63)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "U' R U' R' F' 2U F ";
			}
			if (*y9 == 63)
			{
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "R U' R' F' 2U F ";
			}
			if (*b1 == 63)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "U F' 2U F ";
			}
			if (*r1 == 63)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "U' F' U F ";
			}
			if (*g1 == 63)
			{
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "F' U F ";
			}
			if (*o1 == 63)
			{
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "F' 2U F ";
			}
			if (*b3 == 63)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "U R U' R' ";
			}
			if (*r3 == 63)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "U' R 2U R' ";
			}
			if (*g3 == 63)
			{
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "R 2U R' ";
			}
			if (*o3 == 63)
			{
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "R U' R' ";
			}
			// ********** next corner
			if (*y1 == 67)
			{
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "L U' L' B' 2U B ";
			}
			if (*y3 == 67)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "U' L U' L' B' 2U B ";
			}
			if (*y7 == 67)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "U L U' L' B' 2U B ";
			}
			if (*y9 == 67)
			{
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "2U L U' L' B' 2U B ";
			}
			if (*b1 == 67)
			{
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "B' U B ";
			}
			if (*r1 == 67)
			{
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "B' 2U B ";
			}
			if (*g1 == 67)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "U B' 2U B ";
			}
			if (*o1 == 67)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "U' B' U B ";
			}
			if (*b3 == 67)
			{
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "L 2U L' ";
			}
			if (*r3 == 67)
			{
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "L U' L' ";
			}
			if (*g3 == 67)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "U L U' L' ";
			}
			if (*o3 == 67)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "U' L 2U L' ";
			}
			// ********** next corner
			if (*y1 == 69)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "U R' U R B 2U B' ";
			}
			if (*y3 == 69)
			{
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "R' U R B 2U B' ";
			}
			if (*y7 == 69)
			{
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "2U R' U R B 2U B' ";
			}
			if (*y9 == 69)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "U' R' U R B 2U B' ";
			}
			if (*b1 == 69)
			{
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "R' 2U R ";
			}
			if (*r1 == 69)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "U R' 2U R ";
			}
			if (*g1 == 69)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "U' R' U R ";
			}
			if (*o1 == 69)
			{
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "R' U R ";
			}
			if (*b3 == 69)
			{
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "B U' B' ";
			}
			if (*r3 == 69)
			{
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "R' U' R ";
			}
			if (*g3 == 69)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "U R' U' R ";
			}
			if (*o3 == 69)
			{
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "B 2U B' ";
			}
		}
		// ************ down corners

		if (*b7 == 61)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "L' U 2L F' L' F ";
		}
		if (*o9 == 61)
		{
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "F U' 2F L F L' ";
		}
		if (*b9 == 61)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "F' U' 2F 2U F' ";
		}
		if (*r7 == 61)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "L' R U L R' ";
		}
		if (*w3 == 61)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "R U' R' L' U L ";
		}
		if (*r9 == 61)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R' F 2U F' R ";
		}
		if (*g7 == 61)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B L' 2U L B' ";
		}
		if (*w9 == 61)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R' L' 2U L R ";
		}
		if (*g9 == 61)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B' F U' F' B ";
		}
		if (*o7 == 61)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L U 2L 2U L ";
		}
		if (*w7 == 61)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "L U L' F 2U F' ";
		}
		// ***********next corner
		if (*b7 == 63)
		{
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "F U 2F 2U F ";
		}
		if (*o9 == 63)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "R L' U' R' L ";
		}
		if (*w1 == 63)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "L' U' L R U R' ";
		}
		if (*b9 == 63)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "R U' 2R F R F' ";
		}
		if (*r7 == 63)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "F' U 2F R' F' R ";
		}
		if (*r9 == 63)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R' U' 2R 2U R' ";
		}
		if (*g7 == 63)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "B F' U B' F ";
		}
		if (*w9 == 63)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "R' U' R F' 2U F ";
		}
		if (*g9 == 63)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B' R 2U R' B ";
		}
		if (*o7 == 63)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L F' 2U F L' ";
		}
		if (*w7 == 63)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "R L 2U R' L' ";
		}
		// ***********
		if (*b7 == 69)
		{
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "F R' 2U R F' ";
		}
		if (*o9 == 69)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L' B 2U B' L ";
		}
		if (*w1 == 69)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R' L' 2U L R ";
		}
		if (*b9 == 69)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "B F' U' B' F ";
		}
		if (*r7 == 69)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R U 2R 2U R ";
		}
		if (*w3 == 69)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "R U R' B 2U B' ";
		}
		if (*r9 == 69)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "B U' 2B R B R' ";
		}
		if (*g7 == 69)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "R' U 2R B' R' B ";
		}
		if (*g9 == 69)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B' U' 2B 2U B' ";
		}
		if (*o7 == 69)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L R' U R L' ";
		}
		if (*w7 == 69)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "L U' L' R' U R ";
		}
		// **********
		if (*b7 == 67)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "B' F U B F' ";
		}
		if (*o9 == 67)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L' U' 2L 2U L' ";
		}
		if (*w1 == 67)
		{
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "F U' F' B' U B ";
		}
		if (*b9 == 67)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "F' L 2U L' F ";
		}
		if (*r7 == 67)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R B' 2U B R' ";
		}
		if (*w3 == 67)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R L 2U L' R' ";
		}
		if (*r9 == 67)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "R' L U' R L' ";
		}
		if (*g7 == 67)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B U 2B 2U B ";
		}
		if (*w9 == 67)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "R' U' R L U L' ";
		}
		if (*g9 == 67)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "L U' 2L B L B' ";
		}
		if (*o7 == 67)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "B' U 2B L' B' L ";
		}
	}
	plik << endl;
	plik.close();

};
void edges(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9)
{
	fstream plik;
	plik.open("plik.txt", ios::out | ios::app);

	for (int i = 0; i < 4; i++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (*y8 == 24)
			{
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "2U F U' F' U' L' U L ";
			}
			if (*y6 == 24)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "U' F U' F' U' L' U L ";
			}
			if (*y2 == 24)
			{
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "F U' F' U' L' U L ";
			}
			if (*y4 == 24)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "U F U' F' U' L' U L ";
			}
			if (*b2 == 24)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "U' L' U L U F U' F' ";
			}
			if (*r2 == 24)
			{
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "L' U L U F U' F' ";
			}
			if (*g2 == 24)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "U L' U L U F U' F' ";
			}
			if (*o2 == 24)
			{
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "2U L' U L U F U' F' ";
			}
			// ***********
			if (*y8 == 26)
			{
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "2U F' U F U R U' R' ";
			}
			if (*y6 == 26)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "U' F' U F U R U' R' ";
			}
			if (*y2 == 26)
			{
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "F' U F U R U' R' ";
			}
			if (*y4 == 26)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "U F' U F U R U' R' ";
			}
			if (*b2 == 26)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "U R U' R' U' F' U F ";
			}
			if (*r2 == 26)
			{
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "2U R U' R' U' F' U F ";
			}
			if (*g2 == 26)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "U' R U' R' U' F' U F ";
			}
			if (*o2 == 26)
			{
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "R U' R' U' F' U F ";
			}
			// ***********
			if (*y8 == 44)
			{
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "B U' B' U' R' U R ";
			}
			if (*y6 == 44)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "U B U' B' U' R' U R ";
			}
			if (*y2 == 44)
			{
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "2U B U' B' U' R' U R ";
			}
			if (*y4 == 44)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "U' B U' B' U' R' U R ";
			}
			if (*b2 == 44)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "U R' U R U B U' B' ";
			}
			if (*r2 == 44)
			{
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "2U R' U R U B U' B' ";
			}
			if (*g2 == 44)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "U' R' U R U B U' B' ";
			}
			if (*o2 == 44)
			{
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "R' U R U B U' B' ";
			}
			// ***********
			if (*y8 == 46)
			{
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "B' U B U L U' L' ";
			}
			if (*y6 == 46)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "U B' U B U L U' L' ";
			}
			if (*y2 == 46)
			{
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "2U B' U B U L U' L' ";
			}
			if (*y4 == 46)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "U' B' U B U L U' L' ";
			}
			if (*b2 == 46)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "U' L U' L' U' B' U B ";
			}
			if (*r2 == 46)
			{
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "L U' L' U' B' U B ";
			}
			if (*g2 == 46)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "U L U' L' U' B' U B ";
			}
			if (*o2 == 46)
			{
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "2U L U' L' U' B' U B ";
			}
		}
		// ************ down edges
		if (*o6 == 24)
		{
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "2F 2U L 2F L' 2U F' U F' ";
		}
		if (*b6 == 24)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "R U' R' U' F' U 2F U' F' U' L' U L ";
		}
		if (*r4 == 24)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R L' U L U F U' F' U' R' ";
		}
		if (*r6 == 24)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "R' L' U L U F U' F' 2U R B 2U B' ";
		}
		if (*g4 == 24)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B U L' U L U F U' F' 2U B' ";
		}
		if (*g6 == 24)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "B' U L' U L U F U' F' U B L 2U L' ";
		}
		if (*o4 == 24)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B' F U' F' U' L' U L U B ";
		}
		// **********
		if (*o6 == 26)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L' R U' R' U' F' U F U L ";
		}
		if (*b4 == 26)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "L' U F' U F R' F R F' U 2L F' L' F ";
		}
		if (*r4 == 26)
		{
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "2R 2U F 2R F' 2U R' U R' ";
		}
		if (*r6 == 26)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B F' U F R' F R F' U' B' ";
		}
		if (*g4 == 26)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "B U' R U' R' U' F' U F U' B' R' 2U R ";
		}
		if (*g6 == 26)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L U F' U F R' F R F' 2U L' ";
		}
		if (*o4 == 26)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "L R U' R' F R' F' R 2U 2L B L B' ";
		}
		// **********
		if (*o6 == 44)
		{
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "F B U' B' U' R' U R 2U F' L' 2U L ";
		}
		if (*b4 == 44)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L' U' B U' B' U' R' U R 2U L ";
		}
		if (*b6 == 44)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "F' U R' U R B' R B R' U 2F R' F' R ";
		}
		if (*r4 == 44)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "F' B U' B' R B' R' B U F ";
		}
		if (*r6 == 44)
		{
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "2B 2U R 2B R' 2U B' U B' ";
		}
		if (*g6 == 44)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "L U' B U' B' R B' R' B U' 2L B L B' ";
		}
		if (*o4 == 44)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L R' U R U B U' B' U' L' ";
		}
		// **********
		if (*o6 == 46)
		{
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "F B' U B U L U' L' U' F' ";
		}
		if (*b4 == 46)
		{
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "F U' L U' L' B L' B' L U' 2F L F L' ";
		}
		if (*b6 == 46)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R U B' U B L' B L B' 2U R' ";
		}
		if (*r4 == 46)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "F' B' U B L' B L B' 2U 2F R' F' R ";
		}
		if (*r6 == 46)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R' L U' L' B L' B' L U R ";
		}
		if (*g4 == 46)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "R' U B' U B L' B L B' U 2R B' R' B ";
		}
		if (*o4 == 46)
		{
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "2L 2U B 2L B' 2U L' U L' ";
		}
	}

	plik << endl;
	plik.close();

};

void scramble(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9)
{
	for (int i = 0; i < 20; i++)
	{    //default random engine
		std::default_random_engine engine;
		engine.seed((unsigned)time(0));

		std::uniform_int_distribution<int> rand(0, 18);
		//srand(time(NULL));
		int los;
		los = rand(engine);
		switch (los)
		{
		case 0:
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			cout << "F ";
			break;
		case 1:
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			cout << "F' ";
			break;
		case 2:
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			cout << "2F ";
			break;
		case 3:
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			cout << "R ";
			break;
		case 4:
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			cout << "R' ";
			break;
		case 5:
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			cout << "2R ";
			break;
		case 6:
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			cout << "B ";
			break;
		case 7:
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			cout << "B' ";
			break;
		case 8:
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			cout << "2B ";
			break;
		case 9:
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			cout << "L ";
			break;
		case 10:
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			cout << "L' ";
			break;
		case 11:
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			cout << "2L ";
			break;
		case 12:
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			cout << "U ";
			break;
		case 13:
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			cout << "U' ";
			break;
		case 14:
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			cout << "2U ";
			break;
		case 15:
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			cout << "D ";
			break;
		case 16:
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			cout << "D' ";
			break;
		case 17:
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			cout << "2D ";
			break;
		}
		Sleep(100);
	}
	cout << endl;
}
void simpleoll(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9)
{
	fstream plik;
	plik.open("plik.txt", ios::out | ios::app);
	// ************************************ cross
	if (((*y2 == 52) || (*y2 == 54) || (*y2 == 56) || (*y2 == 58)) && ((*y4 == 52) || (*y4 == 54) || (*y4 == 56) || (*y4 == 58)) && ((*y6 == 52) || (*y6 == 54) || (*y6 == 56) || (*y6 == 58)) && ((*y8 == 52) || (*y8 == 54) || (*y8 == 56) || (*y8 == 58))) {}
	else
	{
		if (((*y4 == 52) || (*y4 == 54) || (*y4 == 56) || (*y4 == 58)) && ((*y6 == 52) || (*y6 == 54) || (*y6 == 56) || (*y6 == 58)))
		{
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "F R U R' U' F' ";
		}
		else
		{
			if (((*y8 == 52) || (*y8 == 54) || (*y8 == 56) || (*y8 == 58)) && ((*y2 == 52) || (*y2 == 54) || (*y2 == 56) || (*y2 == 58)))
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "U F R U R' U' F' ";
			}
			else
			{
				if (((*y4 == 52) || (*y4 == 54) || (*y4 == 56) || (*y4 == 58)) && ((*y2 == 52) || (*y2 == 54) || (*y2 == 56) || (*y2 == 58)))
				{
					F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
					R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
					plik << "F R U R' U' R U R' U' F' ";
				}
				else
				{
					if (((*y6 == 52) || (*y6 == 54) || (*y6 == 56) || (*y6 == 58)) && ((*y2 == 52) || (*y2 == 54) || (*y2 == 56) || (*y2 == 58)))
					{
						Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
						Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
						Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
						L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
						U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
						Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
						Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
						L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
						U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
						F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
						plik << "F' L' U' L U L' U' L U F ";
					}
					else
					{
						if (((*y6 == 52) || (*y6 == 54) || (*y6 == 56) || (*y6 == 58)) && ((*y8 == 52) || (*y8 == 54) || (*y8 == 56) || (*y8 == 58)))
						{
							Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
							Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
							Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
							U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
							Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
							U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
							plik << "U' F' L' U' L U L' U' L U F ";
						}
						else
						{
							if (((*y4 == 52) || (*y4 == 54) || (*y4 == 56) || (*y4 == 58)) && ((*y8 == 52) || (*y8 == 54) || (*y8 == 56) || (*y8 == 58)))
							{
								U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
								F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
								R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
								U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
								Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
								Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
								R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
								U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
								Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
								Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
								Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
								plik << "U F R U R' U' R U R' U' F' ";
							}
							else
							{
								R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
								UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
								RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
								F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
								R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
								Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
								UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
								Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
								F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
								R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
								Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
								plik << "R U2 R2 F R F' U2 R' F R F'  ";
							}
						}
					}
				}
			}
		}
	};
	// ******************************************  corners
	if (((*g3 == 51) || (*g3 == 53) || (*g3 == 57) || (*g3 == 59)) && ((*g1 == 51) || (*g1 == 53) || (*g1 == 57) || (*g1 == 59)) && ((*b3 == 51) || (*b3 == 53) || (*b3 == 57) || (*b3 == 59)) && ((*b1 == 51) || (*b1 == 53) || (*b1 == 57) || (*b1 == 59)))
	{
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "R 2U R' U' R U R' U' R U' R' ";
	}
	else
	{
		if (((*o3 == 51) || (*o3 == 53) || (*o3 == 57) || (*o3 == 59)) && ((*o1 == 51) || (*o1 == 53) || (*o1 == 57) || (*o1 == 59)) && ((*r3 == 51) || (*r3 == 53) || (*r3 == 57) || (*r3 == 59)) && ((*r1 == 51) || (*r1 == 53) || (*r1 == 57) || (*r1 == 59)))
		{
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "U R 2U R' U' R U R' U' R U' R' ";
		}
		else                       // *****************
		{
			if (((*b3 == 51) || (*b3 == 53) || (*b3 == 57) || (*b3 == 59)) && ((*g1 == 51) || (*g1 == 53) || (*g1 == 57) || (*g1 == 59)) && ((*o1 == 51) || (*o1 == 53) || (*o1 == 57) || (*o1 == 59)) && ((*o3 == 51) || (*o3 == 53) || (*o3 == 57) || (*o3 == 59)))
			{
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "R 2U 2R U' 2R U' 2R 2U R ";
			}
			else
			{
				if (((*o1 == 51) || (*o1 == 53) || (*o1 == 57) || (*o1 == 59)) && ((*r3 == 51) || (*r3 == 53) || (*r3 == 57) || (*r3 == 59)) && ((*b1 == 51) || (*b1 == 53) || (*b1 == 57) || (*b1 == 59)) && ((*b3 == 51) || (*b3 == 53) || (*b3 == 57) || (*b3 == 59)))
				{
					U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					plik << "U R 2U 2R U' 2R U' 2R 2U R ";
				}
				else
				{
					if (((*g3 == 51) || (*g3 == 53) || (*g3 == 57) || (*g3 == 59)) && ((*b1 == 51) || (*b1 == 53) || (*b1 == 57) || (*b1 == 59)) && ((*r1 == 51) || (*r1 == 53) || (*r1 == 57) || (*r1 == 59)) && ((*r3 == 51) || (*r3 == 53) || (*r3 == 57) || (*r3 == 59)))
					{
						UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
						R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
						UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
						RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
						Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
						RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
						Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
						RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
						UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
						R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
						plik << "2U R 2U 2R U' 2R U' 2R 2U R ";
					}
					else
					{
						if (((*o3 == 51) || (*o3 == 53) || (*o3 == 57) || (*o3 == 59)) && ((*r1 == 51) || (*r1 == 53) || (*r1 == 57) || (*r1 == 59)) && ((*g1 == 51) || (*g1 == 53) || (*g1 == 57) || (*g1 == 59)) && ((*g3 == 51) || (*g3 == 53) || (*g3 == 57) || (*g3 == 59)))
						{
							Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
							UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
							Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
							Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
							UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
							plik << "U' R 2U 2R U' 2R U' 2R 2U R ";
						}
						else {}
					}
				}
			}
		}
	};



	//**************************

	if (((*g3 == 51) || (*g3 == 53) || (*g3 == 57) || (*g3 == 59)) && ((*g1 == 51) || (*g1 == 53) || (*g1 == 57) || (*g1 == 59)))
	{
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "2R D' R 2U R' D R 2U R ";
	}
	else
	{
		if (((*r3 == 51) || (*r3 == 53) || (*r3 == 57) || (*r3 == 59)) && ((*r1 == 51) || (*r1 == 53) || (*r1 == 57) || (*r1 == 59)))
		{
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "U' 2R D' R 2U R' D R 2U R ";
		}
		else
		{
			if (((*b3 == 51) || (*b3 == 53) || (*b3 == 57) || (*b3 == 59)) && ((*b1 == 51) || (*b1 == 53) || (*b1 == 57) || (*b1 == 59)))
			{
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "2U 2R D' R 2U R' D R 2U R ";
			}
			else
			{
				if (((*o3 == 51) || (*o3 == 53) || (*o3 == 57) || (*o3 == 59)) && ((*o1 == 51) || (*o1 == 53) || (*o1 == 57) || (*o1 == 59)))
				{
					U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
					R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
					R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					plik << "U 2R D' R 2U R' D R 2U R ";
				}
			}
		}
	};
	//************************


	if (((*g1 == 51) || (*g1 == 53) || (*g1 == 57) || (*g1 == 59)) && ((*b3 == 51) || (*b3 == 53) || (*b3 == 57) || (*b3 == 59)))
	{
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "2U L F R' F' L' F R F' ";
	}
	else
	{
		if (((*o1 == 51) || (*o1 == 53) || (*o1 == 57) || (*o1 == 59)) && ((*r3 == 51) || (*r3 == 53) || (*r3 == 57) || (*r3 == 59)))
		{
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "U' L F R' F' L' F R F' ";
		}
		else
		{
			if (((*b1 == 51) || (*b1 == 53) || (*b1 == 57) || (*b1 == 59)) && ((*g3 == 51) || (*g3 == 53) || (*g3 == 57) || (*g3 == 59)))
			{
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "L F R' F' L' F R F' ";
			}
			else
			{
				if (((*r1 == 51) || (*r1 == 53) || (*r1 == 57) || (*r1 == 59)) && ((*o3 == 51) || (*o3 == 53) || (*o3 == 57) || (*o3 == 59)))
				{
					U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
					F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
					Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
					Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
					F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
					R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
					plik << "U L F R' F' L' F R F' ";
				}
			}
		}
	};

	//************************

	if (((*b1 == 51) || (*b1 == 53) || (*b1 == 57) || (*b1 == 59)) && ((*o1 == 51) || (*o1 == 53) || (*o1 == 57) || (*o1 == 59)) && ((*g1 == 51) || (*g1 == 53) || (*g1 == 57) || (*g1 == 59)))
	{
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "L' U' L U' L' 2U L ";
	};
	if (((*o1 == 51) || (*o1 == 53) || (*o1 == 57) || (*o1 == 59)) && ((*g1 == 51) || (*g1 == 53) || (*g1 == 57) || (*g1 == 59)) && ((*r1 == 51) || (*r1 == 53) || (*r1 == 57) || (*r1 == 59)))
	{
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "B' U' B U' B' 2U B ";
	};
	if (((*g1 == 51) || (*g1 == 53) || (*g1 == 57) || (*g1 == 59)) && ((*r1 == 51) || (*r1 == 53) || (*r1 == 57) || (*r1 == 59)) && ((*b1 == 51) || (*b1 == 53) || (*b1 == 57) || (*b1 == 59)))
	{
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "R' U' R U' R' 2U R ";
	};
	if (((*r1 == 51) || (*r1 == 53) || (*r1 == 57) || (*r1 == 59)) && ((*b1 == 51) || (*b1 == 53) || (*b1 == 57) || (*b1 == 59)) && ((*o1 == 51) || (*o1 == 53) || (*o1 == 57) || (*o1 == 59)))
	{
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "F' U' F U' F' 2U F ";
	};
	//********************
	if (((*b3 == 51) || (*b3 == 53) || (*b3 == 57) || (*b3 == 59)) && ((*o3 == 51) || (*o3 == 53) || (*o3 == 57) || (*o3 == 59)) && ((*g3 == 51) || (*g3 == 53) || (*g3 == 57) || (*g3 == 59)))
	{
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "L U L' U L 2U L' ";
	};
	if (((*o3 == 51) || (*o3 == 53) || (*o3 == 57) || (*o3 == 59)) && ((*g3 == 51) || (*g3 == 53) || (*g3 == 57) || (*g3 == 59)) && ((*r3 == 51) || (*r3 == 53) || (*r3 == 57) || (*r3 == 59)))
	{
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "B U B' U B 2U B' ";
	};
	if (((*g3 == 51) || (*g3 == 53) || (*g3 == 57) || (*g3 == 59)) && ((*r3 == 51) || (*r3 == 53) || (*r3 == 57) || (*r3 == 59)) && ((*b3 == 51) || (*b3 == 53) || (*b3 == 57) || (*b3 == 59)))
	{
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "R U R' U R 2U R' ";
	};
	if (((*r3 == 51) || (*r3 == 53) || (*r3 == 57) || (*r3 == 59)) && ((*b3 == 51) || (*b3 == 53) || (*b3 == 57) || (*b3 == 59)) && ((*o3 == 51) || (*o3 == 53) || (*o3 == 57) || (*o3 == 59)))
	{
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "F U F' U F 2U F' ";
	};
	// *******************
	if (((*b1 == 51) || (*b1 == 53) || (*b1 == 57) || (*b1 == 59)) && ((*r3 == 51) || (*r3 == 53) || (*r3 == 57) || (*r3 == 59)))
	{
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		plik << "R' F R B' R' F' R B ";
	};
	if (((*r1 == 51) || (*r1 == 53) || (*r1 == 57) || (*r1 == 59)) && ((*g3 == 51) || (*g3 == 53) || (*g3 == 57) || (*g3 == 59)))
	{
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		plik << "B' R B L' B' R' B L ";
	};
	if (((*g1 == 51) || (*g1 == 53) || (*g1 == 57) || (*g1 == 59)) && ((*o3 == 51) || (*o3 == 53) || (*o3 == 57) || (*o3 == 59)))
	{
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "L' B L F' L' B' L F ";
	};
	if (((*o1 == 51) || (*o1 == 53) || (*o1 == 57) || (*o1 == 59)) && ((*b3 == 51) || (*b3 == 53) || (*b3 == 57) || (*b3 == 59)))
	{
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "F' L F R' F' L' F R ";
	};

	plik << endl;
	plik.close();
}

void simplepll(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9)
{
	fstream plik;
	plik.open("plik.txt", ios::out | ios::app);     //  if(*o1==11&&*o2==12&&*o3==13&&*b1==21&&*b2==22&&*b3==23&&*r1==31&&*r2==32&&*r3==33&&*g1==41&&*g2==42&&*g3==43)

	if ((*o2 == 12 && *b2 == 22 && *r2 == 32 && *g2 == 42) || (*o2 == 22 && *b2 == 32 && *r2 == 42 && *g2 == 12) || (*o2 == 32 && *b2 == 42 && *r2 == 12 && *g2 == 22) || (*o2 == 42 && *b2 == 12 && *r2 == 22 && *g2 == 32)) {}
	else {
		if ((*o2 == 12 && *b2 == 22) || (*o2 == 22 && *b2 == 32) || (*o2 == 32 && *b2 == 42) || (*o2 == 42 && *b2 == 12) || (*o2 == 12 && *g2 == 42) || (*o2 == 22 && *g2 == 12) || (*o2 == 32 && *g2 == 22) ||
			(*o2 == 42 && *g2 == 32) || (*r2 == 32 && *b2 == 22) || (*r2 == 42 && *b2 == 32) || (*r2 == 12 && *b2 == 42) || (*r2 == 22 && *b2 == 12) || (*r2 == 12 && *g2 == 22) || (*r2 == 22 && *g2 == 32) ||
			(*r2 == 32 && *g2 == 42) || (*r2 == 42 && *g2 == 12)) {
			if (*o2 == 12 && *b2 == 22) {
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "L U' R' U L' 2U R U' R' 2U R ";
			}
			else {
				if (*o2 == 22 && *b2 == 32) {
					L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
					Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
					UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
					Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
					plik << "L U' R' U L' 2U R U' R' 2U R U' ";
				}
				else {
					if (*o2 == 32 && *b2 == 42) {
						L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
						Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
						Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
						U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
						Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
						UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
						R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
						Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
						Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
						UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
						R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
						UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
						plik << "L U' R' U L' 2U R U' R' 2U R 2U ";
					}
					else {
						if (*o2 == 42 && *b2 == 12) {
							L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
							Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
							U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
							UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
							Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
							UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
							U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
							plik << "L U' R' U L' 2U R U' R' 2U R U ";
						}
						else {
							if (*o2 == 12 && *g2 == 42) {
								Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
								L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
								Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
								Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
								U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
								Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
								UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
								R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
								Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
								Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
								UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
								R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
								U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
								plik << "U' L U' R' U L' 2U R U' R' 2U R U ";
							}
							else {
								if (*o2 == 22 && *g2 == 12) {
									Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
									L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
									Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
									Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
									U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
									Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
									UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
									R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
									Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
									Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
									UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
									R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
									plik << "U' L U' R' U L' 2U R U' R' 2U R ";
								}
								else {
									if (*o2 == 32 && *g2 == 22) {
										Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
										L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
										Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
										Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
										U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
										Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
										UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
										R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
										Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
										Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
										UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
										R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
										Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
										plik << "U' L U' R' U L' 2U R U' R' 2U R U' ";
									}
									else {
										if (*o2 == 42 && *g2 == 32) {
											Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
											L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
											Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
											Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
											U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
											Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
											UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
											R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
											Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
											Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
											UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
											R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
											UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
											plik << "U' L U' R' U L' 2U R U' R' 2U R 2U ";
										}
										else {
											if (*r2 == 32 && *b2 == 22) {
												Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
												U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
												L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
												Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
												R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
												UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
												Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
												U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
												L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
												UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
												Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
												plik << "R' U L U' R 2U L' U L 2U L' ";
											}
											else {
												if (*r2 == 42 && *b2 == 32) {
													Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
													U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
													L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
													Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
													R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
													UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
													Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
													U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
													L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
													UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
													Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
													Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
													plik << "R' U L U' R 2U L' U L 2U L' Up ";
												}
												else {
													if (*r2 == 12 && *b2 == 42) {
														Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
														U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
														L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
														Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
														R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
														UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
														Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
														U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
														L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
														UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
														Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
														UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
														plik << "R' U L U' R 2U L' U L 2U L' 2U ";
													}
													else {
														if (*r2 == 22 && *b2 == 12) {
															Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
															U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
															L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
															Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
															R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
															UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
															Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
															U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
															L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
															UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
															Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
															U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
															plik << "R' U L U' R 2U L' U L 2U L' U ";
														}
														else {
															if (*r2 == 12 && *g2 == 22) {
																U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
																U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
																UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																plik << "U R' U L U' R 2U L' U L 2U L' U ";
															}
															else {
																if (*r2 == 22 && *g2 == 32) {
																	U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																	Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
																	U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																	L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																	Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																	R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
																	UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																	Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																	U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																	L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																	UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																	Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																	plik << "U R' U L U' R 2U L' U L 2U L' ";
																}
																else {
																	if (*r2 == 32 && *g2 == 42) {
																		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
																		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
																		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																		L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																		Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																		plik << "U R' U L U' R 2U L' U L 2U L' U' ";
																	}
																	else {
																		if (*r2 == 42 && *g2 == 12) {
																			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
																			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
																			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
																			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
																			plik << "U R' U L U' R 2U L' U L 2U L' 2U ";
																		}
																		else {
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			//******
		}
		else {
			if (((*b2 == 22 || *b2 == 42) && (*g2 == 22 || *g2 == 42)) || ((*b2 == 12 || *b2 == 32) && (*g2 == 12 || *g2 == 32)))
			{
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "R U R' U' R' F R2 U' R' U' R U R' F' ";
			}
		}
	}
	if (*o2 == 12 && *b2 == 22 && *r2 == 32 && *g2 == 42) {}
	else
	{
		if (*o2 == 22 && *b2 == 32 && *r2 == 42 && *g2 == 12)
		{
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			plik << "U' ";
		}
		if (*o2 == 32 && *b2 == 42 && *r2 == 12 && *g2 == 22)
		{
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			plik << "2U ";
		}
		if (*o2 == 42 && *b2 == 12 && *r2 == 22 && *g2 == 32)
		{
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			plik << "U ";
		}
	}
	// perm H
	if (*b1 == 41 && *b3 == 43 && *r1 == 11 && *r3 == 13 && *g1 == 21 && *g3 == 23 && *o1 == 31 && *o3 == 33)
	{
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		plik << "R2 U2 R U2 R2 U2 R2 U2 R U2 R2 2U ";
	}
	//perm Z
	if (*b1 == 11 && *b3 == 33 && *r1 == 41 && *r3 == 23 && *g1 == 31 && *g3 == 13 && *o1 == 21 && *o3 == 43)
	{
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		plik << "R B' R' F R B R' F' R B R' F R B' R' F' ";
	}
	if (*b1 == 31 && *b3 == 13 && *r1 == 21 && *r3 == 43 && *g1 == 11 && *g3 == 33 && *o1 == 41 && *o3 == 23)
	{
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		plik << "U' R B' R' F R B R' F' R B R' F R B' R' F' U ";
	}
	// perm A
	if (*o1 == 41 && *o2 == 12 && *o3 == 13 && *b1 == 21 && *b2 == 22 && *b3 == 43 && *r1 == 11 && *r2 == 32 && *r3 == 23 && *g1 == 31 && *g2 == 42 && *g3 == 33)
	{
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "R' F R' 2B R F' R' 2B 2R ";
	}
	if (*o1 == 41 && *o2 == 12 && *o3 == 43 && *b1 == 11 && *b2 == 22 && *b3 == 23 && *r1 == 31 && *r2 == 32 && *r3 == 13 && *g1 == 21 && *g2 == 42 && *g3 == 33)
	{
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		plik << "U R' F R' 2B R F' R' 2B 2R U' ";
	}
	if (*o1 == 31 && *o2 == 12 && *o3 == 43 && *b1 == 11 && *b2 == 22 && *b3 == 13 && *r1 == 21 && *r2 == 32 && *r3 == 33 && *g1 == 41 && *g2 == 42 && *g3 == 23)
	{
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		plik << "2U R' F R' 2B R F' R' 2B 2R 2U ";
	}
	if (*o1 == 11 && *o2 == 12 && *o3 == 33 && *b1 == 41 && *b2 == 22 && *b3 == 13 && *r1 == 21 && *r2 == 32 && *r3 == 23 && *g1 == 31 && *g2 == 42 && *g3 == 43)
	{
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		plik << "U' R' F R' 2B R F' R' 2B 2R U ";
	}
	// perm A reverse
	if (*o1 == 31 && *o2 == 12 && *o3 == 13 && *b1 == 21 && *b2 == 22 && *b3 == 33 && *r1 == 41 && *r2 == 32 && *r3 == 43 && *g1 == 11 && *g2 == 42 && *g3 == 23)
	{
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		plik << "2R 2B R F R' 2B R F' R ";
	}
	if (*o1 == 21 && *o2 == 12 && *o3 == 33 && *b1 == 41 && *b2 == 22 && *b3 == 23 && *r1 == 31 && *r2 == 32 && *r3 == 43 && *g1 == 11 && *g2 == 42 && *g3 == 13)
	{
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		plik << "U 2R 2B R F R' 2B R F' R U' ";
	}
	if (*o1 == 21 && *o2 == 12 && *o3 == 23 && *b1 == 31 && *b2 == 22 && *b3 == 43 && *r1 == 11 && *r2 == 32 && *r3 == 33 && *g1 == 41 && *g2 == 42 && *g3 == 13)
	{
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		plik << "2U 2R 2B R F R' 2B R F' R 2U ";
	}
	if (*o1 == 11 && *o2 == 12 && *o3 == 23 && *b1 == 31 && *b2 == 22 && *b3 == 33 && *r1 == 41 && *r2 == 32 && *r3 == 13 && *g1 == 21 && *g2 == 42 && *g3 == 43)
	{
		Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
		R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
		U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
		plik << "U' 2R 2B R F R' 2B R F' R U ";
	}

	plik << endl;
	plik.close();
}






void czytaj(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9)
{
	//system("color 09");
	//HANDLE hOut;

	cout << "Czytam po³o¿enie:  ***********************************" << endl
		<< "           " << *y1 << " " << *y2 << " " << *y3 << endl << "           " << *y4 << " " << *y5 << " " << *y6 << endl << "           " << *y7 << " " << *y8 << " " << *y9 << endl
		<< *o1 << " " << *o2 << " " << *o3 << "   " << *b1 << " " << *b2 << " " << *b3 << "   " << *r1 << " " << *r2 << " " << *r3 << "   " << *g1 << " " << *g2 << " " << *g3 << endl
		<< *o4 << " " << *o5 << " " << *o6 << "   " << *b4 << " " << *b5 << " " << *b6 << "   " << *r4 << " " << *r5 << " " << *r6 << "   " << *g4 << " " << *g5 << " " << *g6 << endl
		<< *o7 << " " << *o8 << " " << *o9 << "   " << *b7 << " " << *b8 << " " << *b9 << "   " << *r7 << " " << *r8 << " " << *r9 << "   " << *g7 << " " << *g8 << " " << *g9 << endl
		<< "           " << *w1 << " " << *w2 << " " << *w3 << endl << "           " << *w4 << " " << *w5 << " " << *w6 << endl << "           " << *w7 << " " << *w8 << " " << *w9 << endl
		<< "*****************************************************" << endl;

	string softset, blueone, redone, greenone, orangeone, corners, edges, simpleoll, simplepll;
	string linia;
	int nr_linii = 1;
	fstream plik;
	plik.open("plik.txt", ios::in);
	while (getline(plik, linia))
	{
		switch (nr_linii)
		{
		case 1:
			softset = linia;
			break;
		case 2:
			blueone = linia;
			break;
		case 3:
			redone = linia;
			break;
		case 4:
			greenone = linia;
			break;
		case 5:
			orangeone = linia;
			break;
		case 6:
			corners = linia;
			break;
		case 7:
			edges = linia;
			break;
		case 8:
			simpleoll = linia;
			break;
		case 9:
			simplepll = linia;
			break;
		}
		nr_linii++;
	};
	cout << "Simple pre-set                :   " << softset << endl
		<< "Blue base block               :   " << blueone << endl
		<< "Red base block                :   " << redone << endl
		<< "Green base block              :   " << greenone << endl
		<< "Orange base block             :   " << orangeone << endl
		<< "Corners of the base           :   " << corners << endl
		<< "Edges                         :   " << edges << endl
		<< "Simple last layer orientation :   " << simpleoll << endl
		<< "Permutation last layer        :   " << simplepll << endl;
	plik.close();
}
//void completetest(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
//	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
//	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
//	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
//	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
//	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9)
//{
//	if (*o1 == 11 && *o2 == 12 && *o3 == 13 && *o4 == 14 && *o5 == 15 && *o6 == 16 && *o7 == 17 && *o8 == 18 && *o9 == 19 &&
//		*b1 == 21 && *b2 == 22 && *b3 == 23 && *b4 == 24 && *b5 == 25 && *b6 == 26 && *b7 == 27 && *b8 == 28 && *b9 == 29 &&
//		*r1 == 31 && *r2 == 32 && *r3 == 33 && *r4 == 34 && *r5 == 35 && *r6 == 36 && *r7 == 37 && *r8 == 38 && *r9 == 39 &&
//		*g1 == 41 && *g2 == 42 && *g3 == 43 && *g4 == 44 && *g5 == 45 && *g6 == 46 && *g7 == 47 && *g8 == 48 && *g9 == 49 &&
//		*y1 == 51 && *y2 == 52 && *y3 == 53 && *y4 == 54 && *y5 == 55 && *y6 == 56 && *y7 == 57 && *y8 == 58 && *y9 == 59 &&
//		*w1 == 61 && *w2 == 62 && *w3 == 63 && *w4 == 64 && *w5 == 65 && *w6 == 66 && *w7 == 67 && *w8 == 68 && *w9 == 69)
//	{
//	}
//	else { _getch(); }
//
//}
void solve(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9)
{
	softset(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9);
	blueone(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9);
	redone(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9);
	greenone(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9);
	orangeone(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9);
	softcorners(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9);
	edges(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9);
	simpleoll(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9);
	simplepll(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9);
}
void plikreset()
{
	fstream plik;
	plik.open("plik.txt", ios::out | ios::trunc);
	plik << "";
	plik.close();
}
*/