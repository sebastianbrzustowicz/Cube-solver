#pragma once
//#include "Myform.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <time.h>
#include <cstdlib>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <dos.h>
#include <limits>
#include <random>
#include <stdio.h>
#include <stdlib.h>

public class zmienne1
{ 
public: 
	int Oswap, swap11, swap12, swap13, swap14, swap16, swap17, swap18, swap19, 
		       swap21, swap22, swap23, swap24, swap26, swap27, swap28, swap29,
		       swap31, swap32, swap33, swap34, swap36, swap37, swap38, swap39, 
       		   swap41, swap42, swap43, swap44, swap46, swap47, swap48, swap49, 
		       swap51, swap52, swap53, swap54, swap56, swap57, swap58, swap59, 
		       swap61, swap62, swap63, swap64, swap66, swap67, swap68, swap69,
		       swap01, swap02, swap03, swap04, swap05, swapc06, swapc07, swapc08, swapc09,
        	   swapc10, swapc11, swapc12, swapc13, swapc14, swapc15, swapc16, swapc17, swapc18,
		       swapc19, swapc20, swapc21, swapc22, swapc23, swapc24, swapc25, swapc26, swapc27,
		       swapc28, swapc29, swapc30, swapc31, swapc32, swapc33, swapc34, swapc35, swapc36, swapc37,
		       swape01, swape02, swape03, swape04, swape05, swape06, swape07, swape08, swape09, swape10,
	 	       swape11, swape12, swape13, swape14, swape15, swape16, swape17, swape18, swape19, swape20,
       		   swape21, swape22, swape23, swape24, swape25, swape26, swape27, swape28, swape29, swape30,
		       swape31, swape32,
		       swapo01, swapo02, swapo03, swapo04, swapo05, swapo06, swapo07, swapo08, swapo09, swapo10,
		       swapo11, swapo12, swapo13, swapo14, swapo15, swapo16,
		       swapp01, swapp02, swapp03, swapp04, swapp05, swapp06, swapp07, swapp08, swapp09, swapp10,
		       swapp11, swapp12, swapp13, swapp14,
		       swape0,
		licznik11,	licznik12,	licznik13,	licznik14,	licznik16,	licznik17,	licznik18,
	licznik19,	licznik21,	licznik22,	licznik23,	licznik24,	licznik26,	licznik27,	licznik28,	licznik29,	licznik31,	licznik32,
	licznik33,	licznik34,	licznik36,	licznik37,	licznik38,	licznik39,	licznik41,	licznik42,	licznik43,	licznik44,	licznik46,
	licznik47,	licznik48,	licznik49,	licznik51,	licznik52,	licznik53,	licznik54,	licznik56,	licznik57,	licznik58,	licznik59,
	licznik61,	licznik62,	licznik63,	licznik64,	licznik66,	licznik67,	licznik68,	licznik69,swapt,zmiennatest,licznikruchow,progress,
		czasbufor,minutesbufor,secondsbufor,milisecondsbufor,bestminutes,bestseconds,bestmiliseconds,minutes1,minutes2,minutes3,minutes4,minutes5,
		seconds1,seconds2,seconds3,seconds4,seconds5,miliseconds1,miliseconds2,miliseconds3,miliseconds4,miliseconds5,avgseconds,avgminutes,avgmiliseconds,avgbufor,
		liczbaulozen,bestavgminutes,bestavgseconds,bestavgmiliseconds,scrrepeat;
	zmienne1()
	{
		liczbaulozen = 0; bestavgminutes = 0; bestavgseconds = 0; bestavgmiliseconds = 0;
		avgseconds = 0; avgmiliseconds = 0; avgminutes = 0; avgbufor = 0;
		minutes1 = 0; minutes2 = 0; minutes3 = 0; minutes4 = 0; minutes5 = 0;
			seconds1 = 0; seconds2 = 0; seconds3 = 0; seconds4 = 0; seconds5 = 0; miliseconds1 = 0; miliseconds2 = 0; miliseconds3 = 0; miliseconds4 = 0; miliseconds5 = 0;
		bestminutes = 0;
		bestseconds = 0;
		bestmiliseconds = 0;
		minutesbufor = 0;
		secondsbufor = 0;
		milisecondsbufor = 0;
		czasbufor = 0;
		progress = 0;
		zmiennatest = 0;
		licznik11 = 1;
		licznik12 = 1;
		licznik13 = 1;
		licznik14 = 1;
		licznik16 = 1;
		licznik17 = 1;
		licznik18 = 1;
		licznik19 = 1;
		licznik21 = 2;
		licznik22 = 2;
		licznik23 = 2;
		licznik24 = 2;
		licznik26 = 2;
		licznik27 = 2;
		licznik28 = 2;
		licznik29 = 2;
		licznik31 = 3;
		licznik32 = 3;
		licznik33 = 3;
		licznik34 = 3;
		licznik36 = 3;
		licznik37 = 3;
		licznik38 = 3;
		licznik39 = 3;
		licznik41 = 4;
		licznik42 = 4;
		licznik43 = 4;
		licznik44 = 4;
		licznik46 = 4;
		licznik47 = 4;
		licznik48 = 4;
		licznik49 = 4;
		licznik51 = 5;
		licznik52 = 5;
		licznik53 = 5;
		licznik54 = 5;
		licznik56 = 5;
		licznik57 = 5;
		licznik58 = 5;
		licznik59 = 5;
		licznik61 = 6;
		licznik62 = 6;
		licznik63 = 6;
		licznik64 = 6;
		licznik66 = 6;
		licznik67 = 6;
		licznik68 = 6;
		licznik69 = 6;
		swapt = 0;
		Oswap = 0;
		swap01 = 0;
		swap02 = 0;
		swap03 = 0;
		swap04 = 0;
		swap05 = 0;
		swapc06 = 0;
		swapc07 = 0;
		swapc08 = 0;
		swapc09 = 0;
		swapc10 = 0;
		swapc11 = 0;
		swapc12 = 0;
		swapc13 = 0;
		swapc14 = 0;
		swapc15 = 0;
		swapc16 = 0;
		swapc17 = 0;
		swapc18 = 0;
		swapc19 = 0;
		swapc20 = 0;
		swapc21 = 0;
		swapc22 = 0;
		swapc23 = 0;
		swapc24 = 0;
		swapc25 = 0;
		swapc26 = 0;
		swapc27 = 0;
		swapc28 = 0;
		swapc29 = 0;
		swapc30 = 0;
		swapc31 = 0;
		swapc32 = 0;
		swapc33 = 0;
		swapc34 = 0;
		swapc35 = 0;
		swapc36 = 0;
		swapc37 = 0;
		swape11 = 0, swape12 = 0, swape13=0, swape14=0, swape15=0, swape16=0, swape17=0, swape18=0, swape19=0, swape20=0,
			swape21=0, swape22=0, swape23=0, swape24=0, swape25=0, swape26=0, swape27=0, swape28=0, swape29=0, swape30=0,
			swape31=0, swape32=0,
		    swapo01 = 0, swapo02=0, swapo03=0, swapo04=0, swapo05=0, swapo06=0, swapo07=0, swapo08=0, swapo09=0, swapo10=0,
			swapo11=0, swapo12=0, swapo13=0, swapo14=0, swapo15=0, swapo16=0,
			swapp01=0, swapp02=0, swapp03=0, swapp04=0, swapp05=0, swapp06=0, swapp07=0, swapp08=0, swapp09=0, swapp10=0,
			swapp11=0, swapp12=0, swapp13=0, swapp14=0;
		licznikruchow = 0; scrrepeat=0;
	}
};
public class orange
{
public:
	int o1, o2, o3, o4, o5, o6, o7, o8, o9;
	orange()
	{
		o1 = 11;
		o2 = 12;
		o3 = 13;
		o4 = 14;
		o5 = 15;
		o6 = 16;
		o7 = 17;
		o8 = 18;
		o9 = 19;
	}
};
public class yellow
{
public:
	int y1, y2, y3, y4, y5, y6, y7, y8, y9;
	yellow()
	{
		y1 = 51;
		y2 = 52;
		y3 = 53;
		y4 = 54;
		y5 = 55;
		y6 = 56;
		y7 = 57;
		y8 = 58;
		y9 = 59;
	}

};
public class white
{
public:
	int w1, w2, w3, w4, w5, w6, w7, w8, w9;
	white()
	{
		w1 = 61;
		w2 = 62;
		w3 = 63;
		w4 = 64;
		w5 = 65;
		w6 = 66;
		w7 = 67;
		w8 = 68;
		w9 = 69;
	}
};
public class blue
{
public:
	int b1, b2, b3, b4, b5, b6, b7, b8, b9;
	blue()
	{
		b1 = 21;
		b2 = 22;
		b3 = 23;
		b4 = 24;
		b5 = 25;
		b6 = 26;
		b7 = 27;
		b8 = 28;
		b9 = 29;
	}

};

public class green
{
public:
	int g1, g2, g3, g4, g5, g6, g7, g8, g9;
	green()
	{
		g1 = 41;
		g2 = 42;
		g3 = 43;
		g4 = 44;
		g5 = 45;
		g6 = 46;
		g7 = 47;
		g8 = 48;
		g9 = 49;
	}
};
public class red
{
public:
	int r1, r2, r3, r4, r5, r6, r7, r8, r9;
	red()
	{
		r1 = 31;
		r2 = 32;
		r3 = 33;
		r4 = 34;
		r5 = 35;
		r6 = 36;
		r7 = 37;
		r8 = 38;
		r9 = 39;
	}

};
zmienne1* objzmienna = new zmienne1;
orange* scianao = new orange;
blue* scianab = new blue;
red* scianar = new red;
green* scianag = new green;
yellow* scianay = new yellow;
white* scianaw = new white;
void swap(int *pierwsza, int *druga)
{
	int swap;
	swap = *pierwsza;
	*pierwsza = *druga;
	*druga = swap;
}
void F(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* w1, int* w2, int* w3,
	int* r7, int* r4, int* r1,
	int* y9, int* y8, int* y7,
	int* o3, int* o6, int* o9)
{
	int pom; objzmienna->licznikruchow += 1;
pom = objzmienna->licznik13; objzmienna->licznik13 = objzmienna->licznik61; objzmienna->licznik61 = objzmienna->licznik37;
objzmienna->licznik37 = objzmienna->licznik59; objzmienna->licznik59 = pom;
pom = objzmienna->licznik16; objzmienna->licznik16 = objzmienna->licznik62; objzmienna->licznik62 = objzmienna->licznik34;
objzmienna->licznik34 = objzmienna->licznik58; objzmienna->licznik58 = pom;
pom = objzmienna->licznik19; objzmienna->licznik19 = objzmienna->licznik63; objzmienna->licznik63 = objzmienna->licznik31;
objzmienna->licznik31 = objzmienna->licznik57; objzmienna->licznik57 = pom;

pom = objzmienna->licznik21;
objzmienna->licznik21 = objzmienna->licznik27;
objzmienna->licznik27 = objzmienna->licznik29;
objzmienna->licznik29 = objzmienna->licznik23;
objzmienna->licznik23 = pom;
pom = objzmienna->licznik22;
objzmienna->licznik22 = objzmienna->licznik24;
objzmienna->licznik24 = objzmienna->licznik28;
objzmienna->licznik28 = objzmienna->licznik26;
objzmienna->licznik26 = pom;
    swap(w1, r7);
    swap(r7, y9);
    swap(y9, o3);
    swap(w2, r4);
    swap(r4, y8);
	swap(y8, o6);
	swap(w3, r1);
	swap(r1, y7);
	swap(y7, o9);
	swap(b1, b7);
	swap(b7, b9);
	swap(b9, b3);
	swap(b4, b8);
	swap(b8, b6);
	swap(b6, b2);
}
void Fp(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* w1, int* w2, int* w3,
	int* r7, int* r4, int* r1,
	int* y9, int* y8, int* y7,
	int* o3, int* o6, int* o9)
{// to ma dziedziczyæ jak swap
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik13; objzmienna->licznik13 = objzmienna->licznik59; objzmienna->licznik59 = objzmienna->licznik37; 
	objzmienna->licznik37 = objzmienna->licznik61; objzmienna->licznik61 = pom;
	pom = objzmienna->licznik16; objzmienna->licznik16 = objzmienna->licznik58; objzmienna->licznik58 = objzmienna->licznik34;
	objzmienna->licznik34 = objzmienna->licznik62; objzmienna->licznik62 = pom;
	pom = objzmienna->licznik19; objzmienna->licznik19 = objzmienna->licznik57; objzmienna->licznik57 = objzmienna->licznik31;
	objzmienna->licznik31 = objzmienna->licznik63; objzmienna->licznik63 = pom;

	pom = objzmienna->licznik21;
	objzmienna->licznik21 = objzmienna->licznik23;
	objzmienna->licznik23 = objzmienna->licznik29;
	objzmienna->licznik29 = objzmienna->licznik27;
	objzmienna->licznik27 = pom;
	pom = objzmienna->licznik22;
	objzmienna->licznik22 = objzmienna->licznik26;
	objzmienna->licznik26 = objzmienna->licznik28;
	objzmienna->licznik28 = objzmienna->licznik24;
	objzmienna->licznik24 = pom;

	for (int i = 0; i < 3; i++)
	{
		swap(w1, r7);
		swap(r7, y9);
		swap(y9, o3);
		swap(w2, r4);
		swap(r4, y8);
		swap(y8, o6);
		swap(w3, r1);
		swap(r1, y7);
		swap(y7, o9);
		swap(b1, b7);
		swap(b7, b9);
		swap(b9, b3);
		swap(b4, b8);
		swap(b8, b6);
		swap(b6, b2);
	}
}
void FF(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* w1, int* w2, int* w3,
	int* r7, int* r4, int* r1,
	int* y9, int* y8, int* y7,
	int* o3, int* o6, int* o9)
{
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik13; objzmienna->licznik13 = objzmienna->licznik37; objzmienna->licznik37 = pom; 
	pom = objzmienna->licznik59; objzmienna->licznik59 = objzmienna->licznik61; objzmienna->licznik61 = pom;

	pom = objzmienna->licznik58; objzmienna->licznik58 = objzmienna->licznik62; objzmienna->licznik62 = pom;
	pom = objzmienna->licznik16; objzmienna->licznik16 = objzmienna->licznik34; objzmienna->licznik34 = pom;

	pom = objzmienna->licznik19; objzmienna->licznik19 = objzmienna->licznik31; objzmienna->licznik31 = pom;
	pom = objzmienna->licznik57; objzmienna->licznik57 = objzmienna->licznik63; objzmienna->licznik63 = pom;

	pom = objzmienna->licznik22; objzmienna->licznik22 = objzmienna->licznik28; objzmienna->licznik28 = pom;
	pom = objzmienna->licznik24; objzmienna->licznik24 = objzmienna->licznik26; objzmienna->licznik26 = pom;
	pom = objzmienna->licznik21; objzmienna->licznik21 = objzmienna->licznik29; objzmienna->licznik29 = pom;
	pom = objzmienna->licznik23; objzmienna->licznik23 = objzmienna->licznik27; objzmienna->licznik27 = pom;

	for (int i = 0; i < 2; i++)
	{
		swap(w1, r7);
		swap(r7, y9);
		swap(y9, o3);
		swap(w2, r4);
		swap(r4, y8);
		swap(y8, o6);
		swap(w3, r1);
		swap(r1, y7);
		swap(y7, o9);
		swap(b1, b7);
		swap(b7, b9);
		swap(b9, b3);
		swap(b4, b8);
		swap(b8, b6);
		swap(b6, b2);
	}
}

void R(int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* w3, int* w6, int* w9,
	int* g7, int* g4, int* g1,
	int* y3, int* y6, int* y9,
	int* b3, int* b6, int* b9)
{
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik23; 
	objzmienna->licznik23 = objzmienna->licznik63; 
	objzmienna->licznik63 = objzmienna->licznik47;
	objzmienna->licznik47 = objzmienna->licznik53; 
	objzmienna->licznik53 = pom;
	pom = objzmienna->licznik26; 
	objzmienna->licznik26 = objzmienna->licznik66; 
	objzmienna->licznik66 = objzmienna->licznik44;
	objzmienna->licznik44 = objzmienna->licznik56; 
	objzmienna->licznik56 = pom;
	pom = objzmienna->licznik29; 
	objzmienna->licznik29 = objzmienna->licznik69;
	objzmienna->licznik69 = objzmienna->licznik41;
	objzmienna->licznik41 = objzmienna->licznik59; 
	objzmienna->licznik59 = pom;

	pom = objzmienna->licznik31;
	objzmienna->licznik31 = objzmienna->licznik37;
	objzmienna->licznik37 = objzmienna->licznik39;
	objzmienna->licznik39 = objzmienna->licznik33;
	objzmienna->licznik33 = pom;
	pom = objzmienna->licznik32;
	objzmienna->licznik32 = objzmienna->licznik34;
	objzmienna->licznik34 = objzmienna->licznik38;
	objzmienna->licznik38 = objzmienna->licznik36;
	objzmienna->licznik36 = pom;

	swap(w3, g7);
	swap(g7, y3);
	swap(y3, b3);
	swap(w6, g4);
	swap(g4, y6);
	swap(y6, b6);
	swap(w9, g1);
	swap(g1, y9);
	swap(y9, b9);
	swap(r1, r7);
	swap(r7, r9);
	swap(r9, r3);
	swap(r4, r8);
	swap(r8, r6);
	swap(r6, r2);
}

void Rp(int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* w3, int* w6, int* w9,
	int* g7, int* g4, int* g1,
	int* y3, int* y6, int* y9,
	int* b3, int* b6, int* b9)
{
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik23; 
	objzmienna->licznik23 = objzmienna->licznik53; 
	objzmienna->licznik53 = objzmienna->licznik47;
	objzmienna->licznik47 = objzmienna->licznik63; 
	objzmienna->licznik63 = pom;
	pom = objzmienna->licznik26; 
	objzmienna->licznik26 = objzmienna->licznik56; 
	objzmienna->licznik56 = objzmienna->licznik44;
	objzmienna->licznik44 = objzmienna->licznik66; 
	objzmienna->licznik66 = pom;
	pom = objzmienna->licznik29; 
	objzmienna->licznik29 = objzmienna->licznik59; 
	objzmienna->licznik59 = objzmienna->licznik41;
	objzmienna->licznik41 = objzmienna->licznik69; 
	objzmienna->licznik69 = pom;

	pom = objzmienna->licznik31;
	objzmienna->licznik31 = objzmienna->licznik33;
	objzmienna->licznik33 = objzmienna->licznik39;
	objzmienna->licznik39 = objzmienna->licznik37;
	objzmienna->licznik37 = pom;
	pom = objzmienna->licznik32;
	objzmienna->licznik32 = objzmienna->licznik36;
	objzmienna->licznik36 = objzmienna->licznik38;
	objzmienna->licznik38 = objzmienna->licznik34;
	objzmienna->licznik34 = pom;

	for (int i = 0; i < 3; i++)
	{
		swap(w3, g7);
		swap(g7, y3);
		swap(y3, b3);
		swap(w6, g4);
		swap(g4, y6);
		swap(y6, b6);
		swap(w9, g1);
		swap(g1, y9);
		swap(y9, b9);
		swap(r1, r7);
		swap(r7, r9);
		swap(r9, r3);
		swap(r4, r8);
		swap(r8, r6);
		swap(r6, r2);
	}
}
void RR(int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* w3, int* w6, int* w9,
	int* g7, int* g4, int* g1,
	int* y3, int* y6, int* y9,
	int* b3, int* b6, int* b9)
{
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik53; objzmienna->licznik53 = objzmienna->licznik63; objzmienna->licznik63 = pom;
	pom = objzmienna->licznik23; objzmienna->licznik23 = objzmienna->licznik47; objzmienna->licznik47 = pom;

	pom = objzmienna->licznik56; objzmienna->licznik56 = objzmienna->licznik66; objzmienna->licznik66 = pom;
	pom = objzmienna->licznik44; objzmienna->licznik44 = objzmienna->licznik26; objzmienna->licznik26 = pom;

	pom = objzmienna->licznik59; objzmienna->licznik59 = objzmienna->licznik69; objzmienna->licznik69 = pom;
	pom = objzmienna->licznik29; objzmienna->licznik29 = objzmienna->licznik41; objzmienna->licznik41 = pom;

	pom = objzmienna->licznik32; objzmienna->licznik32 = objzmienna->licznik38; objzmienna->licznik38 = pom;
	pom = objzmienna->licznik34; objzmienna->licznik34 = objzmienna->licznik36; objzmienna->licznik36 = pom;
	pom = objzmienna->licznik31; objzmienna->licznik31 = objzmienna->licznik39; objzmienna->licznik39 = pom;
	pom = objzmienna->licznik33; objzmienna->licznik33 = objzmienna->licznik37; objzmienna->licznik37 = pom;
	//ok
	for (int i = 0; i < 2; i++)
	{
		swap(w3, g7);
		swap(g7, y3);
		swap(y3, b3);
		swap(w6, g4);
		swap(g4, y6);
		swap(y6, b6);
		swap(w9, g1);
		swap(g1, y9);
		swap(y9, b9);
		swap(r1, r7);
		swap(r7, r9);
		swap(r9, r3);
		swap(r4, r8);
		swap(r8, r6);
		swap(r6, r2);
	}
}
void B(int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* w9, int* w8, int* w7,
	int* o7, int* o4, int* o1,
	int* y1, int* y2, int* y3,
	int* r3, int* r6, int* r9)
{
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik11; 
	objzmienna->licznik11 = objzmienna->licznik53; 
	objzmienna->licznik53 = objzmienna->licznik39;
	objzmienna->licznik39 = objzmienna->licznik67; 
	objzmienna->licznik67 = pom;
	pom = objzmienna->licznik14; 
	objzmienna->licznik14 = objzmienna->licznik52; 
	objzmienna->licznik52 = objzmienna->licznik36;
	objzmienna->licznik36 = objzmienna->licznik68; 
	objzmienna->licznik68 = pom;
	pom = objzmienna->licznik17; 
	objzmienna->licznik17 = objzmienna->licznik51; 
	objzmienna->licznik51 = objzmienna->licznik33;
	objzmienna->licznik33 = objzmienna->licznik69; 
	objzmienna->licznik69 = pom;

	pom = objzmienna->licznik41;
	objzmienna->licznik41 = objzmienna->licznik47;
	objzmienna->licznik47 = objzmienna->licznik49;
	objzmienna->licznik49 = objzmienna->licznik43;
	objzmienna->licznik43 = pom;
	pom = objzmienna->licznik42;
	objzmienna->licznik42 = objzmienna->licznik44;
	objzmienna->licznik44 = objzmienna->licznik48;
	objzmienna->licznik48 = objzmienna->licznik46;
	objzmienna->licznik46 = pom;
	//
	swap(w9, o7);
	swap(o7, y1);
	swap(y1, r3);
	swap(w8, o4);
	swap(o4, y2);
	swap(y2, r6);
	swap(w7, o1);
	swap(o1, y3);
	swap(y3, r9);
	swap(g1, g7);
	swap(g7, g9);
	swap(g9, g3);
	swap(g4, g8);
	swap(g8, g6);
	swap(g6, g2);
}
void Bp(int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* w9, int* w8, int* w7,
	int* o7, int* o4, int* o1,
	int* y1, int* y2, int* y3,
	int* r3, int* r6, int* r9)
{
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik11; 
	objzmienna->licznik11 = objzmienna->licznik67; 
	objzmienna->licznik67 = objzmienna->licznik39;
	objzmienna->licznik39 = objzmienna->licznik53; 
	objzmienna->licznik53 = pom;
	pom = objzmienna->licznik14; 
	objzmienna->licznik14 = objzmienna->licznik68; 
	objzmienna->licznik68 = objzmienna->licznik36;
	objzmienna->licznik36 = objzmienna->licznik52;
	objzmienna->licznik52 = pom;
	pom = objzmienna->licznik17; 
	objzmienna->licznik17 = objzmienna->licznik69; 
	objzmienna->licznik69 = objzmienna->licznik33;
	objzmienna->licznik33 = objzmienna->licznik51; 
	objzmienna->licznik51 = pom;

	pom = objzmienna->licznik41;
	objzmienna->licznik41 = objzmienna->licznik43;
	objzmienna->licznik43 = objzmienna->licznik49;
	objzmienna->licznik49 = objzmienna->licznik47;
	objzmienna->licznik47 = pom;
	pom = objzmienna->licznik42;
	objzmienna->licznik42 = objzmienna->licznik46;
	objzmienna->licznik46 = objzmienna->licznik48;
	objzmienna->licznik48 = objzmienna->licznik44;
	objzmienna->licznik44 = pom;

	for (int i = 0; i < 3; i++)
	{
		swap(w9, o7);
		swap(o7, y1);
		swap(y1, r3);
		swap(w8, o4);
		swap(o4, y2);
		swap(y2, r6);
		swap(w7, o1);
		swap(o1, y3);
		swap(y3, r9);
		swap(g1, g7);
		swap(g7, g9);
		swap(g9, g3);
		swap(g4, g8);
		swap(g8, g6);
		swap(g6, g2);
	}
}
void BB(int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* w9, int* w8, int* w7,
	int* o7, int* o4, int* o1,
	int* y1, int* y2, int* y3,
	int* r3, int* r6, int* r9)
{
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik11; objzmienna->licznik11 = objzmienna->licznik39; objzmienna->licznik39 = pom;
	pom = objzmienna->licznik53; objzmienna->licznik53 = objzmienna->licznik67; objzmienna->licznik67 = pom;

	pom = objzmienna->licznik52; objzmienna->licznik52 = objzmienna->licznik68; objzmienna->licznik68 = pom;
	pom = objzmienna->licznik14; objzmienna->licznik14 = objzmienna->licznik36; objzmienna->licznik36 = pom;

	pom = objzmienna->licznik17; objzmienna->licznik17 = objzmienna->licznik33; objzmienna->licznik33 = pom;
	pom = objzmienna->licznik51; objzmienna->licznik51 = objzmienna->licznik69; objzmienna->licznik69 = pom;

	pom = objzmienna->licznik42; objzmienna->licznik42 = objzmienna->licznik48; objzmienna->licznik48 = pom;
	pom = objzmienna->licznik44; objzmienna->licznik44 = objzmienna->licznik46; objzmienna->licznik46 = pom;
	pom = objzmienna->licznik41; objzmienna->licznik41 = objzmienna->licznik49; objzmienna->licznik49 = pom;
	pom = objzmienna->licznik43; objzmienna->licznik43 = objzmienna->licznik47; objzmienna->licznik47 = pom;
	for (int i = 0; i < 2; i++)
	{
		swap(w9, o7);
		swap(o7, y1);
		swap(y1, r3);
		swap(w8, o4);
		swap(o4, y2);
		swap(y2, r6);
		swap(w7, o1);
		swap(o1, y3);
		swap(y3, r9);
		swap(g1, g7);
		swap(g7, g9);
		swap(g9, g3);
		swap(g4, g8);
		swap(g8, g6);
		swap(g6, g2);
	}
}
void L(int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* w7, int* w4, int* w1,
	int* b7, int* b4, int* b1,
	int* y7, int* y4, int* y1,
	int* g3, int* g6, int* g9)
{
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik21; objzmienna->licznik21 = objzmienna->licznik51; objzmienna->licznik51 = objzmienna->licznik49;
	objzmienna->licznik49 = objzmienna->licznik61; objzmienna->licznik61 = pom;
	pom = objzmienna->licznik24; objzmienna->licznik24 = objzmienna->licznik54; objzmienna->licznik54 = objzmienna->licznik46;
	objzmienna->licznik46 = objzmienna->licznik64; objzmienna->licznik64 = pom;
	pom = objzmienna->licznik27; objzmienna->licznik27 = objzmienna->licznik57; objzmienna->licznik57 = objzmienna->licznik43;
	objzmienna->licznik43 = objzmienna->licznik67; objzmienna->licznik67 = pom;

	pom = objzmienna->licznik11;
	objzmienna->licznik11 = objzmienna->licznik17;
	objzmienna->licznik17 = objzmienna->licznik19;
	objzmienna->licznik19 = objzmienna->licznik13;
	objzmienna->licznik13 = pom;
	pom = objzmienna->licznik12;
	objzmienna->licznik12 = objzmienna->licznik14;
	objzmienna->licznik14 = objzmienna->licznik18;
	objzmienna->licznik18 = objzmienna->licznik16;
	objzmienna->licznik16 = pom;

	swap(w7, b7);
	swap(b7, y7);
	swap(y7, g3);
	swap(w4, b4);
	swap(b4, y4);
	swap(y4, g6);
	swap(w1, b1);
	swap(b1, y1);
	swap(y1, g9);
	swap(o1, o7);
	swap(o7, o9);
	swap(o9, o3);
	swap(o4, o8);
	swap(o8, o6);
	swap(o6, o2);
}
void Lp(int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* w7, int* w4, int* w1,
	int* b7, int* b4, int* b1,
	int* y7, int* y4, int* y1,
	int* g3, int* g6, int* g9)
{
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik21; objzmienna->licznik21 = objzmienna->licznik61; objzmienna->licznik61 = objzmienna->licznik49;
	objzmienna->licznik49 = objzmienna->licznik51; objzmienna->licznik51 = pom;
	pom = objzmienna->licznik24; objzmienna->licznik24 = objzmienna->licznik64; objzmienna->licznik64 = objzmienna->licznik46;
	objzmienna->licznik46 = objzmienna->licznik54; objzmienna->licznik54 = pom;
	pom = objzmienna->licznik27; objzmienna->licznik27 = objzmienna->licznik67; objzmienna->licznik67 = objzmienna->licznik43;
	objzmienna->licznik43 = objzmienna->licznik57; objzmienna->licznik57 = pom;

	pom = objzmienna->licznik11;
	objzmienna->licznik11 = objzmienna->licznik13;
	objzmienna->licznik13 = objzmienna->licznik19;
	objzmienna->licznik19 = objzmienna->licznik17;
	objzmienna->licznik17 = pom;
	pom = objzmienna->licznik12;
	objzmienna->licznik12 = objzmienna->licznik16;
	objzmienna->licznik16 = objzmienna->licznik18;
	objzmienna->licznik18 = objzmienna->licznik14;
	objzmienna->licznik14 = pom;

	for (int i = 0; i < 3; i++)
	{
		swap(w7, b7);
		swap(b7, y7);
		swap(y7, g3);
		swap(w4, b4);
		swap(b4, y4);
		swap(y4, g6);
		swap(w1, b1);
		swap(b1, y1);
		swap(y1, g9);
		swap(o1, o7);
		swap(o7, o9);
		swap(o9, o3);
		swap(o4, o8);
		swap(o8, o6);
		swap(o6, o2);
	}
}
void LL(int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* w7, int* w4, int* w1,
	int* b7, int* b4, int* b1,
	int* y7, int* y4, int* y1,
	int* g3, int* g6, int* g9)
{
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik51; objzmienna->licznik51 = objzmienna->licznik61; objzmienna->licznik61 = pom;
	pom = objzmienna->licznik21; objzmienna->licznik21 = objzmienna->licznik49; objzmienna->licznik49 = pom;

	pom = objzmienna->licznik54; objzmienna->licznik54 = objzmienna->licznik64; objzmienna->licznik64 = pom;
	pom = objzmienna->licznik46; objzmienna->licznik46 = objzmienna->licznik24; objzmienna->licznik24 = pom;

	pom = objzmienna->licznik57; objzmienna->licznik57 = objzmienna->licznik67; objzmienna->licznik67 = pom;
	pom = objzmienna->licznik27; objzmienna->licznik27 = objzmienna->licznik43; objzmienna->licznik43 = pom;

	pom = objzmienna->licznik12; objzmienna->licznik12 = objzmienna->licznik18; objzmienna->licznik18 = pom;
	pom = objzmienna->licznik14; objzmienna->licznik14 = objzmienna->licznik16; objzmienna->licznik16 = pom;
	pom = objzmienna->licznik11; objzmienna->licznik11 = objzmienna->licznik19; objzmienna->licznik19 = pom;
	pom = objzmienna->licznik13; objzmienna->licznik13 = objzmienna->licznik17; objzmienna->licznik17 = pom;
	for (int i = 0; i < 2; i++)
	{
		swap(w7, b7);
		swap(b7, y7);
		swap(y7, g3);
		swap(w4, b4);
		swap(b4, y4);
		swap(y4, g6);
		swap(w1, b1);
		swap(b1, y1);
		swap(y1, g9);
		swap(o1, o7);
		swap(o7, o9);
		swap(o9, o3);
		swap(o4, o8);
		swap(o8, o6);
		swap(o6, o2);
	}
}
void U(int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* b1, int* b2, int* b3,
	int* r1, int* r2, int* r3,
	int* g1, int* g2, int* g3,
	int* o1, int* o2, int* o3)
{
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik21; objzmienna->licznik21 = objzmienna->licznik31; objzmienna->licznik31 = objzmienna->licznik41;
	objzmienna->licznik41 = objzmienna->licznik11; objzmienna->licznik11 = pom;
	pom = objzmienna->licznik22; objzmienna->licznik22 = objzmienna->licznik32; objzmienna->licznik32 = objzmienna->licznik42;
	objzmienna->licznik42 = objzmienna->licznik12; objzmienna->licznik12 = pom;
	pom = objzmienna->licznik23; objzmienna->licznik23 = objzmienna->licznik33; objzmienna->licznik33 = objzmienna->licznik43;
	objzmienna->licznik43 = objzmienna->licznik13; objzmienna->licznik13 = pom;

	pom = objzmienna->licznik51;
	objzmienna->licznik51 = objzmienna->licznik57;
	objzmienna->licznik57 = objzmienna->licznik59;
	objzmienna->licznik59 = objzmienna->licznik53;
	objzmienna->licznik53 = pom;
	pom = objzmienna->licznik52;
	objzmienna->licznik52 = objzmienna->licznik54;
	objzmienna->licznik54 = objzmienna->licznik58;
	objzmienna->licznik58 = objzmienna->licznik56;
	objzmienna->licznik56 = pom;

	swap(b1, r1);
	swap(r1, g1);
	swap(g1, o1);
	swap(b2, r2);
	swap(r2, g2);
	swap(g2, o2);
	swap(b3, r3);
	swap(r3, g3);
	swap(g3, o3);
	swap(y1, y7);
	swap(y7, y9);
	swap(y9, y3);
	swap(y4, y8);
	swap(y8, y6);
	swap(y6, y2);
}
void Up(int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* b1, int* b2, int* b3,
	int* r1, int* r2, int* r3,
	int* g1, int* g2, int* g3,
	int* o1, int* o2, int* o3)
{
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik21; objzmienna->licznik21 = objzmienna->licznik11; objzmienna->licznik11 = objzmienna->licznik41;
	objzmienna->licznik41 = objzmienna->licznik31; objzmienna->licznik31 = pom;
	pom = objzmienna->licznik22; objzmienna->licznik22 = objzmienna->licznik12; objzmienna->licznik12 = objzmienna->licznik42;
	objzmienna->licznik42 = objzmienna->licznik32; objzmienna->licznik32 = pom;
	pom = objzmienna->licznik23; objzmienna->licznik23 = objzmienna->licznik13; objzmienna->licznik13 = objzmienna->licznik43;
	objzmienna->licznik43 = objzmienna->licznik33; objzmienna->licznik33 = pom;

	pom = objzmienna->licznik51;
	objzmienna->licznik51 = objzmienna->licznik53;
	objzmienna->licznik53 = objzmienna->licznik59;
	objzmienna->licznik59 = objzmienna->licznik57;
	objzmienna->licznik57 = pom;
	pom = objzmienna->licznik52;
	objzmienna->licznik52 = objzmienna->licznik56;
	objzmienna->licznik56 = objzmienna->licznik58;
	objzmienna->licznik58 = objzmienna->licznik54;
	objzmienna->licznik54 = pom;

	for (int i = 0; i < 3; i++)
	{
		swap(b1, r1);
		swap(r1, g1);
		swap(g1, o1);
		swap(b2, r2);
		swap(r2, g2);
		swap(g2, o2);
		swap(b3, r3);
		swap(r3, g3);
		swap(g3, o3);
		swap(y1, y7);
		swap(y7, y9);
		swap(y9, y3);
		swap(y4, y8);
		swap(y8, y6);
		swap(y6, y2);
	}
}
void UU(int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* b1, int* b2, int* b3,
	int* r1, int* r2, int* r3,
	int* g1, int* g2, int* g3,
	int* o1, int* o2, int* o3)
{

	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik21; objzmienna->licznik21 = objzmienna->licznik41; objzmienna->licznik41 = pom;
	pom = objzmienna->licznik31; objzmienna->licznik31 = objzmienna->licznik11; objzmienna->licznik11 = pom;

	pom = objzmienna->licznik22; objzmienna->licznik22 = objzmienna->licznik42; objzmienna->licznik42 = pom;
	pom = objzmienna->licznik32; objzmienna->licznik32 = objzmienna->licznik12; objzmienna->licznik12 = pom;

	pom = objzmienna->licznik23; objzmienna->licznik23 = objzmienna->licznik43; objzmienna->licznik43 = pom;
	pom = objzmienna->licznik13; objzmienna->licznik13 = objzmienna->licznik33; objzmienna->licznik33 = pom;

	pom = objzmienna->licznik52; objzmienna->licznik52 = objzmienna->licznik58; objzmienna->licznik58 = pom;
	pom = objzmienna->licznik54; objzmienna->licznik54 = objzmienna->licznik56; objzmienna->licznik56 = pom;
	pom = objzmienna->licznik51; objzmienna->licznik51 = objzmienna->licznik59; objzmienna->licznik59 = pom;
	pom = objzmienna->licznik53; objzmienna->licznik53 = objzmienna->licznik57; objzmienna->licznik57 = pom;
	for (int i = 0; i < 2; i++)
	{
		swap(b1, r1);
		swap(r1, g1);
		swap(g1, o1);
		swap(b2, r2);
		swap(r2, g2);
		swap(g2, o2);
		swap(b3, r3);
		swap(r3, g3);
		swap(g3, o3);
		swap(y1, y7);
		swap(y7, y9);
		swap(y9, y3);
		swap(y4, y8);
		swap(y8, y6);
		swap(y6, y2);
	}
}
void D(int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9,
	int* g9, int* g8, int* g7,
	int* r9, int* r8, int* r7,
	int* b9, int* b8, int* b7,
	int* o9, int* o8, int* o7)
{
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik27; objzmienna->licznik27 = objzmienna->licznik17; objzmienna->licznik17 = objzmienna->licznik47;
	objzmienna->licznik47 = objzmienna->licznik37; objzmienna->licznik37 = pom;
	pom = objzmienna->licznik28; objzmienna->licznik28 = objzmienna->licznik18; objzmienna->licznik18 = objzmienna->licznik48;
	objzmienna->licznik48 = objzmienna->licznik38; objzmienna->licznik38 = pom;
	pom = objzmienna->licznik29; objzmienna->licznik29 = objzmienna->licznik19; objzmienna->licznik19 = objzmienna->licznik49;
	objzmienna->licznik49 = objzmienna->licznik39; objzmienna->licznik39 = pom;

	pom = objzmienna->licznik61;
	objzmienna->licznik61 = objzmienna->licznik67;
	objzmienna->licznik67 = objzmienna->licznik69;
	objzmienna->licznik69 = objzmienna->licznik63;
	objzmienna->licznik63 = pom;
	pom = objzmienna->licznik62;
	objzmienna->licznik62 = objzmienna->licznik64;
	objzmienna->licznik64 = objzmienna->licznik68;
	objzmienna->licznik68 = objzmienna->licznik66;
	objzmienna->licznik66 = pom;

	swap(g9, r9);
	swap(r9, b9);
	swap(b9, o9);
	swap(g8, r8);
	swap(r8, b8);
	swap(b8, o8);
	swap(g7, r7);
	swap(r7, b7);
	swap(b7, o7);
	swap(w1, w7);
	swap(w7, w9);
	swap(w9, w3);
	swap(w4, w8);
	swap(w8, w6);
	swap(w6, w2);
}
void Dp(int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9,
	int* g9, int* g8, int* g7,
	int* r9, int* r8, int* r7,
	int* b9, int* b8, int* b7,
	int* o9, int* o8, int* o7)
{
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik27; objzmienna->licznik27 = objzmienna->licznik37; objzmienna->licznik37 = objzmienna->licznik47;
	objzmienna->licznik47 = objzmienna->licznik17; objzmienna->licznik17 = pom;
	pom = objzmienna->licznik28; objzmienna->licznik28 = objzmienna->licznik38; objzmienna->licznik38 = objzmienna->licznik48;
	objzmienna->licznik48 = objzmienna->licznik18; objzmienna->licznik18 = pom;
	pom = objzmienna->licznik29; objzmienna->licznik29 = objzmienna->licznik39; objzmienna->licznik39 = objzmienna->licznik49;
	objzmienna->licznik49 = objzmienna->licznik19; objzmienna->licznik19 = pom;

	pom = objzmienna->licznik61;
	objzmienna->licznik61 = objzmienna->licznik63;
	objzmienna->licznik63 = objzmienna->licznik69;
	objzmienna->licznik69 = objzmienna->licznik67;
	objzmienna->licznik67 = pom;
	pom = objzmienna->licznik62;
	objzmienna->licznik62 = objzmienna->licznik66;
	objzmienna->licznik66 = objzmienna->licznik68;
	objzmienna->licznik68 = objzmienna->licznik64;
	objzmienna->licznik64 = pom;

	for (int i = 0; i < 3; i++)
	{
		swap(g9, r9);
		swap(r9, b9);
		swap(b9, o9);
		swap(g8, r8);
		swap(r8, b8);
		swap(b8, o8);
		swap(g7, r7);
		swap(r7, b7);
		swap(b7, o7);
		swap(w1, w7);
		swap(w7, w9);
		swap(w9, w3);
		swap(w4, w8);
		swap(w8, w6);
		swap(w6, w2);
	}
}
void DD(int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9,
	int* g9, int* g8, int* g7,
	int* r9, int* r8, int* r7,
	int* b9, int* b8, int* b7,
	int* o9, int* o8, int* o7)
{
	int pom; objzmienna->licznikruchow += 1;
	pom = objzmienna->licznik27; objzmienna->licznik27 = objzmienna->licznik47; objzmienna->licznik47 = pom;
	pom = objzmienna->licznik37; objzmienna->licznik37 = objzmienna->licznik17; objzmienna->licznik17 = pom;

	pom = objzmienna->licznik28; objzmienna->licznik28 = objzmienna->licznik48; objzmienna->licznik48 = pom;
	pom = objzmienna->licznik38; objzmienna->licznik38 = objzmienna->licznik18; objzmienna->licznik18 = pom;

	pom = objzmienna->licznik29; objzmienna->licznik29 = objzmienna->licznik49; objzmienna->licznik49 = pom;
	pom = objzmienna->licznik19; objzmienna->licznik19 = objzmienna->licznik39; objzmienna->licznik39 = pom;

	pom = objzmienna->licznik62; objzmienna->licznik62 = objzmienna->licznik68; objzmienna->licznik68 = pom;
	pom = objzmienna->licznik64; objzmienna->licznik64 = objzmienna->licznik66; objzmienna->licznik66 = pom;
	pom = objzmienna->licznik61; objzmienna->licznik61 = objzmienna->licznik69; objzmienna->licznik69 = pom;
	pom = objzmienna->licznik63; objzmienna->licznik63 = objzmienna->licznik67; objzmienna->licznik67 = pom;
	for (int i = 0; i < 2; i++)
	{
		swap(g9, r9);
		swap(r9, b9);
		swap(b9, o9);
		swap(g8, r8);
		swap(r8, b8);
		swap(b8, o8);
		swap(g7, r7);
		swap(r7, b7);
		swap(b7, o7);
		swap(w1, w7);
		swap(w7, w9);
		swap(w9, w3);
		swap(w4, w8);
		swap(w8, w6);
		swap(w6, w2);
	}
}

void scramble(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9, int* Oswap)
{

	
		//std::default_random_engine engine;
		//engine.seed((unsigned)time(0));
		//std::uniform_int_distribution<int> rand(0, 18);
		//unsigned int number;
		//time_t t;

		
	//  srand((unsigned)time(&t));
	//	int los0;
	//	los0 = rand() % 999;
	//	srand(time());
	int los;
	switch (objzmienna->scrrepeat) {
	case 0: {los = rand() % 18;
		switch (los)
		{
		case 0:
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 1;	objzmienna->scrrepeat = 1;
			break;
		case 1:
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 2; objzmienna->scrrepeat = 1;
			break;
		case 2:
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 3; objzmienna->scrrepeat = 1;
			break;
		case 3:
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 4; objzmienna->scrrepeat = 2;
			break;
		case 4:
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 5; objzmienna->scrrepeat = 2;
			break;
		case 5:
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 6; objzmienna->scrrepeat = 2;
			break;
		case 6:
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 7; objzmienna->scrrepeat = 3;
			break;
		case 7:
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 8; objzmienna->scrrepeat = 3;
			break;
		case 8:
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 9; objzmienna->scrrepeat = 3;
			break;
		case 9:
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 10; objzmienna->scrrepeat = 4;
			break;
		case 10:
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 11; objzmienna->scrrepeat = 4;
			break;
		case 11:
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 12; objzmienna->scrrepeat = 4;
			break;
		case 12:
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 13; objzmienna->scrrepeat = 5;
			break;
		case 13:
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 14; objzmienna->scrrepeat = 5;
			break;
		case 14:
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 15; objzmienna->scrrepeat = 5;
			break;
		case 15:
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 16; objzmienna->scrrepeat = 6;
			break;
		case 16:
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 17; objzmienna->scrrepeat = 6;
			break;
		case 17:
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 18; objzmienna->scrrepeat = 6;
			break;
		}}break;
	case 1: {los = rand() % 15;
		switch (los)
		{
		case 3:
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 4; objzmienna->scrrepeat = 2;
			break;
		case 4:
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 5; objzmienna->scrrepeat = 2;
			break;
		case 5:
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 6; objzmienna->scrrepeat = 2;
			break;
		case 6:
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 7; objzmienna->scrrepeat = 3;
			break;
		case 7:
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 8; objzmienna->scrrepeat = 3;
			break;
		case 8:
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 9; objzmienna->scrrepeat = 3;
			break;
		case 9:
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 10; objzmienna->scrrepeat = 4;
			break;
		case 10:
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 11; objzmienna->scrrepeat = 4;
			break;
		case 11:
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 12; objzmienna->scrrepeat = 4;
			break;
		case 12:
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 13; objzmienna->scrrepeat = 5;
			break;
		case 13:
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 14; objzmienna->scrrepeat = 5;
			break;
		case 14:
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 15; objzmienna->scrrepeat = 5;
			break;
		case 2:
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 16; objzmienna->scrrepeat = 6;
			break;
		case 1:
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 17; objzmienna->scrrepeat = 6;
			break;
		case 0:
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 18; objzmienna->scrrepeat = 6;
			break;
		}}break;
	case 2: {los = rand() % 15;
		switch (los)
		{
		case 0:
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 1;	objzmienna->scrrepeat = 1;
			break;
		case 1:
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 2; objzmienna->scrrepeat = 1;
			break;
		case 2:
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 3; objzmienna->scrrepeat = 1;
			break;
		case 6:
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 7; objzmienna->scrrepeat = 3;
			break;
		case 7:
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 8; objzmienna->scrrepeat = 3;
			break;
		case 8:
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 9; objzmienna->scrrepeat = 3;
			break;
		case 9:
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 10; objzmienna->scrrepeat = 4;
			break;
		case 10:
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 11; objzmienna->scrrepeat = 4;
			break;
		case 11:
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 12; objzmienna->scrrepeat = 4;
			break;
		case 12:
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 13; objzmienna->scrrepeat = 5;
			break;
		case 13:
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 14; objzmienna->scrrepeat = 5;
			break;
		case 14:
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 15; objzmienna->scrrepeat = 5;
			break;
		case 5:
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 16; objzmienna->scrrepeat = 6;
			break;
		case 4:
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 17; objzmienna->scrrepeat = 6;
			break;
		case 3:
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 18; objzmienna->scrrepeat = 6;
			break;
		}}break;
	case 3: {los = rand() % 15;
		switch (los)
		{
		case 0:
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 1;	objzmienna->scrrepeat = 1;
			break;
		case 1:
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 2; objzmienna->scrrepeat = 1;
			break;
		case 2:
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 3; objzmienna->scrrepeat = 1;
			break;
		case 3:
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 4; objzmienna->scrrepeat = 2;
			break;
		case 4:
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 5; objzmienna->scrrepeat = 2;
			break;
		case 5:
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 6; objzmienna->scrrepeat = 2;
			break;
		case 9:
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 10; objzmienna->scrrepeat = 4;
			break;
		case 10:
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 11; objzmienna->scrrepeat = 4;
			break;
		case 11:
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 12; objzmienna->scrrepeat = 4;
			break;
		case 12:
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 13; objzmienna->scrrepeat = 5;
			break;
		case 13:
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 14; objzmienna->scrrepeat = 5;
			break;
		case 14:
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 15; objzmienna->scrrepeat = 5;
			break;
		case 8:
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 16; objzmienna->scrrepeat = 6;
			break;
		case 7:
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 17; objzmienna->scrrepeat = 6;
			break;
		case 6:
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 18; objzmienna->scrrepeat = 6;
			break;
		}}break;
	case 4: {los = rand() % 15;
		switch (los)
		{
		case 0:
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 1;	objzmienna->scrrepeat = 1;
			break;
		case 1:
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 2; objzmienna->scrrepeat = 1;
			break;
		case 2:
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 3; objzmienna->scrrepeat = 1;
			break;
		case 3:
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 4; objzmienna->scrrepeat = 2;
			break;
		case 4:
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 5; objzmienna->scrrepeat = 2;
			break;
		case 5:
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 6; objzmienna->scrrepeat = 2;
			break;
		case 6:
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 7; objzmienna->scrrepeat = 3;
			break;
		case 7:
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 8; objzmienna->scrrepeat = 3;
			break;
		case 8:
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 9; objzmienna->scrrepeat = 3;
			break;
		case 12:
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 13; objzmienna->scrrepeat = 5;
			break;
		case 13:
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 14; objzmienna->scrrepeat = 5;
			break;
		case 14:
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 15; objzmienna->scrrepeat = 5;
			break;
		case 11:
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 16; objzmienna->scrrepeat = 6;
			break;
		case 10:
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 17; objzmienna->scrrepeat = 6;
			break;
		case 9:
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 18; objzmienna->scrrepeat = 6;
			break;
		}}break;
	case 5: {los = rand() % 15;
		switch (los)
		{
		case 0:
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 1;	objzmienna->scrrepeat = 1;
			break;
		case 1:
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 2; objzmienna->scrrepeat = 1;
			break;
		case 2:
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 3; objzmienna->scrrepeat = 1;
			break;
		case 3:
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 4; objzmienna->scrrepeat = 2;
			break;
		case 4:
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 5; objzmienna->scrrepeat = 2;
			break;
		case 5:
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 6; objzmienna->scrrepeat = 2;
			break;
		case 6:
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 7; objzmienna->scrrepeat = 3;
			break;
		case 7:
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 8; objzmienna->scrrepeat = 3;
			break;
		case 8:
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 9; objzmienna->scrrepeat = 3;
			break;
		case 9:
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 10; objzmienna->scrrepeat = 4;
			break;
		case 10:
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 11; objzmienna->scrrepeat = 4;
			break;
		case 11:
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 12; objzmienna->scrrepeat = 4;
			break;
		case 14:
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 16; objzmienna->scrrepeat = 6;
			break;
		case 13:
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 17; objzmienna->scrrepeat = 6;
			break;
		case 12:
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			*Oswap = 18; objzmienna->scrrepeat = 6;
			break;
		}}break;
	case 6: {los = rand() % 15;
		switch (los)
		{
		case 0:
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 1;	objzmienna->scrrepeat = 1;
			break;
		case 1:
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 2; objzmienna->scrrepeat = 1;
			break;
		case 2:
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			*Oswap = 3; objzmienna->scrrepeat = 1;
			break;
		case 3:
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 4; objzmienna->scrrepeat = 2;
			break;
		case 4:
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 5; objzmienna->scrrepeat = 2;
			break;
		case 5:
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			*Oswap = 6; objzmienna->scrrepeat = 2;
			break;
		case 6:
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 7; objzmienna->scrrepeat = 3;
			break;
		case 7:
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 8; objzmienna->scrrepeat = 3;
			break;
		case 8:
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			*Oswap = 9; objzmienna->scrrepeat = 3;
			break;
		case 9:
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 10; objzmienna->scrrepeat = 4;
			break;
		case 10:
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 11; objzmienna->scrrepeat = 4;
			break;
		case 11:
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			*Oswap = 12; objzmienna->scrrepeat = 4;
			break;
		case 12:
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 13; objzmienna->scrrepeat = 5;
			break;
		case 13:
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 14; objzmienna->scrrepeat = 5;
			break;
		case 14:
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			*Oswap = 15; objzmienna->scrrepeat = 5;
			break;
		}}break;
	}
	
}

	void read(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
		int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
		int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
		int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
		int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
		int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9, 
		int* swap11, int* swap12, int* swap13, int* swap14, int* swap16, int* swap17, int* swap18, int* swap19, 
		int* swap21, int* swap22, int* swap23, int* swap24, int* swap26, int* swap27, int* swap28, int* swap29, 
		int* swap31, int* swap32, int* swap33, int* swap34, int* swap36, int* swap37, int* swap38, int* swap39, 
		int* swap41, int* swap42, int* swap43, int* swap44, int* swap46, int* swap47, int* swap48, int* swap49, 
		int* swap51, int* swap52, int* swap53, int* swap54, int* swap56, int* swap57, int* swap58, int* swap59, 
		int* swap61, int* swap62, int* swap63, int* swap64, int* swap66, int* swap67, int* swap68, int* swap69)
	{
		//O
		if (*o1 == 11 || *o1 == 12 || *o1 == 13 || *o1 == 14 || *o1 == 16 || *o1 == 17 || *o1 == 18 || *o1 == 19) { *swap11 = 1; }
		if (*o1 == 21 || *o1 == 22 || *o1 == 23 || *o1 == 24 || *o1 == 26 || *o1 == 27 || *o1 == 28 || *o1 == 29) { *swap11 = 2; }
		if (*o1 == 31 || *o1 == 32 || *o1 == 33 || *o1 == 34 || *o1 == 36 || *o1 == 37 || *o1 == 38 || *o1 == 39) { *swap11 = 3; }
		if (*o1 == 41 || *o1 == 42 || *o1 == 43 || *o1 == 44 || *o1 == 46 || *o1 == 47 || *o1 == 48 || *o1 == 49) { *swap11 = 4; }
		if (*o1 == 51 || *o1 == 52 || *o1 == 53 || *o1 == 54 || *o1 == 56 || *o1 == 57 || *o1 == 58 || *o1 == 59) { *swap11 = 5; }
		if (*o1 == 61 || *o1 == 62 || *o1 == 63 || *o1 == 64 || *o1 == 66 || *o1 == 67 || *o1 == 68 || *o1 == 69) { *swap11 = 6; }
		//
		if (*o2 == 11 || *o2 == 12 || *o2 == 13 || *o2 == 14 || *o2 == 16 || *o2 == 17 || *o2 == 18 || *o2 == 19) { *swap12 = 1; }
		if (*o2 == 21 || *o2 == 22 || *o2 == 23 || *o2 == 24 || *o2 == 26 || *o2 == 27 || *o2 == 28 || *o2 == 29) { *swap12 = 2; }
		if (*o2 == 31 || *o2 == 32 || *o2 == 33 || *o2 == 34 || *o2 == 36 || *o2 == 37 || *o2 == 38 || *o2 == 39) { *swap12 = 3; }
		if (*o2 == 41 || *o2 == 42 || *o2 == 43 || *o2 == 44 || *o2 == 46 || *o2 == 47 || *o2 == 48 || *o2 == 49) { *swap12 = 4; }
		if (*o2 == 51 || *o2 == 52 || *o2 == 53 || *o2 == 54 || *o2 == 56 || *o2 == 57 || *o2 == 58 || *o2 == 59) { *swap12 = 5; }
		if (*o2 == 61 || *o2 == 62 || *o2 == 63 || *o2 == 64 || *o2 == 66 || *o2 == 67 || *o2 == 68 || *o2 == 69) { *swap12 = 6; }
		//
		if (*o3 == 11 || *o3 == 12 || *o3 == 13 || *o3 == 14 || *o3 == 16 || *o3 == 17 || *o3 == 18 || *o3 == 19) { *swap13 = 1; }
		if (*o3 == 21 || *o3 == 22 || *o3 == 23 || *o3 == 24 || *o3 == 26 || *o3 == 27 || *o3 == 28 || *o3 == 29) { *swap13 = 2; }
		if (*o3 == 31 || *o3 == 32 || *o3 == 33 || *o3 == 34 || *o3 == 36 || *o3 == 37 || *o3 == 38 || *o3 == 39) { *swap13 = 3; }
		if (*o3 == 41 || *o3 == 42 || *o3 == 43 || *o3 == 44 || *o3 == 46 || *o3 == 47 || *o3 == 48 || *o3 == 49) { *swap13 = 4; }
		if (*o3 == 51 || *o3 == 52 || *o3 == 53 || *o3 == 54 || *o3 == 56 || *o3 == 57 || *o3 == 58 || *o3 == 59) { *swap13 = 5; }
		if (*o3 == 61 || *o3 == 62 || *o3 == 63 || *o3 == 64 || *o3 == 66 || *o3 == 67 || *o3 == 68 || *o3 == 69) { *swap13 = 6; }
		//
		if (*o4 == 11 || *o4 == 12 || *o4 == 13 || *o4 == 14 || *o4 == 16 || *o4 == 17 || *o4 == 18 || *o4 == 19) { *swap14 = 1; }
		if (*o4 == 21 || *o4 == 22 || *o4 == 23 || *o4 == 24 || *o4 == 26 || *o4 == 27 || *o4 == 28 || *o4 == 29) { *swap14 = 2; }
		if (*o4 == 31 || *o4 == 32 || *o4 == 33 || *o4 == 34 || *o4 == 36 || *o4 == 37 || *o4 == 38 || *o4 == 39) { *swap14 = 3; }
		if (*o4 == 41 || *o4 == 42 || *o4 == 43 || *o4 == 44 || *o4 == 46 || *o4 == 47 || *o4 == 48 || *o4 == 49) { *swap14 = 4; }
		if (*o4 == 51 || *o4 == 52 || *o4 == 53 || *o4 == 54 || *o4 == 56 || *o4 == 57 || *o4 == 58 || *o4 == 59) { *swap14 = 5; }
		if (*o4 == 61 || *o4 == 62 || *o4 == 63 || *o4 == 64 || *o4 == 66 || *o4 == 67 || *o4 == 68 || *o4 == 69) { *swap14 = 6; }
		//
		if (*o6 == 11 || *o6 == 12 || *o6 == 13 || *o6 == 14 || *o6 == 16 || *o6 == 17 || *o6 == 18 || *o6 == 19) { *swap16 = 1; }
		if (*o6 == 21 || *o6 == 22 || *o6 == 23 || *o6 == 24 || *o6 == 26 || *o6 == 27 || *o6 == 28 || *o6 == 29) { *swap16 = 2; }
		if (*o6 == 31 || *o6 == 32 || *o6 == 33 || *o6 == 34 || *o6 == 36 || *o6 == 37 || *o6 == 38 || *o6 == 39) { *swap16 = 3; }
		if (*o6 == 41 || *o6 == 42 || *o6 == 43 || *o6 == 44 || *o6 == 46 || *o6 == 47 || *o6 == 48 || *o6 == 49) { *swap16 = 4; }
		if (*o6 == 51 || *o6 == 52 || *o6 == 53 || *o6 == 54 || *o6 == 56 || *o6 == 57 || *o6 == 58 || *o6 == 59) { *swap16 = 5; }
		if (*o6 == 61 || *o6 == 62 || *o6 == 63 || *o6 == 64 || *o6 == 66 || *o6 == 67 || *o6 == 68 || *o6 == 69) { *swap16 = 6; }
		//
		if (*o7 == 11 || *o7 == 12 || *o7 == 13 || *o7 == 14 || *o7 == 16 || *o7 == 17 || *o7 == 18 || *o7 == 19) { *swap17 = 1; }
		if (*o7 == 21 || *o7 == 22 || *o7 == 23 || *o7 == 24 || *o7 == 26 || *o7 == 27 || *o7 == 28 || *o7 == 29) { *swap17 = 2; }
		if (*o7 == 31 || *o7 == 32 || *o7 == 33 || *o7 == 34 || *o7 == 36 || *o7 == 37 || *o7 == 38 || *o7 == 39) { *swap17 = 3; }
		if (*o7 == 41 || *o7 == 42 || *o7 == 43 || *o7 == 44 || *o7 == 46 || *o7 == 47 || *o7 == 48 || *o7 == 49) { *swap17 = 4; }
		if (*o7 == 51 || *o7 == 52 || *o7 == 53 || *o7 == 54 || *o7 == 56 || *o7 == 57 || *o7 == 58 || *o7 == 59) { *swap17 = 5; }
		if (*o7 == 61 || *o7 == 62 || *o7 == 63 || *o7 == 64 || *o7 == 66 || *o7 == 67 || *o7 == 68 || *o7 == 69) { *swap17 = 6; }
		//
		if (*o8 == 11 || *o8 == 12 || *o8 == 13 || *o8 == 14 || *o8 == 16 || *o8 == 17 || *o8 == 18 || *o8 == 19) { *swap18 = 1; }
		if (*o8 == 21 || *o8 == 22 || *o8 == 23 || *o8 == 24 || *o8 == 26 || *o8 == 27 || *o8 == 28 || *o8 == 29) { *swap18 = 2; }
		if (*o8 == 31 || *o8 == 32 || *o8 == 33 || *o8 == 34 || *o8 == 36 || *o8 == 37 || *o8 == 38 || *o8 == 39) { *swap18 = 3; }
		if (*o8 == 41 || *o8 == 42 || *o8 == 43 || *o8 == 44 || *o8 == 46 || *o8 == 47 || *o8 == 48 || *o8 == 49) { *swap18 = 4; }
		if (*o8 == 51 || *o8 == 52 || *o8 == 53 || *o8 == 54 || *o8 == 56 || *o8 == 57 || *o8 == 58 || *o8 == 59) { *swap18 = 5; }
		if (*o8 == 61 || *o8 == 62 || *o8 == 63 || *o8 == 64 || *o8 == 66 || *o8 == 67 || *o8 == 68 || *o8 == 69) { *swap18 = 6; }
		//
		if (*o9 == 11 || *o9 == 12 || *o9 == 13 || *o9 == 14 || *o9 == 16 || *o9 == 17 || *o9 == 18 || *o9 == 19) { *swap19 = 1; }
		if (*o9 == 21 || *o9 == 22 || *o9 == 23 || *o9 == 24 || *o9 == 26 || *o9 == 27 || *o9 == 28 || *o9 == 29) { *swap19 = 2; }
		if (*o9 == 31 || *o9 == 32 || *o9 == 33 || *o9 == 34 || *o9 == 36 || *o9 == 37 || *o9 == 38 || *o9 == 39) { *swap19 = 3; }
		if (*o9 == 41 || *o9 == 42 || *o9 == 43 || *o9 == 44 || *o9 == 46 || *o9 == 47 || *o9 == 48 || *o9 == 49) { *swap19 = 4; }
		if (*o9 == 51 || *o9 == 52 || *o9 == 53 || *o9 == 54 || *o9 == 56 || *o9 == 57 || *o9 == 58 || *o9 == 59) { *swap19 = 5; }
		if (*o9 == 61 || *o9 == 62 || *o9 == 63 || *o9 == 64 || *o9 == 66 || *o9 == 67 || *o9 == 68 || *o9 == 69) { *swap19 = 6; }
	//B
	if (*b1 == 11 || *b1 == 12 || *b1 == 13 || *b1 == 14 || *b1 == 16 || *b1 == 17 || *b1 == 18 || *b1 == 19) { *swap21 = 1; }
	if (*b1 == 21 || *b1 == 22 || *b1 == 23 || *b1 == 24 || *b1 == 26 || *b1 == 27 || *b1 == 28 || *b1 == 29) { *swap21 = 2; }
	if (*b1 == 31 || *b1 == 32 || *b1 == 33 || *b1 == 34 || *b1 == 36 || *b1 == 37 || *b1 == 38 || *b1 == 39) { *swap21 = 3; }
	if (*b1 == 41 || *b1 == 42 || *b1 == 43 || *b1 == 44 || *b1 == 46 || *b1 == 47 || *b1 == 48 || *b1 == 49) { *swap21 = 4; }
	if (*b1 == 51 || *b1 == 52 || *b1 == 53 || *b1 == 54 || *b1 == 56 || *b1 == 57 || *b1 == 58 || *b1 == 59) { *swap21 = 5; }
	if (*b1 == 61 || *b1 == 62 || *b1 == 63 || *b1 == 64 || *b1 == 66 || *b1 == 67 || *b1 == 68 || *b1 == 69) { *swap21 = 6; }
    //
	if (*b2 == 11 || *b2 == 12 || *b2 == 13 || *b2 == 14 || *b2 == 16 || *b2 == 17 || *b2 == 18 || *b2 == 19) { *swap22 = 1; }
	if (*b2 == 21 || *b2 == 22 || *b2 == 23 || *b2 == 24 || *b2 == 26 || *b2 == 27 || *b2 == 28 || *b2 == 29) { *swap22 = 2; }
	if (*b2 == 31 || *b2 == 32 || *b2 == 33 || *b2 == 34 || *b2 == 36 || *b2 == 37 || *b2 == 38 || *b2 == 39) { *swap22 = 3; }
	if (*b2 == 41 || *b2 == 42 || *b2 == 43 || *b2 == 44 || *b2 == 46 || *b2 == 47 || *b2 == 48 || *b2 == 49) { *swap22 = 4; }
	if (*b2 == 51 || *b2 == 52 || *b2 == 53 || *b2 == 54 || *b2 == 56 || *b2 == 57 || *b2 == 58 || *b2 == 59) { *swap22 = 5; }
	if (*b2 == 61 || *b2 == 62 || *b2 == 63 || *b2 == 64 || *b2 == 66 || *b2 == 67 || *b2 == 68 || *b2 == 69) { *swap22 = 6; }
	//
	if (*b3 == 11 || *b3 == 12 || *b3 == 13 || *b3 == 14 || *b3 == 16 || *b3 == 17 || *b3 == 18 || *b3 == 19) { *swap23 = 1; }
	if (*b3 == 21 || *b3 == 22 || *b3 == 23 || *b3 == 24 || *b3 == 26 || *b3 == 27 || *b3 == 28 || *b3 == 29) { *swap23 = 2; }
	if (*b3 == 31 || *b3 == 32 || *b3 == 33 || *b3 == 34 || *b3 == 36 || *b3 == 37 || *b3 == 38 || *b3 == 39) { *swap23 = 3; }
	if (*b3 == 41 || *b3 == 42 || *b3 == 43 || *b3 == 44 || *b3 == 46 || *b3 == 47 || *b3 == 48 || *b3 == 49) { *swap23 = 4; }
	if (*b3 == 51 || *b3 == 52 || *b3 == 53 || *b3 == 54 || *b3 == 56 || *b3 == 57 || *b3 == 58 || *b3 == 59) { *swap23 = 5; }
	if (*b3 == 61 || *b3 == 62 || *b3 == 63 || *b3 == 64 || *b3 == 66 || *b3 == 67 || *b3 == 68 || *b3 == 69) { *swap23 = 6; }
	//
	if (*b4 == 11 || *b4 == 12 || *b4 == 13 || *b4 == 14 || *b4 == 16 || *b4 == 17 || *b4 == 18 || *b4 == 19) { *swap24 = 1; }
	if (*b4 == 21 || *b4 == 22 || *b4 == 23 || *b4 == 24 || *b4 == 26 || *b4 == 27 || *b4 == 28 || *b4 == 29) { *swap24 = 2; }
	if (*b4 == 31 || *b4 == 32 || *b4 == 33 || *b4 == 34 || *b4 == 36 || *b4 == 37 || *b4 == 38 || *b4 == 39) { *swap24 = 3; }
	if (*b4 == 41 || *b4 == 42 || *b4 == 43 || *b4 == 44 || *b4 == 46 || *b4 == 47 || *b4 == 48 || *b4 == 49) { *swap24 = 4; }
	if (*b4 == 51 || *b4 == 52 || *b4 == 53 || *b4 == 54 || *b4 == 56 || *b4 == 57 || *b4 == 58 || *b4 == 59) { *swap24 = 5; }
	if (*b4 == 61 || *b4 == 62 || *b4 == 63 || *b4 == 64 || *b4 == 66 || *b4 == 67 || *b4 == 68 || *b4 == 69) { *swap24 = 6; }
	//
	if (*b6 == 11 || *b6 == 12 || *b6 == 13 || *b6 == 14 || *b6 == 16 || *b6 == 17 || *b6 == 18 || *b6 == 19) { *swap26 = 1; }
	if (*b6 == 21 || *b6 == 22 || *b6 == 23 || *b6 == 24 || *b6 == 26 || *b6 == 27 || *b6 == 28 || *b6 == 29) { *swap26 = 2; }
	if (*b6 == 31 || *b6 == 32 || *b6 == 33 || *b6 == 34 || *b6 == 36 || *b6 == 37 || *b6 == 38 || *b6 == 39) { *swap26 = 3; }
	if (*b6 == 41 || *b6 == 42 || *b6 == 43 || *b6 == 44 || *b6 == 46 || *b6 == 47 || *b6 == 48 || *b6 == 49) { *swap26 = 4; }
	if (*b6 == 51 || *b6 == 52 || *b6 == 53 || *b6 == 54 || *b6 == 56 || *b6 == 57 || *b6 == 58 || *b6 == 59) { *swap26 = 5; }
	if (*b6 == 61 || *b6 == 62 || *b6 == 63 || *b6 == 64 || *b6 == 66 || *b6 == 67 || *b6 == 68 || *b6 == 69) { *swap26 = 6; }
	//
	if (*b7 == 11 || *b7 == 12 || *b7 == 13 || *b7 == 14 || *b7 == 16 || *b7 == 17 || *b7 == 18 || *b7 == 19) { *swap27 = 1; }
	if (*b7 == 21 || *b7 == 22 || *b7 == 23 || *b7 == 24 || *b7 == 26 || *b7 == 27 || *b7 == 28 || *b7 == 29) { *swap27 = 2; }
	if (*b7 == 31 || *b7 == 32 || *b7 == 33 || *b7 == 34 || *b7 == 36 || *b7 == 37 || *b7 == 38 || *b7 == 39) { *swap27 = 3; }
	if (*b7 == 41 || *b7 == 42 || *b7 == 43 || *b7 == 44 || *b7 == 46 || *b7 == 47 || *b7 == 48 || *b7 == 49) { *swap27 = 4; }
	if (*b7 == 51 || *b7 == 52 || *b7 == 53 || *b7 == 54 || *b7 == 56 || *b7 == 57 || *b7 == 58 || *b7 == 59) { *swap27 = 5; }
	if (*b7 == 61 || *b7 == 62 || *b7 == 63 || *b7 == 64 || *b7 == 66 || *b7 == 67 || *b7 == 68 || *b7 == 69) { *swap27 = 6; }
	//
	if (*b8 == 11 || *b8 == 12 || *b8 == 13 || *b8 == 14 || *b8 == 16 || *b8 == 17 || *b8 == 18 || *b8 == 19) { *swap28 = 1; }
	if (*b8 == 21 || *b8 == 22 || *b8 == 23 || *b8 == 24 || *b8 == 26 || *b8 == 27 || *b8 == 28 || *b8 == 29) { *swap28 = 2; }
	if (*b8 == 31 || *b8 == 32 || *b8 == 33 || *b8 == 34 || *b8 == 36 || *b8 == 37 || *b8 == 38 || *b8 == 39) { *swap28 = 3; }
	if (*b8 == 41 || *b8 == 42 || *b8 == 43 || *b8 == 44 || *b8 == 46 || *b8 == 47 || *b8 == 48 || *b8 == 49) { *swap28 = 4; }
	if (*b8 == 51 || *b8 == 52 || *b8 == 53 || *b8 == 54 || *b8 == 56 || *b8 == 57 || *b8 == 58 || *b8 == 59) { *swap28 = 5; }
	if (*b8 == 61 || *b8 == 62 || *b8 == 63 || *b8 == 64 || *b8 == 66 || *b8 == 67 || *b8 == 68 || *b8 == 69) { *swap28 = 6; }
	//
	if (*b9 == 11 || *b9 == 12 || *b9 == 13 || *b9 == 14 || *b9 == 16 || *b9 == 17 || *b9 == 18 || *b9 == 19) { *swap29 = 1; }
	if (*b9 == 21 || *b9 == 22 || *b9 == 23 || *b9 == 24 || *b9 == 26 || *b9 == 27 || *b9 == 28 || *b9 == 29) { *swap29 = 2; }
	if (*b9 == 31 || *b9 == 32 || *b9 == 33 || *b9 == 34 || *b9 == 36 || *b9 == 37 || *b9 == 38 || *b9 == 39) { *swap29 = 3; }
	if (*b9 == 41 || *b9 == 42 || *b9 == 43 || *b9 == 44 || *b9 == 46 || *b9 == 47 || *b9 == 48 || *b9 == 49) { *swap29 = 4; }
	if (*b9 == 51 || *b9 == 52 || *b9 == 53 || *b9 == 54 || *b9 == 56 || *b9 == 57 || *b9 == 58 || *b9 == 59) { *swap29 = 5; }
	if (*b9 == 61 || *b9 == 62 || *b9 == 63 || *b9 == 64 || *b9 == 66 || *b9 == 67 || *b9 == 68 || *b9 == 69) { *swap29 = 6; }
	//R
	if (*r1 == 11 || *r1 == 12 || *r1 == 13 || *r1 == 14 || *r1 == 16 || *r1 == 17 || *r1 == 18 || *r1 == 19) { *swap31 = 1; }
	if (*r1 == 21 || *r1 == 22 || *r1 == 23 || *r1 == 24 || *r1 == 26 || *r1 == 27 || *r1 == 28 || *r1 == 29) { *swap31 = 2; }
	if (*r1 == 31 || *r1 == 32 || *r1 == 33 || *r1 == 34 || *r1 == 36 || *r1 == 37 || *r1 == 38 || *r1 == 39) { *swap31 = 3; }
	if (*r1 == 41 || *r1 == 42 || *r1 == 43 || *r1 == 44 || *r1 == 46 || *r1 == 47 || *r1 == 48 || *r1 == 49) { *swap31 = 4; }
	if (*r1 == 51 || *r1 == 52 || *r1 == 53 || *r1 == 54 || *r1 == 56 || *r1 == 57 || *r1 == 58 || *r1 == 59) { *swap31 = 5; }
	if (*r1 == 61 || *r1 == 62 || *r1 == 63 || *r1 == 64 || *r1 == 66 || *r1 == 67 || *r1 == 68 || *r1 == 69) { *swap31 = 6; }
	//
	if (*r2 == 11 || *r2 == 12 || *r2 == 13 || *r2 == 14 || *r2 == 16 || *r2 == 17 || *r2 == 18 || *r2 == 19) { *swap32 = 1; }
	if (*r2 == 21 || *r2 == 22 || *r2 == 23 || *r2 == 24 || *r2 == 26 || *r2 == 27 || *r2 == 28 || *r2 == 29) { *swap32 = 2; }
	if (*r2 == 31 || *r2 == 32 || *r2 == 33 || *r2 == 34 || *r2 == 36 || *r2 == 37 || *r2 == 38 || *r2 == 39) { *swap32 = 3; }
	if (*r2 == 41 || *r2 == 42 || *r2 == 43 || *r2 == 44 || *r2 == 46 || *r2 == 47 || *r2 == 48 || *r2 == 49) { *swap32 = 4; }
	if (*r2 == 51 || *r2 == 52 || *r2 == 53 || *r2 == 54 || *r2 == 56 || *r2 == 57 || *r2 == 58 || *r2 == 59) { *swap32 = 5; }
	if (*r2 == 61 || *r2 == 62 || *r2 == 63 || *r2 == 64 || *r2 == 66 || *r2 == 67 || *r2 == 68 || *r2 == 69) { *swap32 = 6; }
	//
	if (*r3 == 11 || *r3 == 12 || *r3 == 13 || *r3 == 14 || *r3 == 16 || *r3 == 17 || *r3 == 18 || *r3 == 19) { *swap33 = 1; }
	if (*r3 == 21 || *r3 == 22 || *r3 == 23 || *r3 == 24 || *r3 == 26 || *r3 == 27 || *r3 == 28 || *r3 == 29) { *swap33 = 2; }
	if (*r3 == 31 || *r3 == 32 || *r3 == 33 || *r3 == 34 || *r3 == 36 || *r3 == 37 || *r3 == 38 || *r3 == 39) { *swap33 = 3; }
	if (*r3 == 41 || *r3 == 42 || *r3 == 43 || *r3 == 44 || *r3 == 46 || *r3 == 47 || *r3 == 48 || *r3 == 49) { *swap33 = 4; }
	if (*r3 == 51 || *r3 == 52 || *r3 == 53 || *r3 == 54 || *r3 == 56 || *r3 == 57 || *r3 == 58 || *r3 == 59) { *swap33 = 5; }
	if (*r3 == 61 || *r3 == 62 || *r3 == 63 || *r3 == 64 || *r3 == 66 || *r3 == 67 || *r3 == 68 || *r3 == 69) { *swap33 = 6; }
	//
	if (*r4 == 11 || *r4 == 12 || *r4 == 13 || *r4 == 14 || *r4 == 16 || *r4 == 17 || *r4 == 18 || *r4 == 19) { *swap34 = 1; }
	if (*r4 == 21 || *r4 == 22 || *r4 == 23 || *r4 == 24 || *r4 == 26 || *r4 == 27 || *r4 == 28 || *r4 == 29) { *swap34 = 2; }
	if (*r4 == 31 || *r4 == 32 || *r4 == 33 || *r4 == 34 || *r4 == 36 || *r4 == 37 || *r4 == 38 || *r4 == 39) { *swap34 = 3; }
	if (*r4 == 41 || *r4 == 42 || *r4 == 43 || *r4 == 44 || *r4 == 46 || *r4 == 47 || *r4 == 48 || *r4 == 49) { *swap34 = 4; }
	if (*r4 == 51 || *r4 == 52 || *r4 == 53 || *r4 == 54 || *r4 == 56 || *r4 == 57 || *r4 == 58 || *r4 == 59) { *swap34 = 5; }
	if (*r4 == 61 || *r4 == 62 || *r4 == 63 || *r4 == 64 || *r4 == 66 || *r4 == 67 || *r4 == 68 || *r4 == 69) { *swap34 = 6; }
	//
	if (*r6 == 11 || *r6 == 12 || *r6 == 13 || *r6 == 14 || *r6 == 16 || *r6 == 17 || *r6 == 18 || *r6 == 19) { *swap36 = 1; }
	if (*r6 == 21 || *r6 == 22 || *r6 == 23 || *r6 == 24 || *r6 == 26 || *r6 == 27 || *r6 == 28 || *r6 == 29) { *swap36 = 2; }
	if (*r6 == 31 || *r6 == 32 || *r6 == 33 || *r6 == 34 || *r6 == 36 || *r6 == 37 || *r6 == 38 || *r6 == 39) { *swap36 = 3; }
	if (*r6 == 41 || *r6 == 42 || *r6 == 43 || *r6 == 44 || *r6 == 46 || *r6 == 47 || *r6 == 48 || *r6 == 49) { *swap36 = 4; }
	if (*r6 == 51 || *r6 == 52 || *r6 == 53 || *r6 == 54 || *r6 == 56 || *r6 == 57 || *r6 == 58 || *r6 == 59) { *swap36 = 5; }
	if (*r6 == 61 || *r6 == 62 || *r6 == 63 || *r6 == 64 || *r6 == 66 || *r6 == 67 || *r6 == 68 || *r6 == 69) { *swap36 = 6; }
	//
	if (*r7 == 11 || *r7 == 12 || *r7 == 13 || *r7 == 14 || *r7 == 16 || *r7 == 17 || *r7 == 18 || *r7 == 19) { *swap37 = 1; }
	if (*r7 == 21 || *r7 == 22 || *r7 == 23 || *r7 == 24 || *r7 == 26 || *r7 == 27 || *r7 == 28 || *r7 == 29) { *swap37 = 2; }
	if (*r7 == 31 || *r7 == 32 || *r7 == 33 || *r7 == 34 || *r7 == 36 || *r7 == 37 || *r7 == 38 || *r7 == 39) { *swap37 = 3; }
	if (*r7 == 41 || *r7 == 42 || *r7 == 43 || *r7 == 44 || *r7 == 46 || *r7 == 47 || *r7 == 48 || *r7 == 49) { *swap37 = 4; }
	if (*r7 == 51 || *r7 == 52 || *r7 == 53 || *r7 == 54 || *r7 == 56 || *r7 == 57 || *r7 == 58 || *r7 == 59) { *swap37 = 5; }
	if (*r7 == 61 || *r7 == 62 || *r7 == 63 || *r7 == 64 || *r7 == 66 || *r7 == 67 || *r7 == 68 || *r7 == 69) { *swap37 = 6; }
	//
	if (*r8 == 11 || *r8 == 12 || *r8 == 13 || *r8 == 14 || *r8 == 16 || *r8 == 17 || *r8 == 18 || *r8 == 19) { *swap38 = 1; }
	if (*r8 == 21 || *r8 == 22 || *r8 == 23 || *r8 == 24 || *r8 == 26 || *r8 == 27 || *r8 == 28 || *r8 == 29) { *swap38 = 2; }
	if (*r8 == 31 || *r8 == 32 || *r8 == 33 || *r8 == 34 || *r8 == 36 || *r8 == 37 || *r8 == 38 || *r8 == 39) { *swap38 = 3; }
	if (*r8 == 41 || *r8 == 42 || *r8 == 43 || *r8 == 44 || *r8 == 46 || *r8 == 47 || *r8 == 48 || *r8 == 49) { *swap38 = 4; }
	if (*r8 == 51 || *r8 == 52 || *r8 == 53 || *r8 == 54 || *r8 == 56 || *r8 == 57 || *r8 == 58 || *r8 == 59) { *swap38 = 5; }
	if (*r8 == 61 || *r8 == 62 || *r8 == 63 || *r8 == 64 || *r8 == 66 || *r8 == 67 || *r8 == 68 || *r8 == 69) { *swap38 = 6; }
	//
	if (*r9 == 11 || *r9 == 12 || *r9 == 13 || *r9 == 14 || *r9 == 16 || *r9 == 17 || *r9 == 18 || *r9 == 19) { *swap39 = 1; }
	if (*r9 == 21 || *r9 == 22 || *r9 == 23 || *r9 == 24 || *r9 == 26 || *r9 == 27 || *r9 == 28 || *r9 == 29) { *swap39 = 2; }
	if (*r9 == 31 || *r9 == 32 || *r9 == 33 || *r9 == 34 || *r9 == 36 || *r9 == 37 || *r9 == 38 || *r9 == 39) { *swap39 = 3; }
	if (*r9 == 41 || *r9 == 42 || *r9 == 43 || *r9 == 44 || *r9 == 46 || *r9 == 47 || *r9 == 48 || *r9 == 49) { *swap39 = 4; }
	if (*r9 == 51 || *r9 == 52 || *r9 == 53 || *r9 == 54 || *r9 == 56 || *r9 == 57 || *r9 == 58 || *r9 == 59) { *swap39 = 5; }
	if (*r9 == 61 || *r9 == 62 || *r9 == 63 || *r9 == 64 || *r9 == 66 || *r9 == 67 || *r9 == 68 || *r9 == 69) { *swap39 = 6; }
	//G
	if (*g1 == 11 || *g1 == 12 || *g1 == 13 || *r1 == 14 || *r1 == 16 || *g1 == 17 || *g1 == 18 || *g1 == 19) { *swap41 = 1; }
	if (*g1 == 21 || *g1 == 22 || *g1 == 23 || *r1 == 24 || *r1 == 26 || *g1 == 27 || *g1 == 28 || *g1 == 29) { *swap41 = 2; }
	if (*g1 == 31 || *g1 == 32 || *g1 == 33 || *r1 == 34 || *r1 == 36 || *g1 == 37 || *g1 == 38 || *g1 == 39) { *swap41 = 3; }
	if (*g1 == 41 || *g1 == 42 || *g1 == 43 || *r1 == 44 || *r1 == 46 || *g1 == 47 || *g1 == 48 || *g1 == 49) { *swap41 = 4; }
	if (*g1 == 51 || *g1 == 52 || *g1 == 53 || *r1 == 54 || *r1 == 56 || *g1 == 57 || *g1 == 58 || *g1 == 59) { *swap41 = 5; }
	if (*g1 == 61 || *g1 == 62 || *g1 == 63 || *r1 == 64 || *r1 == 66 || *g1 == 67 || *g1 == 68 || *g1 == 69) { *swap41 = 6; }
	//
	if (*g2 == 11 || *g2 == 12 || *g2 == 13 || *g2 == 14 || *g2 == 16 || *g2 == 17 || *g2 == 18 || *g2 == 19) { *swap42 = 1; }
	if (*g2 == 21 || *g2 == 22 || *g2 == 23 || *g2 == 24 || *g2 == 26 || *g2 == 27 || *g2 == 28 || *g2 == 29) { *swap42 = 2; }
	if (*g2 == 31 || *g2 == 32 || *g2 == 33 || *g2 == 34 || *g2 == 36 || *g2 == 37 || *g2 == 38 || *g2 == 39) { *swap42 = 3; }
	if (*g2 == 41 || *g2 == 42 || *g2 == 43 || *g2 == 44 || *g2 == 46 || *g2 == 47 || *g2 == 48 || *g2 == 49) { *swap42 = 4; }
	if (*g2 == 51 || *g2 == 52 || *g2 == 53 || *g2 == 54 || *g2 == 56 || *g2 == 57 || *g2 == 58 || *g2 == 59) { *swap42 = 5; }
	if (*g2 == 61 || *g2 == 62 || *g2 == 63 || *g2 == 64 || *g2 == 66 || *g2 == 67 || *g2 == 68 || *g2 == 69) { *swap42 = 6; }
	//
	if (*g3 == 11 || *g3 == 12 || *g3 == 13 || *g3 == 14 || *g3 == 16 || *g3 == 17 || *g3 == 18 || *g3 == 19) { *swap43 = 1; }
	if (*g3 == 21 || *g3 == 22 || *g3 == 23 || *g3 == 24 || *g3 == 26 || *g3 == 27 || *g3 == 28 || *g3 == 29) { *swap43 = 2; }
	if (*g3 == 31 || *g3 == 32 || *g3 == 33 || *g3 == 34 || *g3 == 36 || *g3 == 37 || *g3 == 38 || *g3 == 39) { *swap43 = 3; }
	if (*g3 == 41 || *g3 == 42 || *g3 == 43 || *g3 == 44 || *g3 == 46 || *g3 == 47 || *g3 == 48 || *g3 == 49) { *swap43 = 4; }
	if (*g3 == 51 || *g3 == 52 || *g3 == 53 || *g3 == 54 || *g3 == 56 || *g3 == 57 || *g3 == 58 || *g3 == 59) { *swap43 = 5; }
	if (*g3 == 61 || *g3 == 62 || *g3 == 63 || *g3 == 64 || *g3 == 66 || *g3 == 67 || *g3 == 68 || *g3 == 69) { *swap43 = 6; }
	//
	if (*g4 == 11 || *g4 == 12 || *g4 == 13 || *g4 == 14 || *g4 == 16 || *g4 == 17 || *g4 == 18 || *g4 == 19) { *swap44 = 1; }
	if (*g4 == 21 || *g4 == 22 || *g4 == 23 || *g4 == 24 || *g4 == 26 || *g4 == 27 || *g4 == 28 || *g4 == 29) { *swap44 = 2; }
	if (*g4 == 31 || *g4 == 32 || *g4 == 33 || *g4 == 34 || *g4 == 36 || *g4 == 37 || *g4 == 38 || *g4 == 39) { *swap44 = 3; }
	if (*g4 == 41 || *g4 == 42 || *g4 == 43 || *g4 == 44 || *g4 == 46 || *g4 == 47 || *g4 == 48 || *g4 == 49) { *swap44 = 4; }
	if (*g4 == 51 || *g4 == 52 || *g4 == 53 || *g4 == 54 || *g4 == 56 || *g4 == 57 || *g4 == 58 || *g4 == 59) { *swap44 = 5; }
	if (*g4 == 61 || *g4 == 62 || *g4 == 63 || *g4 == 64 || *g4 == 66 || *g4 == 67 || *g4 == 68 || *g4 == 69) { *swap44 = 6; }
	//
	if (*g6 == 11 || *g6 == 12 || *g6 == 13 || *g6 == 14 || *g6 == 16 || *g6 == 17 || *g6 == 18 || *g6 == 19) { *swap46 = 1; }
	if (*g6 == 21 || *g6 == 22 || *g6 == 23 || *g6 == 24 || *g6 == 26 || *g6 == 27 || *g6 == 28 || *g6 == 29) { *swap46 = 2; }
	if (*g6 == 31 || *g6 == 32 || *g6 == 33 || *g6 == 34 || *g6 == 36 || *g6 == 37 || *g6 == 38 || *g6 == 39) { *swap46 = 3; }
	if (*g6 == 41 || *g6 == 42 || *g6 == 43 || *g6 == 44 || *g6 == 46 || *g6 == 47 || *g6 == 48 || *g6 == 49) { *swap46 = 4; }
	if (*g6 == 51 || *g6 == 52 || *g6 == 53 || *g6 == 54 || *g6 == 56 || *g6 == 57 || *g6 == 58 || *g6 == 59) { *swap46 = 5; }
	if (*g6 == 61 || *g6 == 62 || *g6 == 63 || *g6 == 64 || *g6 == 66 || *g6 == 67 || *g6 == 68 || *g6 == 69) { *swap46 = 6; }
	//
	if (*g7 == 11 || *g7 == 12 || *g7 == 13 || *g7 == 14 || *g7 == 16 || *g7 == 17 || *g7 == 18 || *g7 == 19) { *swap47 = 1; }
	if (*g7 == 21 || *g7 == 22 || *g7 == 23 || *g7 == 24 || *g7 == 26 || *g7 == 27 || *g7 == 28 || *g7 == 29) { *swap47 = 2; }
	if (*g7 == 31 || *g7 == 32 || *g7 == 33 || *g7 == 34 || *g7 == 36 || *g7 == 37 || *g7 == 38 || *g7 == 39) { *swap47 = 3; }
	if (*g7 == 41 || *g7 == 42 || *g7 == 43 || *g7 == 44 || *g7 == 46 || *g7 == 47 || *g7 == 48 || *g7 == 49) { *swap47 = 4; }
	if (*g7 == 51 || *g7 == 52 || *g7 == 53 || *g7 == 54 || *g7 == 56 || *g7 == 57 || *g7 == 58 || *g7 == 59) { *swap47 = 5; }
	if (*g7 == 61 || *g7 == 62 || *g7 == 63 || *g7 == 64 || *g7 == 66 || *g7 == 67 || *g7 == 68 || *g7 == 69) { *swap47 = 6; }
	//
	if (*g8 == 11 || *g8 == 12 || *g8 == 13 || *g8 == 14 || *g8 == 16 || *g8 == 17 || *g8 == 18 || *g8 == 19) { *swap48 = 1; }
	if (*g8 == 21 || *g8 == 22 || *g8 == 23 || *g8 == 24 || *g8 == 26 || *g8 == 27 || *g8 == 28 || *g8 == 29) { *swap48 = 2; }
	if (*g8 == 31 || *g8 == 32 || *g8 == 33 || *g8 == 34 || *g8 == 36 || *g8 == 37 || *g8 == 38 || *g8 == 39) { *swap48 = 3; }
	if (*g8 == 41 || *g8 == 42 || *g8 == 43 || *g8 == 44 || *g8 == 46 || *g8 == 47 || *g8 == 48 || *g8 == 49) { *swap48 = 4; }
	if (*g8 == 51 || *g8 == 52 || *g8 == 53 || *g8 == 54 || *g8 == 56 || *g8 == 57 || *g8 == 58 || *g8 == 59) { *swap48 = 5; }
	if (*g8 == 61 || *g8 == 62 || *g8 == 63 || *g8 == 64 || *g8 == 66 || *g8 == 67 || *g8 == 68 || *g8 == 69) { *swap48 = 6; }
	//
	if (*g9 == 11 || *g9 == 12 || *g9 == 13 || *g9 == 14 || *g9 == 16 || *g9 == 17 || *g9 == 18 || *g9 == 19) { *swap49 = 1; }
	if (*g9 == 21 || *g9 == 22 || *g9 == 23 || *g9 == 24 || *g9 == 26 || *g9 == 27 || *g9 == 28 || *g9 == 29) { *swap49 = 2; }
	if (*g9 == 31 || *g9 == 32 || *g9 == 33 || *g9 == 34 || *g9 == 36 || *g9 == 37 || *g9 == 38 || *g9 == 39) { *swap49 = 3; }
	if (*g9 == 41 || *g9 == 42 || *g9 == 43 || *g9 == 44 || *g9 == 46 || *g9 == 47 || *g9 == 48 || *g9 == 49) { *swap49 = 4; }
	if (*g9 == 51 || *g9 == 52 || *g9 == 53 || *g9 == 54 || *g9 == 56 || *g9 == 57 || *g9 == 58 || *g9 == 59) { *swap49 = 5; }
	if (*g9 == 61 || *g9 == 62 || *g9 == 63 || *g9 == 64 || *g9 == 66 || *g9 == 67 || *g9 == 68 || *g9 == 69) { *swap49 = 6; }
	//Y
	if (*y1 == 11 || *y1 == 12 || *y1 == 13 || *y1 == 14 || *y1 == 16 || *y1 == 17 || *y1 == 18 || *y1 == 19) { *swap51 = 1; }
	if (*y1 == 21 || *y1 == 22 || *y1 == 23 || *y1 == 24 || *y1 == 26 || *y1 == 27 || *y1 == 28 || *y1 == 29) { *swap51 = 2; }
	if (*y1 == 31 || *y1 == 32 || *y1 == 33 || *y1 == 34 || *y1 == 36 || *y1 == 37 || *y1 == 38 || *y1 == 39) { *swap51 = 3; }
	if (*y1 == 41 || *y1 == 42 || *y1 == 43 || *y1 == 44 || *y1 == 46 || *y1 == 47 || *y1 == 48 || *y1 == 49) { *swap51 = 4; }
	if (*y1 == 51 || *y1 == 52 || *y1 == 53 || *y1 == 54 || *y1 == 56 || *y1 == 57 || *y1 == 58 || *y1 == 59) { *swap51 = 5; }
	if (*y1 == 61 || *y1 == 62 || *y1 == 63 || *y1 == 64 || *y1 == 66 || *y1 == 67 || *y1 == 68 || *y1 == 69) { *swap51 = 6; }
	//
	if (*y2 == 11 || *y2 == 12 || *y2 == 13 || *y2 == 14 || *y2 == 16 || *y2 == 17 || *y2 == 18 || *y2 == 19) { *swap52 = 1; }
	if (*y2 == 21 || *y2 == 22 || *y2 == 23 || *y2 == 24 || *y2 == 26 || *y2 == 27 || *y2 == 28 || *y2 == 29) { *swap52 = 2; }
	if (*y2 == 31 || *y2 == 32 || *y2 == 33 || *y2 == 34 || *y2 == 36 || *y2 == 37 || *y2 == 38 || *y2 == 39) { *swap52 = 3; }
	if (*y2 == 41 || *y2 == 42 || *y2 == 43 || *y2 == 44 || *y2 == 46 || *y2 == 47 || *y2 == 48 || *y2 == 49) { *swap52 = 4; }
	if (*y2 == 51 || *y2 == 52 || *y2 == 53 || *y2 == 54 || *y2 == 56 || *y2 == 57 || *y2 == 58 || *y2 == 59) { *swap52 = 5; }
	if (*y2 == 61 || *y2 == 62 || *y2 == 63 || *y2 == 64 || *y2 == 66 || *y2 == 67 || *y2 == 68 || *y2 == 69) { *swap52 = 6; }
	//
	if (*y3 == 11 || *y3 == 12 || *y3 == 13 || *y3 == 14 || *y3 == 16 || *y3 == 17 || *y3 == 18 || *y3 == 19) { *swap53 = 1; }
	if (*y3 == 21 || *y3 == 22 || *y3 == 23 || *y3 == 24 || *y3 == 26 || *y3 == 27 || *y3 == 28 || *y3 == 29) { *swap53 = 2; }
	if (*y3 == 31 || *y3 == 32 || *y3 == 33 || *y3 == 34 || *y3 == 36 || *y3 == 37 || *y3 == 38 || *y3 == 39) { *swap53 = 3; }
	if (*y3 == 41 || *y3 == 42 || *y3 == 43 || *y3 == 44 || *y3 == 46 || *y3 == 47 || *y3 == 48 || *y3 == 49) { *swap53 = 4; }
	if (*y3 == 51 || *y3 == 52 || *y3 == 53 || *y3 == 54 || *y3 == 56 || *y3 == 57 || *y3 == 58 || *y3 == 59) { *swap53 = 5; }
	if (*y3 == 61 || *y3 == 62 || *y3 == 63 || *y3 == 64 || *y3 == 66 || *y3 == 67 || *y3 == 68 || *y3 == 69) { *swap53 = 6; }
	//
	if (*y4 == 11 || *y4 == 12 || *y4 == 13 || *y4 == 14 || *y4 == 16 || *y4 == 17 || *y4 == 18 || *y4 == 19) { *swap54 = 1; }
	if (*y4 == 21 || *y4 == 22 || *y4 == 23 || *y4 == 24 || *y4 == 26 || *y4 == 27 || *y4 == 28 || *y4 == 29) { *swap54 = 2; }
	if (*y4 == 31 || *y4 == 32 || *y4 == 33 || *y4 == 34 || *y4 == 36 || *y4 == 37 || *y4 == 38 || *y4 == 39) { *swap54 = 3; }
	if (*y4 == 41 || *y4 == 42 || *y4 == 43 || *y4 == 44 || *y4 == 46 || *y4 == 47 || *y4 == 48 || *y4 == 49) { *swap54 = 4; }
	if (*y4 == 51 || *y4 == 52 || *y4 == 53 || *y4 == 54 || *y4 == 56 || *y4 == 57 || *y4 == 58 || *y4 == 59) { *swap54 = 5; }
	if (*y4 == 61 || *y4 == 62 || *y4 == 63 || *y4 == 64 || *y4 == 66 || *y4 == 67 || *y4 == 68 || *y4 == 69) { *swap54 = 6; }
	//
	if (*y6 == 11 || *y6 == 12 || *y6 == 13 || *y6 == 14 || *y6 == 16 || *y6 == 17 || *y6 == 18 || *y6 == 19) { *swap56 = 1; }
	if (*y6 == 21 || *y6 == 22 || *y6 == 23 || *y6 == 24 || *y6 == 26 || *y6 == 27 || *y6 == 28 || *y6 == 29) { *swap56 = 2; }
	if (*y6 == 31 || *y6 == 32 || *y6 == 33 || *y6 == 34 || *y6 == 36 || *y6 == 37 || *y6 == 38 || *y6 == 39) { *swap56 = 3; }
	if (*y6 == 41 || *y6 == 42 || *y6 == 43 || *y6 == 44 || *y6 == 46 || *y6 == 47 || *y6 == 48 || *y6 == 49) { *swap56 = 4; }
	if (*y6 == 51 || *y6 == 52 || *y6 == 53 || *y6 == 54 || *y6 == 56 || *y6 == 57 || *y6 == 58 || *y6 == 59) { *swap56 = 5; }
	if (*y6 == 61 || *y6 == 62 || *y6 == 63 || *y6 == 64 || *y6 == 66 || *y6 == 67 || *y6 == 68 || *y6 == 69) { *swap56 = 6; }
	//
	if (*y7 == 11 || *y7 == 12 || *y7 == 13 || *y7 == 14 || *y7 == 16 || *y7 == 17 || *y7 == 18 || *y7 == 19) { *swap57 = 1; }
	if (*y7 == 21 || *y7 == 22 || *y7 == 23 || *y7 == 24 || *y7 == 26 || *y7 == 27 || *y7 == 28 || *y7 == 29) { *swap57 = 2; }
	if (*y7 == 31 || *y7 == 32 || *y7 == 33 || *y7 == 34 || *y7 == 36 || *y7 == 37 || *y7 == 38 || *y7 == 39) { *swap57 = 3; }
	if (*y7 == 41 || *y7 == 42 || *y7 == 43 || *y7 == 44 || *y7 == 46 || *y7 == 47 || *y7 == 48 || *y7 == 49) { *swap57 = 4; }
	if (*y7 == 51 || *y7 == 52 || *y7 == 53 || *y7 == 54 || *y7 == 56 || *y7 == 57 || *y7 == 58 || *y7 == 59) { *swap57 = 5; }
	if (*y7 == 61 || *y7 == 62 || *y7 == 63 || *y7 == 64 || *y7 == 66 || *y7 == 67 || *y7 == 68 || *y7 == 69) { *swap57 = 6; }
	//
	if (*y8 == 11 || *y8 == 12 || *y8 == 13 || *y8 == 14 || *y8 == 16 || *y8 == 17 || *y8 == 18 || *y8 == 19) { *swap58 = 1; }
	if (*y8 == 21 || *y8 == 22 || *y8 == 23 || *y8 == 24 || *y8 == 26 || *y8 == 27 || *y8 == 28 || *y8 == 29) { *swap58 = 2; }
	if (*y8 == 31 || *y8 == 32 || *y8 == 33 || *y8 == 34 || *y8 == 36 || *y8 == 37 || *y8 == 38 || *y8 == 39) { *swap58 = 3; }
	if (*y8 == 41 || *y8 == 42 || *y8 == 43 || *y8 == 44 || *y8 == 46 || *y8 == 47 || *y8 == 48 || *y8 == 49) { *swap58 = 4; }
	if (*y8 == 51 || *y8 == 52 || *y8 == 53 || *y8 == 54 || *y8 == 56 || *y8 == 57 || *y8 == 58 || *y8 == 59) { *swap58 = 5; }
	if (*y8 == 61 || *y8 == 62 || *y8 == 63 || *y8 == 64 || *y8 == 66 || *y8 == 67 || *y8 == 68 || *y8 == 69) { *swap58 = 6; }
	//
	if (*y9 == 11 || *y9 == 12 || *y9 == 13 || *y9 == 14 || *y9 == 16 || *y9 == 17 || *y9 == 18 || *y9 == 19) { *swap59 = 1; }
	if (*y9 == 21 || *y9 == 22 || *y9 == 23 || *y9 == 24 || *y9 == 26 || *y9 == 27 || *y9 == 28 || *y9 == 29) { *swap59 = 2; }
	if (*y9 == 31 || *y9 == 32 || *y9 == 33 || *y9 == 34 || *y9 == 36 || *y9 == 37 || *y9 == 38 || *y9 == 39) { *swap59 = 3; }
	if (*y9 == 41 || *y9 == 42 || *y9 == 43 || *y9 == 44 || *y9 == 46 || *y9 == 47 || *y9 == 48 || *y9 == 49) { *swap59 = 4; }
	if (*y9 == 51 || *y9 == 52 || *y9 == 53 || *y9 == 54 || *y9 == 56 || *y9 == 57 || *y9 == 58 || *y9 == 59) { *swap59 = 5; }
	if (*y9 == 61 || *y9 == 62 || *y9 == 63 || *y9 == 64 || *y9 == 66 || *y9 == 67 || *y9 == 68 || *y9 == 69) { *swap59 = 6; }
	//W
	if (*w1 == 11 || *w1 == 12 || *w1 == 13 || *w1 == 14 || *w1 == 16 || *w1 == 17 || *w1 == 18 || *w1 == 19) { *swap61 = 1; }
	if (*w1 == 21 || *w1 == 22 || *w1 == 23 || *w1 == 24 || *w1 == 26 || *w1 == 27 || *w1 == 28 || *w1 == 29) { *swap61 = 2; }
	if (*w1 == 31 || *w1 == 32 || *w1 == 33 || *w1 == 34 || *w1 == 36 || *w1 == 37 || *w1 == 38 || *w1 == 39) { *swap61 = 3; }
	if (*w1 == 41 || *w1 == 42 || *w1 == 43 || *w1 == 44 || *w1 == 46 || *w1 == 47 || *w1 == 48 || *w1 == 49) { *swap61 = 4; }
	if (*w1 == 51 || *w1 == 52 || *w1 == 53 || *w1 == 54 || *w1 == 56 || *w1 == 57 || *w1 == 58 || *w1 == 59) { *swap61 = 5; }
	if (*w1 == 61 || *w1 == 62 || *w1 == 63 || *w1 == 64 || *w1 == 66 || *w1 == 67 || *w1 == 68 || *w1 == 69) { *swap61 = 6; }
	//
	if (*w2 == 11 || *w2 == 12 || *w2 == 13 || *w2 == 14 || *w2 == 16 || *w2 == 17 || *w2 == 18 || *w2 == 19) { *swap62 = 1; }
	if (*w2 == 21 || *w2 == 22 || *w2 == 23 || *w2 == 24 || *w2 == 26 || *w2 == 27 || *w2 == 28 || *w2 == 29) { *swap62 = 2; }
	if (*w2 == 31 || *w2 == 32 || *w2 == 33 || *w2 == 34 || *w2 == 36 || *w2 == 37 || *w2 == 38 || *w2 == 39) { *swap62 = 3; }
	if (*w2 == 41 || *w2 == 42 || *w2 == 43 || *w2 == 44 || *w2 == 46 || *w2 == 47 || *w2 == 48 || *w2 == 49) { *swap62 = 4; }
	if (*w2 == 51 || *w2 == 52 || *w2 == 53 || *w2 == 54 || *w2 == 56 || *w2 == 57 || *w2 == 58 || *w2 == 59) { *swap62 = 5; }
	if (*w2 == 61 || *w2 == 62 || *w2 == 63 || *w2 == 64 || *w2 == 66 || *w2 == 67 || *w2 == 68 || *w2 == 69) { *swap62 = 6; }
	//
	if (*w3 == 11 || *w3 == 12 || *w3 == 13 || *w3 == 14 || *w3 == 16 || *w3 == 17 || *w3 == 18 || *w3 == 19) { *swap63 = 1; }
	if (*w3 == 21 || *w3 == 22 || *w3 == 23 || *w3 == 24 || *w3 == 26 || *w3 == 27 || *w3 == 28 || *w3 == 29) { *swap63 = 2; }
	if (*w3 == 31 || *w3 == 32 || *w3 == 33 || *w3 == 34 || *w3 == 36 || *w3 == 37 || *w3 == 38 || *w3 == 39) { *swap63 = 3; }
	if (*w3 == 41 || *w3 == 42 || *w3 == 43 || *w3 == 44 || *w3 == 46 || *w3 == 47 || *w3 == 48 || *w3 == 49) { *swap63 = 4; }
	if (*w3 == 51 || *w3 == 52 || *w3 == 53 || *w3 == 54 || *w3 == 56 || *w3 == 57 || *w3 == 58 || *w3 == 59) { *swap63 = 5; }
	if (*w3 == 61 || *w3 == 62 || *w3 == 63 || *w3 == 64 || *w3 == 66 || *w3 == 67 || *w3 == 68 || *w3 == 69) { *swap63 = 6; }
	//
	if (*w4 == 11 || *w4 == 12 || *w4 == 13 || *w4 == 14 || *w4 == 16 || *w4 == 17 || *w4 == 18 || *w4 == 19) { *swap64 = 1; }
	if (*w4 == 21 || *w4 == 22 || *w4 == 23 || *w4 == 24 || *w4 == 26 || *w4 == 27 || *w4 == 28 || *w4 == 29) { *swap64 = 2; }
	if (*w4 == 31 || *w4 == 32 || *w4 == 33 || *w4 == 34 || *w4 == 36 || *w4 == 37 || *w4 == 38 || *w4 == 39) { *swap64 = 3; }
	if (*w4 == 41 || *w4 == 42 || *w4 == 43 || *w4 == 44 || *w4 == 46 || *w4 == 47 || *w4 == 48 || *w4 == 49) { *swap64 = 4; }
	if (*w4 == 51 || *w4 == 52 || *w4 == 53 || *w4 == 54 || *w4 == 56 || *w4 == 57 || *w4 == 58 || *w4 == 59) { *swap64 = 5; }
	if (*w4 == 61 || *w4 == 62 || *w4 == 63 || *w4 == 64 || *w4 == 66 || *w4 == 67 || *w4 == 68 || *w4 == 69) { *swap64 = 6; }
	//
	if (*w6 == 11 || *w6 == 12 || *w6 == 13 || *w6 == 14 || *w6 == 16 || *w6 == 17 || *w6 == 18 || *w6 == 19) { *swap66 = 1; }
	if (*w6 == 21 || *w6 == 22 || *w6 == 23 || *w6 == 24 || *w6 == 26 || *w6 == 27 || *w6 == 28 || *w6 == 29) { *swap66 = 2; }
	if (*w6 == 31 || *w6 == 32 || *w6 == 33 || *w6 == 34 || *w6 == 36 || *w6 == 37 || *w6 == 38 || *w6 == 39) { *swap66 = 3; }
	if (*w6 == 41 || *w6 == 42 || *w6 == 43 || *w6 == 44 || *w6 == 46 || *w6 == 47 || *w6 == 48 || *w6 == 49) { *swap66 = 4; }
	if (*w6 == 51 || *w6 == 52 || *w6 == 53 || *w6 == 54 || *w6 == 56 || *w6 == 57 || *w6 == 58 || *w6 == 59) { *swap66 = 5; }
	if (*w6 == 61 || *w6 == 62 || *w6 == 63 || *w6 == 64 || *w6 == 66 || *w6 == 67 || *w6 == 68 || *w6 == 69) { *swap66 = 6; }
	//
	if (*w7 == 11 || *w7 == 12 || *w7 == 13 || *w7 == 14 || *w7 == 16 || *w7 == 17 || *w7 == 18 || *w7 == 19) { *swap67 = 1; }
	if (*w7 == 21 || *w7 == 22 || *w7 == 23 || *w7 == 24 || *w7 == 26 || *w7 == 27 || *w7 == 28 || *w7 == 29) { *swap67 = 2; }
	if (*w7 == 31 || *w7 == 32 || *w7 == 33 || *w7 == 34 || *w7 == 36 || *w7 == 37 || *w7 == 38 || *w7 == 39) { *swap67 = 3; }
	if (*w7 == 41 || *w7 == 42 || *w7 == 43 || *w7 == 44 || *w7 == 46 || *w7 == 47 || *w7 == 48 || *w7 == 49) { *swap67 = 4; }
	if (*w7 == 51 || *w7 == 52 || *w7 == 53 || *w7 == 54 || *w7 == 56 || *w7 == 57 || *w7 == 58 || *w7 == 59) { *swap67 = 5; }
	if (*w7 == 61 || *w7 == 62 || *w7 == 63 || *w7 == 64 || *w7 == 66 || *w7 == 67 || *w7 == 68 || *w7 == 69) { *swap67 = 6; }
	//
	if (*w8 == 11 || *w8 == 12 || *w8 == 13 || *w8 == 14 || *w8 == 16 || *w8 == 17 || *w8 == 18 || *w8 == 19) { *swap68 = 1; }
	if (*w8 == 21 || *w8 == 22 || *w8 == 23 || *w8 == 24 || *w8 == 26 || *w8 == 27 || *w8 == 28 || *w8 == 29) { *swap68 = 2; }
	if (*w8 == 31 || *w8 == 32 || *w8 == 33 || *w8 == 34 || *w8 == 36 || *w8 == 37 || *w8 == 38 || *w8 == 39) { *swap68 = 3; }
	if (*w8 == 41 || *w8 == 42 || *w8 == 43 || *w8 == 44 || *w8 == 46 || *w8 == 47 || *w8 == 48 || *w8 == 49) { *swap68 = 4; }
	if (*w8 == 51 || *w8 == 52 || *w8 == 53 || *w8 == 54 || *w8 == 56 || *w8 == 57 || *w8 == 58 || *w8 == 59) { *swap68 = 5; }
	if (*w8 == 61 || *w8 == 62 || *w8 == 63 || *w8 == 64 || *w8 == 66 || *w8 == 67 || *w8 == 68 || *w8 == 69) { *swap68 = 6; }
	//
	if (*w9 == 11 || *w9 == 12 || *w9 == 13 || *w9 == 14 || *w9 == 16 || *w9 == 17 || *w9 == 18 || *w9 == 19) { *swap69 = 1; }
	if (*w9 == 21 || *w9 == 22 || *w9 == 23 || *w9 == 24 || *w9 == 26 || *w9 == 27 || *w9 == 28 || *w9 == 29) { *swap69 = 2; }
	if (*w9 == 31 || *w9 == 32 || *w9 == 33 || *w9 == 34 || *w9 == 36 || *w9 == 37 || *w9 == 38 || *w9 == 39) { *swap69 = 3; }
	if (*w9 == 41 || *w9 == 42 || *w9 == 43 || *w9 == 44 || *w9 == 46 || *w9 == 47 || *w9 == 48 || *w9 == 49) { *swap69 = 4; }
	if (*w9 == 51 || *w9 == 52 || *w9 == 53 || *w9 == 54 || *w9 == 56 || *w9 == 57 || *w9 == 58 || *w9 == 59) { *swap69 = 5; }
	if (*w9 == 61 || *w9 == 62 || *w9 == 63 || *w9 == 64 || *w9 == 66 || *w9 == 67 || *w9 == 68 || *w9 == 69) { *swap69 = 6; }
}
void softset(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9, int *swap01)
{
	std::fstream plik;
	plik.open("plik.txt", std::ios::out | std::ios::app);
	*swap01 = 0;
	// *********** soft base
	if (*w2 == 62 && *w4 == 64 && *w6 == 66 && *w8 == 68) { }
	else {
		if (*w6 == 62 && *w8 == 66 && *w4 == 68 && *w2 == 64)
		{
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D' "; *swap01 = 1;
		}
		else
		{
			if (*w6 == 68 && *w8 == 64 && *w4 == 62 && *w2 == 66)
			{
				D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
				plik << "D "; *swap01 = 2;
			}
			else
			{
				if (*w6 == 64 && *w8 == 62 && *w4 == 66 && *w2 == 68)
				{
					DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
					plik << "2D "; *swap01 = 3;
				}
			}
		}
		if ((*w2 == 62 && *w4 == 64 && *w6 == 66) || (*w8 == 68 && *w4 == 64 && *w6 == 66) || (*w2 == 62 && *w8 == 68 && *w6 == 66) || (*w2 == 62 && *w4 == 64 && *w8 == 68)) { }
		else {
			if ((*w6 == 62 && *w8 == 66 && *w4 == 68) || (*w8 == 66 && *w4 == 68 && *w2 == 64) || (*w4 == 68 && *w2 == 64 && *w6 == 62) || (*w2 == 64 && *w6 == 62 && *w8 == 66))
			{
				Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
				plik << "D' "; *swap01 = 1;
			}
			else
			{
				if ((*w6 == 68 && *w8 == 64 && *w4 == 62) || (*w8 == 64 && *w4 == 62 && *w2 == 66) || (*w4 == 62 && *w2 == 66 && *w6 == 68) || (*w2 == 66 && *w6 == 68 && *w8 == 64))
				{
					D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
					plik << "D "; *swap01 = 2;
				}
				else
				{
					if ((*w6 == 64 && *w8 == 62 && *w4 == 66) || (*w8 == 62 && *w4 == 66 && *w2 == 68) || (*w4 == 66 && *w2 == 68 && *w6 == 64) || (*w2 == 68 && *w6 == 64 && *w8 == 62))
					{
						DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
						plik << "2D "; *swap01 = 3;
					}
				}
			}
			if ((*w2 == 62 && *w4 == 64) || (*w8 == 68 && *w4 == 64) || (*w8 == 68 && *w6 == 66) || (*w2 == 62 && *w6 == 66)) {  }
			else {
				if ((*w6 == 62 && *w8 == 66) || (*w6 == 62 && *w4 == 68) || (*w6 == 62 && *w2 == 64) || (*w8 == 66 && *w4 == 68) || (*w8 == 66 && *w2 == 64) || (*w4 == 68 && *w2 == 64))
				{
					Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
					plik << "D' "; *swap01 = 1;
				}
				else
				{
					if ((*w6 == 68 && *w8 == 64) || (*w6 == 68 && *w4 == 62) || (*w6 == 68 && *w2 == 66) || (*w8 == 64 && *w4 == 62) || (*w8 == 64 && *w2 == 66) || (*w4 == 62 && *w2 == 66))
					{
						D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
						plik << "D "; *swap01 = 2;
					}
					else
					{
						if ((*w6 == 64 && *w8 == 62) || (*w6 == 64 && *w4 == 66) || (*w6 == 64 && *w2 == 68) || (*w8 == 62 && *w4 == 66) || (*w8 == 62 && *w2 == 68) || (*w4 == 66 && *w2 == 68))
						{
							DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
							plik << "2D "; *swap01 = 3;
						}
					}
				}
				if ((*w6 == 66) || (*w8 == 68) || (*w4 == 64) || (*w2 == 62)) { }
				else {
					if ((*w6 == 62) || (*w8 == 66) || (*w4 == 68) || (*w2 == 64))
					{
						Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
						plik << "D' "; *swap01 = 1;
					}
					else
					{
						if ((*w6 == 68) || (*w8 == 64) || (*w4 == 62) || (*w2 == 66))
						{
							D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
							plik << "D "; *swap01 = 2;
						}
						else
						{
							if ((*w6 == 64) || (*w8 == 62) || (*w4 == 66) || (*w2 == 68))
							{
								DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
								plik << "2D "; *swap01 = 3;
							}
						}
					}
				}
			}
		}
	}

	// ***********
	plik << std::endl;
	plik.close();
}
void blueone(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9, int* swap02)
{
	if (*w2 == 62) { *swap02 = 0; }
	else {
		std::fstream plik;
		plik.open("plik.txt", std::ios::out | std::ios::app);

		if (*b2 == 28 && *y8 == 62)
		{
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "2F";  *swap02 = 1;
		}
		if (*b2 == 62 && *y8 == 28 && *w6 == 66)
		{
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "U' R' F R"; *swap02 = 2;
		}
		if (*b2 == 62 && *y8 == 28)
		{
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "U' R' F"; *swap02 = 3;
		}
		if (*o6 == 62 && *b4 == 28)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "F'"; *swap02 = 4;
		}
		if (*o6 == 28 && *b4 == 62)
		{
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D' L D"; *swap02 = 5;
		}
		if (*b6 == 28 && *r4 == 62)
		{
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "F"; *swap02 = 6;
		}
		if (*b6 == 62 && *r4 == 28)
		{
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D R' D'"; *swap02 = 7;
		}
		if (*b8 == 62 && *w2 == 28)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "F' D R' D'"; *swap02 = 8;
		}
		if (*y4 == 62 && *o2 == 28)
		{
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "U' 2F"; *swap02 = 9;
		}
		if (*y4 == 28 && *o2 == 62 && *w4 == 64)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L F' L'"; *swap02 = 10;
		}
		if (*y4 == 28 && *o2 == 62)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "L F'"; *swap02 = 11;
		}
		if (*g2 == 28 && *y2 == 62)
		{
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "2U 2F"; *swap02 = 12;
		}
		if (*g2 == 62 && *y2 == 28 && *w6 == 66)
		{
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9,
				b3, b6, b9);
			plik << "U R' F R"; *swap02 = 13;
		}
		if (*g2 == 62 && *y2 == 28)
		{
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "U R' F"; *swap02 = 14;
		}
		if (*y6 == 62 && *r2 == 28)
		{
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "U 2F"; *swap02 = 15;
		}
		if (*y6 == 28 && *r2 == 62 && *w6 == 66)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R' F R"; *swap02 = 16;
		}
		if (*y6 == 28 && *r2 == 62)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "R' F"; *swap02 = 17;
		}
		if (*g6 == 28 && *o4 == 62 && *w4 == 64)
		{
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "2L F' 2L"; *swap02 = 18;
		}
		if (*g6 == 28 && *o4 == 62)
		{
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "2L F'"; *swap02 = 19;
		}
		if (*g6 == 62 && *o4 == 28)
		{
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D' L' D"; *swap02 = 20;
		}
		if (*g4 == 62 && *r6 == 28)
		{
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D R D'"; *swap02 = 21;
		}
		if (*g4 == 28 && *r6 == 62 && *w6 == 66)
		{
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "2R F 2R"; *swap02 = 22;
		}
		if (*g4 == 28 && *r6 == 62)
		{
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "2R F"; *swap02 = 23;
		}
		if (*o8 == 62 && *w4 == 28)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "L' F'"; *swap02 = 24;
		}
		if (*o8 == 28 && *w4 == 62)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "L' D' L D"; *swap02 = 25;
		}
		if (*r8 == 28 && *w6 == 62)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "R D R' D'"; *swap02 = 26;
		}
		if (*r8 == 62 && *w6 == 28)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "R F"; *swap02 = 27;
		}
		if (*g8 == 28 && *w8 == 62 && *w4 == 64 && *w6 == 66)
		{
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "2D F' 2D F"; *swap02 = 28;
		}
		if (*g8 == 28 && *w8 == 62 && *w6 == 66)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "B' 2L F'"; *swap02 = 29;
		}
		if (*g8 == 28 && *w8 == 62 && *w4 == 64)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "B 2R F"; *swap02 = 30;
		}
		if (*g8 == 28 && *w8 == 62)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "B 2R F"; *swap02 = 31;
		}
		if (*g8 == 62 && *w8 == 28)
		{
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "D' R D F"; *swap02 = 32;
		}

		plik << std::endl;
		plik.close();
	}
}
void redone(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9, int* swap03)
{
	if (*w6 == 66) { *swap03 = 0; }
	else {
		std::fstream plik;
		plik.open("plik.txt", std::ios::out | std::ios::app);
		if (*r8 == 66 && *w6 == 38)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "R D' F D"; *swap03 = 1;
		}
		if (*b6 == 66 && *r4 == 38)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R'"; *swap03 = 2;
		}
		if (*b6 == 38 && *r4 == 66)
		{
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D' F D"; *swap03 = 3;
		}
		if (*g4 == 66 && *r6 == 38)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R"; *swap03 = 4;
		}
		if (*g4 == 38 && *r6 == 66)
		{
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D B' D'"; *swap03 = 5;
		}
		if (*y6 == 66 && *r2 == 38)
		{
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "2R"; *swap03 = 6;
		}
		if (*y6 == 38 && *r2 == 66)
		{
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D' R' F R D"; *swap03 = 7;
		}
		if (*y8 == 66 && *b2 == 38)
		{
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "U' 2R"; *swap03 = 8;
		}
		if (*y8 == 38 && *b2 == 66 && *w2 == 62)
		{
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "F R' F'"; *swap03 = 9;
		}
		if (*y8 == 38 && *b2 == 66)
		{
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "F R'"; *swap03 = 10;
		}
		if (*y4 == 66 && *o2 == 38)
		{
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "2U 2R"; *swap03 = 11;
		}
		if (*y4 == 38 && *o2 == 66)
		{
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D' L F' L' D"; *swap03 = 12;
		}
		if (*y2 == 66 && *g2 == 38)
		{
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "U 2R"; *swap03 = 13;
		}
		if (*y2 == 38 && *g2 == 66)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B' R B"; *swap03 = 14;
		}
		if (*y2 == 38 && *g2 == 66 && *w8 == 68)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "B' R"; *swap03 = 15;
		}
		if (*o6 == 66 && *b4 == 38)
		{
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D' F' D"; *swap03 = 16;
		}
		if (*o6 == 38 && *b4 == 66 && *w2 == 62)
		{
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "2F R' 2F"; *swap03 = 17;
		}
		if (*o6 == 38 && *b4 == 66)
		{
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "2F R'"; *swap03 = 18;
		}
		if (*o4 == 66 && *g6 == 38)
		{
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D B D'"; *swap03 = 19;
		}
		if (*o4 == 38 && *g6 == 66)
		{
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "2D L' 2D"; *swap03 = 20;
		}
		if (*b8 == 38 && *w2 == 66)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "F' D' F D"; *swap03 = 21;
		}
		if (*b8 == 66 && *w2 == 38)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "F' R'"; *swap03 = 22;
		}
		if (*o8 == 38 && *w4 == 66)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "L' 2D L 2D"; *swap03 = 23;
		}
		if (*o8 == 66 && *w4 == 38)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "L' D' F' D"; *swap03 = 24;
		}
		if (*g8 == 38 && *w8 == 66)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "B D B' D'"; *swap03 = 25;
		}
		if (*g8 == 66 && *w8 == 38)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "B R"; *swap03 = 26;
		}
		plik << std::endl;
		plik.close();
	}
}
void greenone(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9, int* swap04)
{
	if (*w8 == 68) { *swap04 = 0; }
	else {
		std::fstream plik;
		plik.open("plik.txt", std::ios::out | std::ios::app);
		if (*g8 == 68 && *w8 == 48)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "B D' R D"; *swap04 = 1;
		}
		if (*y2 == 68 && *g2 == 48)
		{
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "2B"; *swap04 = 2;
		}
		if (*y2 == 48 && *g2 == 68 && *w6 == 66)
		{
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "U R B' R'"; *swap04 = 3;
		}
		if (*y2 == 48 && *g2 == 68)
		{
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "U R B'"; *swap04 = 4;
		}
		if (*r6 == 68 && *g4 == 48)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B'"; *swap04 = 5;
		}
		if (*r6 == 48 && *g4 == 68)
		{
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D' R D"; *swap04 = 6;
		}
		if (*o4 == 68 && *g6 == 48)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B"; *swap04 = 7;
		}
		if (*o4 == 48 && *g6 == 68)
		{
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D L' D'"; *swap04 = 8;
		}
		if (*o2 == 68 && *y4 == 48 && *w4 == 64)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L' B L"; *swap04 = 9;
		}
		if (*o2 == 68 && *y4 == 48)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "L' B"; *swap04 = 10;
		}
		if (*o2 == 48 && *y4 == 68)
		{
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "U 2B"; *swap04 = 11;
		}
		if (*r2 == 68 && *y6 == 48 && *w6 == 66)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R B' R'"; *swap04 = 12;
		}
		if (*r2 == 68 && *y6 == 48)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "R B'"; *swap04 = 13;
		}
		if (*r2 == 48 && *y6 == 68)
		{
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "U' 2B"; *swap04 = 14;
		}
		if (*b2 == 68 && *y8 == 48 && *w6 == 66)
		{
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "U' R B' R'"; *swap04 = 15;
		}
		if (*b2 == 68 && *y8 == 48)
		{
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "U' R B'"; *swap04 = 16;
		}
		if (*b2 == 48 && *y8 == 68)
		{
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "2U 2B"; *swap04 = 17;
		}
		if (*o6 == 68 && *b4 == 48 && *w4 == 64)
		{
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "2L B 2L"; *swap04 = 18;
		}
		if (*o6 == 68 && *b4 == 48)
		{
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "2L B"; *swap04 = 19;
		}
		if (*o6 == 48 && *b4 == 68)
		{
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D L D'"; *swap04 = 20;
		}
		if (*r4 == 68 && *b6 == 48 && *w6 == 66)
		{
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "2R B' 2R"; *swap04 = 21;
		}
		if (*r4 == 68 && *b6 == 48)
		{
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "2R B'"; *swap04 = 22;
		}
		if (*r4 == 48 && *b6 == 68)
		{
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D' R' D"; *swap04 = 23;
		}
		if (*o8 == 48 && *w4 == 68)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "L' D L D'"; *swap04 = 24;
		}
		if (*o8 == 68 && *w4 == 48)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "L B"; *swap04 = 25;
		}
		if (*w2 == 68 && *b8 == 48)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "F' 2D F 2D"; *swap04 = 26;
		}
		if (*w2 == 48 && *b8 == 68)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "F' D' R' D"; *swap04 = 27;
		}
		if (*r8 == 68 && *w6 == 48)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "R' B'"; *swap04 = 28;
		}
		if (*r8 == 48 && *w6 == 68)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "L' D' L D"; *swap04 = 29;
		}
		plik << std::endl;
		plik.close();
	}
}
void orangeone(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9, int* swap05)
{
	if (*w4 == 64) { *swap05 = 0; }
	else {
		std::fstream plik;
		plik.open("plik.txt", std::ios::out | std::ios::app);

		if (*o8 == 64 && *w4 == 18)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "L' D F' D'"; *swap05 = 1;
		}
		if (*o4 == 64 && *g6 == 18)
		{
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D' B D"; *swap05 = 2;
		}
		if (*o4 == 18 && *g6 == 64)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L'"; *swap05 = 3;
		}
		if (*o6 == 64 && *b4 == 18)
		{
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D F' D'"; *swap05 = 4;
		}
		if (*o6 == 18 && *b4 == 64)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L"; *swap05 = 5;
		}
		if (*r6 == 64 && *g4 == 18)
		{
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D' B' D"; *swap05 = 6;
		}
		if (*r6 == 18 && *g4 == 64 && *w8 == 68)
		{
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "2B L' 2B"; *swap05 = 7;
		}
		if (*r6 == 18 && *g4 == 64)
		{
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "2B L'"; *swap05 = 8;
		}
		if (*r4 == 64 && *b6 == 18)
		{
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "D F D'"; *swap05 = 9;
		}
		if (*r4 == 18 && *b6 == 64 && *w2 == 62)
		{
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "2F L 2F"; *swap05 = 10;
		}
		if (*r4 == 18 && *b6 == 64)
		{
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "2F L"; *swap05 = 11;
		}
		if (*y4 == 64 && *o2 == 18)
		{
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "2L"; *swap05 = 12;
		}
		if (*y4 == 18 && *o2 == 64 && *w2 == 62)
		{
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "U' F' L F"; *swap05 = 13;
		}
		if (*y4 == 18 && *o2 == 64)
		{
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "U' F' L"; *swap05 = 14;
		}
		if (*y2 == 64 && *g2 == 18)
		{
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "U' 2L"; *swap05 = 15;
		}
		if (*y2 == 18 && *g2 == 64 && *w8 == 68)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B L' B'"; *swap05 = 16;
		}
		if (*y2 == 18 && *g2 == 64)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "B L'"; *swap05 = 17;
		}
		if (*y6 == 64 && *r2 == 18)
		{
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "2U 2L"; *swap05 = 18;
		}
		if (*y6 == 18 && *r2 == 64 && *w2 == 62)
		{
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "U F' L F"; *swap05 = 19;
		}
		if (*y6 == 18 && *r2 == 64)
		{
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "U F' L"; *swap05 = 20;
		}
		if (*y8 == 64 && *b2 == 18)
		{
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "U 2L"; *swap05 = 21;
		}
		if (*y8 == 18 && *b2 == 64 && *w2 == 62)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "F' L F"; *swap05 = 22;
		}
		if (*y8 == 18 && *b2 == 64)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "F' L"; *swap05 = 23;
		}
		if (*g8 == 18 && *w8 == 64)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "B' D' B D"; *swap05 = 24;
		}
		if (*g8 == 64 && *w8 == 18)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "B' L'"; *swap05 = 25;
		}
		if (*r8 == 18 && *w6 == 64)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			DD(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "R 2D R' 2D"; *swap05 = 26;
		}
		if (*r8 == 64 && *w6 == 18)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "R D F D'"; *swap05 = 27;
		}
		if (*b8 == 18 && *w2 == 64)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			D(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Dp(w1, w2, w3, w4, w5, w6, w7, w8, w9, g9, g8, g7, r9, r8, r7, b9, b8, b7, o9, o8, o7);
			plik << "F' D F D'"; *swap05 = 28;
		}
		if (*b8 == 64 && *w2 == 18)
		{
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "F L"; *swap05 = 29;
		}
		plik << std::endl;
		plik.close();
	}
}
void softcorners(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9,
	int* swapc06, int* swapc07, int* swapc08, int* swapc09, int* swapc10, int* swapc11,
	int* swapc12, int* swapc13, int* swapc14, int* swapc15, int* swapc16, int* swapc17, 
	int* swapc18, int* swapc19, int* swapc20, int* swapc21, int* swapc22, int* swapc23, int* swapc24, int* swapc25, int* swapc26, int* swapc27,
	int* swapc28, int* swapc29, int* swapc30, int* swapc31, int* swapc32, int* swapc33,
	int* swapc34, int* swapc35, int* swapc36, int* swapc37)
{
	std::fstream plik;
	plik.open("plik.txt", std::ios::out | std::ios::app);
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
				if (i == 0) { *swapc06 = 1; };
				if (i == 1) { *swapc07 = 1; };
				if (i == 2) { *swapc08 = 1; };
				if (i == 3) { *swapc09 = 1; };
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
				if (i == 0) { *swapc06 = 2; };
				if (i == 1) { *swapc07 = 2; };
				if (i == 2) { *swapc08 = 2; };
				if (i == 3) { *swapc09 = 2; };
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
				if (i == 0) { *swapc06 = 3; };
				if (i == 1) { *swapc07 = 3; };
				if (i == 2) { *swapc08 = 3; };
				if (i == 3) { *swapc09 = 3; };
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
				if (i == 0) { *swapc06 = 4; };
				if (i == 1) { *swapc07 = 4; };
				if (i == 2) { *swapc08 = 4; };
				if (i == 3) { *swapc09 = 4; };
			}
			if (*b1 == 61)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "U' L' U L ";
				if (i == 0) { *swapc06 = 5; };
				if (i == 1) { *swapc07 = 5; };
				if (i == 2) { *swapc08 = 5; };
				if (i == 3) { *swapc09 = 5; };
			}
			if (*r1 == 61)
			{
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "L' U L ";
				if (i == 0) { *swapc06 = 6; };
				if (i == 1) { *swapc07 = 6; };
				if (i == 2) { *swapc08 = 6; };
				if (i == 3) { *swapc09 = 6; };
			}
			if (*g1 == 61)
			{
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "L' 2U L ";
				if (i == 0) { *swapc06 = 7; };
				if (i == 1) { *swapc07 = 7; };
				if (i == 2) { *swapc08 = 7; };
				if (i == 3) { *swapc09 = 7; };
			}
			if (*o1 == 61)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "U L' 2U L ";
				if (i == 0) { *swapc06 = 8; };
				if (i == 1) { *swapc07 = 8; };
				if (i == 2) { *swapc08 = 8; };
				if (i == 3) { *swapc09 = 8; };
			}
			if (*b3 == 61)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "U' F 2U F' ";
				if (i == 0) { *swapc06 = 9; };
				if (i == 1) { *swapc07 = 9; };
				if (i == 2) { *swapc08 = 9; };
				if (i == 3) { *swapc09 = 9; };
			}
			if (*r3 == 61)
			{
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "F 2U F' ";
				if (i == 0) { *swapc06 = 10; };
				if (i == 1) { *swapc07 = 10; };
				if (i == 2) { *swapc08 = 10; };
				if (i == 3) { *swapc09 = 10; };
			}
			if (*g3 == 61)
			{
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "F U' F' ";
				if (i == 0) { *swapc06 = 11; };
				if (i == 1) { *swapc07 = 11; };
				if (i == 2) { *swapc08 = 11; };
				if (i == 3) { *swapc09 = 11; };
			}
			if (*o3 == 61)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "U F U' F' ";
				if (i == 0) { *swapc06 = 12; };
				if (i == 1) { *swapc07 = 12; };
				if (i == 2) { *swapc08 = 12; };
				if (i == 3) { *swapc09 = 12; };
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
				if (i == 0) { *swapc10 = 1; };
				if (i == 1) { *swapc11 = 1; };
				if (i == 2) { *swapc12 = 1; };
				if (i == 3) { *swapc13 = 1; };
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
				if (i == 0) { *swapc10 = 2; };
				if (i == 1) { *swapc11 = 2; };
				if (i == 2) { *swapc12 = 2; };
				if (i == 3) { *swapc13 = 2; };
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
				if (i == 0) { *swapc10 = 3; };
				if (i == 1) { *swapc11 = 3; };
				if (i == 2) { *swapc12 = 3; };
				if (i == 3) { *swapc13 = 3; };
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
				if (i == 0) { *swapc10 = 4; };
				if (i == 1) { *swapc11 = 4; };
				if (i == 2) { *swapc12 = 4; };
				if (i == 3) { *swapc13 = 4; };
			}
			if (*b1 == 63)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "U F' 2U F ";
				if (i == 0) { *swapc10 = 5; };
				if (i == 1) { *swapc11 = 5; };
				if (i == 2) { *swapc12 = 5; };
				if (i == 3) { *swapc13 = 5; };
			}
			if (*r1 == 63)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "U' F' U F ";
				if (i == 0) { *swapc10 = 6; };
				if (i == 1) { *swapc11 = 6; };
				if (i == 2) { *swapc12 = 6; };
				if (i == 3) { *swapc13 = 6; };
			}
			if (*g1 == 63)
			{
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "F' U F ";
				if (i == 0) { *swapc10 = 7; };
				if (i == 1) { *swapc11 = 7; };
				if (i == 2) { *swapc12 = 7; };
				if (i == 3) { *swapc13 = 7; };
			}
			if (*o1 == 63)
			{
				Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
				plik << "F' 2U F ";
				if (i == 0) { *swapc10 = 8; };
				if (i == 1) { *swapc11 = 8; };
				if (i == 2) { *swapc12 = 8; };
				if (i == 3) { *swapc13 = 8; };
			}
			if (*b3 == 63)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "U R U' R' ";
				if (i == 0) { *swapc10 = 9; };
				if (i == 1) { *swapc11 = 9; };
				if (i == 2) { *swapc12 = 9; };
				if (i == 3) { *swapc13 = 9; };
			}
			if (*r3 == 63)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "U' R 2U R' ";
				if (i == 0) { *swapc10 = 10; };
				if (i == 1) { *swapc11 = 10; };
				if (i == 2) { *swapc12 = 10; };
				if (i == 3) { *swapc13 = 10; };
			}
			if (*g3 == 63)
			{
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "R 2U R' ";
				if (i == 0) { *swapc10 = 11; };
				if (i == 1) { *swapc11 = 11; };
				if (i == 2) { *swapc12 = 11; };
				if (i == 3) { *swapc13 = 11; };
			}
			if (*o3 == 63)
			{
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "R U' R' ";
				if (i == 0) { *swapc10 = 12; };
				if (i == 1) { *swapc11 = 12; };
				if (i == 2) { *swapc12 = 12; };
				if (i == 3) { *swapc13 = 12; };
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
				if (i == 0) { *swapc14 = 1; };
				if (i == 1) { *swapc15 = 1; };
				if (i == 2) { *swapc16 = 1; };
				if (i == 3) { *swapc17 = 1; };
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
				if (i == 0) { *swapc14 = 2; };
				if (i == 1) { *swapc15 = 2; };
				if (i == 2) { *swapc16 = 2; };
				if (i == 3) { *swapc17 = 2; };
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
				if (i == 0) { *swapc14 = 3; };
				if (i == 1) { *swapc15 = 3; };
				if (i == 2) { *swapc16 = 3; };
				if (i == 3) { *swapc17 = 3; };
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
				if (i == 0) { *swapc14 = 4; };
				if (i == 1) { *swapc15 = 4; };
				if (i == 2) { *swapc16 = 4; };
				if (i == 3) { *swapc17 = 4; };
			}
			if (*b1 == 67)
			{
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "B' U B ";
				if (i == 0) { *swapc14 = 5; };
				if (i == 1) { *swapc15 = 5; };
				if (i == 2) { *swapc16 = 5; };
				if (i == 3) { *swapc17 = 5; };
			}
			if (*r1 == 67)
			{
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "B' 2U B ";
				if (i == 0) { *swapc14 = 6; };
				if (i == 1) { *swapc15 = 6; };
				if (i == 2) { *swapc16 = 6; };
				if (i == 3) { *swapc17 = 6; };
			}
			if (*g1 == 67)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "U B' 2U B ";
				if (i == 0) { *swapc14 = 7; };
				if (i == 1) { *swapc15 = 7; };
				if (i == 2) { *swapc16 = 7; };
				if (i == 3) { *swapc17 = 7; };
			}
			if (*o1 == 67)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "U' B' U B ";
				if (i == 0) { *swapc14 = 8; };
				if (i == 1) { *swapc15 = 8; };
				if (i == 2) { *swapc16 = 8; };
				if (i == 3) { *swapc17 = 8; };
			}
			if (*b3 == 67)
			{
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "L 2U L' ";
				if (i == 0) { *swapc14 = 9; };
				if (i == 1) { *swapc15 = 9; };
				if (i == 2) { *swapc16 = 9; };
				if (i == 3) { *swapc17 = 9; };
			}
			if (*r3 == 67)
			{
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "L U' L' ";
				if (i == 0) { *swapc14 = 10; };
				if (i == 1) { *swapc15 = 10; };
				if (i == 2) { *swapc16 = 10; };
				if (i == 3) { *swapc17 = 10; };
			}
			if (*g3 == 67)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "U L U' L' ";
				if (i == 0) { *swapc14 = 11; };
				if (i == 1) { *swapc15 = 11; };
				if (i == 2) { *swapc16 = 11; };
				if (i == 3) { *swapc17 = 11; };
			}
			if (*o3 == 67)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
				plik << "U' L 2U L' ";
				if (i == 0) { *swapc14 = 12; };
				if (i == 1) { *swapc15 = 12; };
				if (i == 2) { *swapc16 = 12; };
				if (i == 3) { *swapc17 = 12; };
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
				if (i == 0) { *swapc18 = 1; };
				if (i == 1) { *swapc19 = 1; };
				if (i == 2) { *swapc20 = 1; };
				if (i == 3) { *swapc21 = 1; };
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
				if (i == 0) { *swapc18 = 2; };
				if (i == 1) { *swapc19 = 2; };
				if (i == 2) { *swapc20 = 2; };
				if (i == 3) { *swapc21 = 2; };
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
				if (i == 0) { *swapc18 = 3; };
				if (i == 1) { *swapc19 = 3; };
				if (i == 2) { *swapc20 = 3; };
				if (i == 3) { *swapc21 = 3; };
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
				if (i == 0) { *swapc18 = 4; };
				if (i == 1) { *swapc19 = 4; };
				if (i == 2) { *swapc20 = 4; };
				if (i == 3) { *swapc21 = 4; };
			}
			if (*b1 == 69)
			{
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "R' 2U R ";
				if (i == 0) { *swapc18 = 5; };
				if (i == 1) { *swapc19 = 5; };
				if (i == 2) { *swapc20 = 5; };
				if (i == 3) { *swapc21 = 5; };
			}
			if (*r1 == 69)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "U R' 2U R ";
				if (i == 0) { *swapc18 = 6; };
				if (i == 1) { *swapc19 = 6; };
				if (i == 2) { *swapc20 = 6; };
				if (i == 3) { *swapc21 = 6; };
			}
			if (*g1 == 69)
			{
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "U' R' U R ";
				if (i == 0) { *swapc18 = 7; };
				if (i == 1) { *swapc19 = 7; };
				if (i == 2) { *swapc20 = 7; };
				if (i == 3) { *swapc21 = 7; };
			}
			if (*o1 == 69)
			{
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "R' U R ";
				if (i == 0) { *swapc18 = 8; };
				if (i == 1) { *swapc19 = 8; };
				if (i == 2) { *swapc20 = 8; };
				if (i == 3) { *swapc21 = 8; };
			}
			if (*b3 == 69)
			{
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "B U' B' ";
				if (i == 0) { *swapc18 = 9; };
				if (i == 1) { *swapc19 = 9; };
				if (i == 2) { *swapc20 = 9; };
				if (i == 3) { *swapc21 = 9; };
			}
			if (*r3 == 69)
			{
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "R' U' R ";
				if (i == 0) { *swapc18 = 10; };
				if (i == 1) { *swapc19 = 10; };
				if (i == 2) { *swapc20 = 10; };
				if (i == 3) { *swapc21 = 10; };
			}
			if (*g3 == 69)
			{
				U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
				plik << "U R' U' R ";
				if (i == 0) { *swapc18 = 11; };
				if (i == 1) { *swapc19 = 11; };
				if (i == 2) { *swapc20 = 11; };
				if (i == 3) { *swapc21 = 11; };
			}
			if (*o3 == 69)
			{
				B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
				Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
				plik << "B 2U B' ";
				if (i == 0) { *swapc18 = 12; };
				if (i == 1) { *swapc19 = 12; };
				if (i == 2) { *swapc20 = 12; };
				if (i == 3) { *swapc21 = 12; };
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
			if (i == 0) { *swapc22 = 1; };
			if (i == 1) { *swapc23 = 1; };
			if (i == 2) { *swapc24 = 1; };
			if (i == 3) { *swapc25 = 1; };
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
			if (i == 0) { *swapc06 = 2; };
			if (i == 1) { *swapc07 = 2; };
			if (i == 2) { *swapc08 = 2; };
			if (i == 3) { *swapc09 = 2; };
		}
		if (*b9 == 61)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			FF(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "F' U' 2F 2U F' ";
			if (i == 0) { *swapc22 = 3; };
			if (i == 1) { *swapc23 = 3; };
			if (i == 2) { *swapc24 = 3; };
			if (i == 3) { *swapc25 = 3; };
		}
		if (*r7 == 61)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "L' R U L R' ";
			if (i == 0) { *swapc22 = 4; };
			if (i == 1) { *swapc23 = 4; };
			if (i == 2) { *swapc24 = 4; };
			if (i == 3) { *swapc25 = 4; };
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
			if (i == 0) { *swapc22 = 5; };
			if (i == 1) { *swapc23 = 5; };
			if (i == 2) { *swapc24 = 5; };
			if (i == 3) { *swapc25 = 5; };
		}
		if (*r9 == 61)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R' F 2U F' R ";
			if (i == 0) { *swapc22 = 6; };
			if (i == 1) { *swapc23 = 6; };
			if (i == 2) { *swapc24 = 6; };
			if (i == 3) { *swapc25 = 6; };
		}
		if (*g7 == 61)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B L' 2U L B' ";
			if (i == 0) { *swapc22 = 7; };
			if (i == 1) { *swapc23 = 7; };
			if (i == 2) { *swapc24 = 7; };
			if (i == 3) { *swapc25 = 7; };
		}
		if (*w9 == 61)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R' L' 2U L R ";
			if (i == 0) { *swapc22 = 8; };
			if (i == 1) { *swapc23 = 8; };
			if (i == 2) { *swapc24 = 8; };
			if (i == 3) { *swapc25 = 8; };
		}
		if (*g9 == 61)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B' F U' F' B ";
			if (i == 0) { *swapc22 = 9; };
			if (i == 1) { *swapc23 = 9; };
			if (i == 2) { *swapc24 = 9; };
			if (i == 3) { *swapc25 = 9; };
		}
		if (*o7 == 61)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L U 2L 2U L ";
			if (i == 0) { *swapc22 = 10; };
			if (i == 1) { *swapc23 = 10; };
			if (i == 2) { *swapc24 = 10; };
			if (i == 3) { *swapc25 = 10; };
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
			if (i == 0) { *swapc22 = 11; };
			if (i == 1) { *swapc23 = 11; };
			if (i == 2) { *swapc24 = 11; };
			if (i == 3) { *swapc25 = 11; };
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
			if (i == 0) { *swapc26 = 1; };
			if (i == 1) { *swapc27 = 1; };
			if (i == 2) { *swapc28 = 1; };
			if (i == 3) { *swapc29 = 1; };
		}
		if (*o9 == 63)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "R L' U' R' L ";
			if (i == 0) { *swapc26 = 2; };
			if (i == 1) { *swapc27 = 2; };
			if (i == 2) { *swapc28 = 2; };
			if (i == 3) { *swapc29 = 2; };
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
			if (i == 0) { *swapc26 = 3; };
			if (i == 1) { *swapc27 = 3; };
			if (i == 2) { *swapc28 = 3; };
			if (i == 3) { *swapc29 = 3; };
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
			if (i == 0) { *swapc26 = 4; };
			if (i == 1) { *swapc27 = 4; };
			if (i == 2) { *swapc28 = 4; };
			if (i == 3) { *swapc29 = 4; };
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
			if (i == 0) { *swapc26 = 5; };
			if (i == 1) { *swapc27 = 5; };
			if (i == 2) { *swapc28 = 5; };
			if (i == 3) { *swapc29 = 5; };
		}
		if (*r9 == 63)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R' U' 2R 2U R' ";
			if (i == 0) { *swapc26 = 6; };
			if (i == 1) { *swapc27 = 6; };
			if (i == 2) { *swapc28 = 6; };
			if (i == 3) { *swapc29 = 6; };
		}
		if (*g7 == 63)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "B F' U B' F ";
			if (i == 0) { *swapc26 = 7; };
			if (i == 1) { *swapc27 = 7; };
			if (i == 2) { *swapc28 = 7; };
			if (i == 3) { *swapc29 = 7; };
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
			if (i == 0) { *swapc26 = 8; };
			if (i == 1) { *swapc27 = 8; };
			if (i == 2) { *swapc28 = 8; };
			if (i == 3) { *swapc29 = 8; };
		}
		if (*g9 == 63)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B' R 2U R' B ";
			if (i == 0) { *swapc26 = 9; };
			if (i == 1) { *swapc27 = 9; };
			if (i == 2) { *swapc28 = 9; };
			if (i == 3) { *swapc29 = 9; };
		}
		if (*o7 == 63)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L F' 2U F L' ";
			if (i == 0) { *swapc26 = 10; };
			if (i == 1) { *swapc27 = 10; };
			if (i == 2) { *swapc28 = 10; };
			if (i == 3) { *swapc29 = 10; };
		}
		if (*w7 == 63)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "R L 2U R' L' ";
			if (i == 0) { *swapc26 = 11; };
			if (i == 1) { *swapc27 = 11; };
			if (i == 2) { *swapc28 = 11; };
			if (i == 3) { *swapc29 = 11; };
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
			if (i == 0) { *swapc34 = 1; };
			if (i == 1) { *swapc35 = 1; };
			if (i == 2) { *swapc36 = 1; };
			if (i == 3) { *swapc37 = 1; };
		}
		if (*o9 == 67)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			LL(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L' U' 2L 2U L' ";
			if (i == 0) { *swapc34 = 2; };
			if (i == 1) { *swapc35 = 2; };
			if (i == 2) { *swapc36 = 2; };
			if (i == 3) { *swapc37 = 2; };
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
			if (i == 0) { *swapc34 = 3; };
			if (i == 1) { *swapc35 = 3; };
			if (i == 2) { *swapc36 = 3; };
			if (i == 3) { *swapc37 = 3; };
		}
		if (*b9 == 67)
		{
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "F' L 2U L' F ";
			if (i == 0) { *swapc34 = 4; };
			if (i == 1) { *swapc35 = 4; };
			if (i == 2) { *swapc36 = 4; };
			if (i == 3) { *swapc37 = 4; };
		}
		if (*r7 == 67)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R B' 2U B R' ";
			if (i == 0) { *swapc34 = 5; };
			if (i == 1) { *swapc35 = 5; };
			if (i == 2) { *swapc36 = 5; };
			if (i == 3) { *swapc37 = 5; };
		}
		if (*w3 == 67)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R L 2U L' R' ";
			if (i == 0) { *swapc34 = 6; };
			if (i == 1) { *swapc35 = 6; };
			if (i == 2) { *swapc36 = 6; };
			if (i == 3) { *swapc37 = 6; };
		}
		if (*r9 == 67)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "R' L U' R L' ";
			if (i == 0) { *swapc34 = 7; };
			if (i == 1) { *swapc35 = 7; };
			if (i == 2) { *swapc36 = 7; };
			if (i == 3) { *swapc37 = 7; };
		}
		if (*g7 == 67)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B U 2B 2U B ";
			if (i == 0) { *swapc34 = 8; };
			if (i == 1) { *swapc35 = 8; };
			if (i == 2) { *swapc36 = 8; };
			if (i == 3) { *swapc37 = 8; };
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
			if (i == 0) { *swapc34 = 9; };
			if (i == 1) { *swapc35 = 9; };
			if (i == 2) { *swapc36 = 9; };
			if (i == 3) { *swapc37 = 9; };
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
			if (i == 0) { *swapc34 = 10; };
			if (i == 1) { *swapc35 = 10; };
			if (i == 2) { *swapc36 = 10; };
			if (i == 3) { *swapc37 = 10; };
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
			if (i == 0) { *swapc34 = 11; };
			if (i == 1) { *swapc35 = 11; };
			if (i == 2) { *swapc36 = 11; };
			if (i == 3) { *swapc37 = 11; };
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
			if (i == 0) { *swapc30 = 1; };
			if (i == 1) { *swapc31 = 1; };
			if (i == 2) { *swapc32 = 1; };
			if (i == 3) { *swapc33 = 1; };
		}
		if (*o9 == 69)
		{
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L' B 2U B' L ";
			if (i == 0) { *swapc30 = 2; };
			if (i == 1) { *swapc31 = 2; };
			if (i == 2) { *swapc32 = 2; };
			if (i == 3) { *swapc33 = 2; };
		}
		if (*w1 == 69)
		{
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R' L' 2U L R ";
			if (i == 0) { *swapc30 = 3; };
			if (i == 1) { *swapc31 = 3; };
			if (i == 2) { *swapc32 = 3; };
			if (i == 3) { *swapc33 = 3; };
		}
		if (*b9 == 69)
		{
			B(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Fp(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			F(b1, b2, b3, b4, b5, b6, b7, b8, b9, w1, w2, w3, r7, r4, r1, y9, y8, y7, o3, o6, o9);
			plik << "B F' U' B' F ";
			if (i == 0) { *swapc30 = 4; };
			if (i == 1) { *swapc31 = 4; };
			if (i == 2) { *swapc32 = 4; };
			if (i == 3) { *swapc33 = 4; };
		}
		if (*r7 == 69)
		{
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			RR(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			plik << "R U 2R 2U R ";
			if (i == 0) { *swapc30 = 5; };
			if (i == 1) { *swapc31 = 5; };
			if (i == 2) { *swapc32 = 5; };
			if (i == 3) { *swapc33 = 5; };
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
			if (i == 0) { *swapc30 = 6; };
			if (i == 1) { *swapc31 = 6; };
			if (i == 2) { *swapc32 = 6; };
			if (i == 3) { *swapc33 = 6; };
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
			if (i == 0) { *swapc30 = 7; };
			if (i == 1) { *swapc31 = 7; };
			if (i == 2) { *swapc32 = 7; };
			if (i == 3) { *swapc33 = 7; };
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
			if (i == 0) { *swapc30 = 8; };
			if (i == 1) { *swapc31 = 8; };
			if (i == 2) { *swapc32 = 8; };
			if (i == 3) { *swapc33 = 8; };
		}
		if (*g9 == 69)
		{
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			BB(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			Bp(g1, g2, g3, g4, g5, g6, g7, g8, g9, w9, w8, w7, o7, o4, o1, y1, y2, y3, r3, r6, r9);
			plik << "B' U' 2B 2U B' ";
			if (i == 0) { *swapc30 = 9; };
			if (i == 1) { *swapc31 = 9; };
			if (i == 2) { *swapc32 = 9; };
			if (i == 3) { *swapc33 = 9; };
		}
		if (*o7 == 69)
		{
			L(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			Rp(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			R(r1, r2, r3, r4, r5, r6, r7, r8, r9, w3, w6, w9, g7, g4, g1, y3, y6, y9, b3, b6, b9);
			Lp(o1, o2, o3, o4, o5, o6, o7, o8, o9, w7, w4, w1, b7, b4, b1, y7, y4, y1, g3, g6, g9);
			plik << "L R' U R L' ";
			if (i == 0) { *swapc30 = 10; };
			if (i == 1) { *swapc31 = 10; };
			if (i == 2) { *swapc32 = 10; };
			if (i == 3) { *swapc33 = 10; };
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
			if (i == 0) { *swapc30 = 11; };
			if (i == 1) { *swapc31 = 11; };
			if (i == 2) { *swapc32 = 11; };
			if (i == 3) { *swapc33 = 11; };
		}
		
	}
	plik << std::endl;
	plik.close();

};
void edges(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9,
    int* swape01, int* swape02, int* swape03, int* swape04, int* swape05, int* swape06, int* swape07, int* swape08, int* swape09, int* swape10, 
	int* swape11, int* swape12, int* swape13, int* swape14, int* swape15, int* swape16, int* swape17, int* swape18, int* swape19, int* swape20, 
	int* swape21, int* swape22, int* swape23, int* swape24, int* swape25, int* swape26, int* swape27, int* swape28, int* swape29, int* swape30, 
	int* swape31, int* swape32)
{
	std::fstream plik;
	plik.open("plik.txt", std::ios::out | std::ios::app);

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
				if (i == 0) { *swape01 = 1; };
				if (i == 1) { *swape02 = 1; };
				if (i == 2) { *swape03 = 1; };
				if (i == 3) { *swape04 = 1; };
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
				if (i == 0) { *swape01 = 2; };
				if (i == 1) { *swape02 = 2; };
				if (i == 2) { *swape03 = 2; };
				if (i == 3) { *swape04 = 2; };
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
				if (i == 0) { *swape01 = 3; };
				if (i == 1) { *swape02 = 3; };
				if (i == 2) { *swape03 = 3; };
				if (i == 3) { *swape04 = 3; };
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
				if (i == 0) { *swape01 = 4; };
				if (i == 1) { *swape02 = 4; };
				if (i == 2) { *swape03 = 4; };
				if (i == 3) { *swape04 = 4; };
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
				if (i == 0) { *swape01 = 5; };
				if (i == 1) { *swape02 = 5; };
				if (i == 2) { *swape03 = 5; };
				if (i == 3) { *swape04 = 5; };
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
				if (i == 0) { *swape01 = 6; };
				if (i == 1) { *swape02 = 6; };
				if (i == 2) { *swape03 = 6; };
				if (i == 3) { *swape04 = 6; };
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
				if (i == 0) { *swape01 = 7; };
				if (i == 1) { *swape02 = 7; };
				if (i == 2) { *swape03 = 7; };
				if (i == 3) { *swape04 = 7; };
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
				if (i == 0) { *swape01 = 8; };
				if (i == 1) { *swape02 = 8; };
				if (i == 2) { *swape03 = 8; };
				if (i == 3) { *swape04 = 8; };
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
				if (i == 0) { *swape05 = 1; };
				if (i == 1) { *swape06 = 1; };
				if (i == 2) { *swape07 = 1; };
				if (i == 3) { *swape08 = 1; };
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
				if (i == 0) { *swape05 = 2; };
				if (i == 1) { *swape06 = 2; };
				if (i == 2) { *swape07 = 2; };
				if (i == 3) { *swape08 = 2; };
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
				if (i == 0) { *swape05 = 3; };
				if (i == 1) { *swape06 = 3; };
				if (i == 2) { *swape07 = 3; };
				if (i == 3) { *swape08 = 3; };
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
				if (i == 0) { *swape05 = 4; };
				if (i == 1) { *swape06 = 4; };
				if (i == 2) { *swape07 = 4; };
				if (i == 3) { *swape08 = 4; };
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
				if (i == 0) { *swape05 = 5; };
				if (i == 1) { *swape06 = 5; };
				if (i == 2) { *swape07 = 5; };
				if (i == 3) { *swape08 = 5; };
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
				if (i == 0) { *swape05 = 6; };
				if (i == 1) { *swape06 = 6; };
				if (i == 2) { *swape07 = 6; };
				if (i == 3) { *swape08 = 6; };
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
				if (i == 0) { *swape05 = 7; };
				if (i == 1) { *swape06 = 7; };
				if (i == 2) { *swape07 = 7; };
				if (i == 3) { *swape08 = 7; };
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
				if (i == 0) { *swape05 = 8; };
				if (i == 1) { *swape06 = 8; };
				if (i == 2) { *swape07 = 8; };
				if (i == 3) { *swape08 = 8; };
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
				if (i == 0) { *swape09 = 1; };
				if (i == 1) { *swape10 = 1; };
				if (i == 2) { *swape11 = 1; };
				if (i == 3) { *swape12 = 1; };
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
				if (i == 0) { *swape09 = 2; };
				if (i == 1) { *swape10 = 2; };
				if (i == 2) { *swape11 = 2; };
				if (i == 3) { *swape12 = 2; };
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
				if (i == 0) { *swape09 = 3; };
				if (i == 1) { *swape10 = 3; };
				if (i == 2) { *swape11 = 3; };
				if (i == 3) { *swape12 = 3; };
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
				if (i == 0) { *swape09 = 4; };
				if (i == 1) { *swape10 = 4; };
				if (i == 2) { *swape11 = 4; };
				if (i == 3) { *swape12 = 4; };
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
				if (i == 0) { *swape09 = 5; };
				if (i == 1) { *swape10 = 5; };
				if (i == 2) { *swape11 = 5; };
				if (i == 3) { *swape12 = 5; };
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
				if (i == 0) { *swape09 = 6; };
				if (i == 1) { *swape10 = 6; };
				if (i == 2) { *swape11 = 6; };
				if (i == 3) { *swape12 = 6; };
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
				if (i == 0) { *swape09 = 7; };
				if (i == 1) { *swape10 = 7; };
				if (i == 2) { *swape11 = 7; };
				if (i == 3) { *swape12 = 7; };
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
				if (i == 0) { *swape09 = 8; };
				if (i == 1) { *swape10 = 8; };
				if (i == 2) { *swape11 = 8; };
				if (i == 3) { *swape12 = 8; };
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
				if (i == 0) { *swape13 = 1; };
				if (i == 1) { *swape14 = 1; };
				if (i == 2) { *swape15 = 1; };
				if (i == 3) { *swape16 = 1; };
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
				if (i == 0) { *swape13 = 2; };
				if (i == 1) { *swape14 = 2; };
				if (i == 2) { *swape15 = 2; };
				if (i == 3) { *swape16 = 2; };
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
				if (i == 0) { *swape13 = 3; };
				if (i == 1) { *swape14 = 3; };
				if (i == 2) { *swape15 = 3; };
				if (i == 3) { *swape16 = 3; };
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
				if (i == 0) { *swape13 = 4; };
				if (i == 1) { *swape14 = 4; };
				if (i == 2) { *swape15 = 4; };
				if (i == 3) { *swape16 = 4; };
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
				if (i == 0) { *swape13 = 5; };
				if (i == 1) { *swape14 = 5; };
				if (i == 2) { *swape15 = 5; };
				if (i == 3) { *swape16 = 5; };
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
				if (i == 0) { *swape13 = 6; };
				if (i == 1) { *swape14 = 6; };
				if (i == 2) { *swape15 = 6; };
				if (i == 3) { *swape16 = 6; };
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
				if (i == 0) { *swape13 = 7; };
				if (i == 1) { *swape14 = 7; };
				if (i == 2) { *swape15 = 7; };
				if (i == 3) { *swape16 = 7; };
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
				if (i == 0) { *swape13 = 8; };
				if (i == 1) { *swape14 = 8; };
				if (i == 2) { *swape15 = 8; };
				if (i == 3) { *swape16 = 8; };
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
			if (i == 0) { *swape17 = 1; };
			if (i == 1) { *swape18 = 1; };
			if (i == 2) { *swape19 = 1; };
			if (i == 3) { *swape20 = 1; };
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
			if (i == 0) { *swape17 = 2; };
			if (i == 1) { *swape18 = 2; };
			if (i == 2) { *swape19 = 2; };
			if (i == 3) { *swape20 = 2; };
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
			if (i == 0) { *swape17 = 3; };
			if (i == 1) { *swape18 = 3; };
			if (i == 2) { *swape19 = 3; };
			if (i == 3) { *swape20 = 3; };
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
			if (i == 0) { *swape17 = 4; };
			if (i == 1) { *swape18 = 4; };
			if (i == 2) { *swape19 = 4; };
			if (i == 3) { *swape20 = 4; };
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
			if (i == 0) { *swape17 = 5; };
			if (i == 1) { *swape18 = 5; };
			if (i == 2) { *swape19 = 5; };
			if (i == 3) { *swape20 = 5; };
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
			if (i == 0) { *swape17 = 6; };
			if (i == 1) { *swape18 = 6; };
			if (i == 2) { *swape19 = 6; };
			if (i == 3) { *swape20 = 6; };
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
			if (i == 0) { *swape17 = 7; };
			if (i == 1) { *swape18 = 7; };
			if (i == 2) { *swape19 = 7; };
			if (i == 3) { *swape20 = 7; };
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
			if (i == 0) { *swape21 = 1; };
			if (i == 1) { *swape22 = 1; };
			if (i == 2) { *swape23 = 1; };
			if (i == 3) { *swape24 = 1; };
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
			if (i == 0) { *swape21 = 2; };
			if (i == 1) { *swape22 = 2; };
			if (i == 2) { *swape23 = 2; };
			if (i == 3) { *swape24 = 2; };
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
			if (i == 0) { *swape21 = 3; };
			if (i == 1) { *swape22 = 3; };
			if (i == 2) { *swape23 = 3; };
			if (i == 3) { *swape24 = 3; };
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
			if (i == 0) { *swape21 = 4; };
			if (i == 1) { *swape22 = 4; };
			if (i == 2) { *swape23 = 4; };
			if (i == 3) { *swape24 = 4; };
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
			if (i == 0) { *swape21 = 5; };
			if (i == 1) { *swape22 = 5; };
			if (i == 2) { *swape23 = 5; };
			if (i == 3) { *swape24 = 5; };
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
			if (i == 0) { *swape21 = 6; };
			if (i == 1) { *swape22 = 6; };
			if (i == 2) { *swape23 = 6; };
			if (i == 3) { *swape24 = 6; };
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
			if (i == 0) { *swape21 = 7; };
			if (i == 1) { *swape22 = 7; };
			if (i == 2) { *swape23 = 7; };
			if (i == 3) { *swape24 = 7; };
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
			if (i == 0) { *swape25 = 1; };
			if (i == 1) { *swape26 = 1; };
			if (i == 2) { *swape27 = 1; };
			if (i == 3) { *swape28 = 1; };
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
			if (i == 0) { *swape25 = 2; };
			if (i == 1) { *swape26 = 2; };
			if (i == 2) { *swape27 = 2; };
			if (i == 3) { *swape28 = 2; };
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
			if (i == 0) { *swape25 = 3; };
			if (i == 1) { *swape26 = 3; };
			if (i == 2) { *swape27 = 3; };
			if (i == 3) { *swape28 = 3; };
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
			if (i == 0) { *swape25 = 4; };
			if (i == 1) { *swape26 = 4; };
			if (i == 2) { *swape27 = 4; };
			if (i == 3) { *swape28 = 4; };
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
			if (i == 0) { *swape25 = 5; };
			if (i == 1) { *swape26 = 5; };
			if (i == 2) { *swape27 = 5; };
			if (i == 3) { *swape28 = 5; };
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
			if (i == 0) { *swape25 = 6; };
			if (i == 1) { *swape26 = 6; };
			if (i == 2) { *swape27 = 6; };
			if (i == 3) { *swape28 = 6; };
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
			if (i == 0) { *swape25 = 7; };
			if (i == 1) { *swape26 = 7; };
			if (i == 2) { *swape27 = 7; };
			if (i == 3) { *swape28 = 7; };
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
			if (i == 0) { *swape29 = 1; };
			if (i == 1) { *swape30 = 1; };
			if (i == 2) { *swape31 = 1; };
			if (i == 3) { *swape32 = 1; };
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
			if (i == 0) { *swape29 = 2; };
			if (i == 1) { *swape30 = 2; };
			if (i == 2) { *swape31 = 2; };
			if (i == 3) { *swape32 = 2; };
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
			if (i == 0) { *swape29 = 3; };
			if (i == 1) { *swape30 = 3; };
			if (i == 2) { *swape31 = 3; };
			if (i == 3) { *swape32 = 3; };
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
			if (i == 0) { *swape29 = 4; };
			if (i == 1) { *swape30 = 4; };
			if (i == 2) { *swape31 = 4; };
			if (i == 3) { *swape32 = 4; };
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
			if (i == 0) { *swape29 = 5; };
			if (i == 1) { *swape30 = 5; };
			if (i == 2) { *swape31 = 5; };
			if (i == 3) { *swape32 = 5; };
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
			if (i == 0) { *swape29 = 6; };
			if (i == 1) { *swape30 = 6; };
			if (i == 2) { *swape31 = 6; };
			if (i == 3) { *swape32 = 6; };
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
			if (i == 0) { *swape29 = 7; };
			if (i == 1) { *swape30 = 7; };
			if (i == 2) { *swape31 = 7; };
			if (i == 3) { *swape32 = 7; };
		}
	}

	plik << std::endl;
	plik.close();

};
void simpleoll(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9,
	int* swapo01, int* swapo02, int* swapo03, int* swapo04, int* swapo05, int* swapo06, int* swapo07, int* swapo08,
	int* swapo09, int* swapo10, int* swapo11, int* swapo12, int* swapo13, int* swapo14, int* swapo15, int* swapo16)
{
	std::fstream plik;
	plik.open("plik.txt", std::ios::out | std::ios::app);
	// ************************************ cross
	if (((*y2 == 52) || (*y2 == 54) || (*y2 == 56) || (*y2 == 58)) && ((*y4 == 52) || (*y4 == 54) || (*y4 == 56) || (*y4 == 58)) && ((*y6 == 52) || (*y6 == 54) || (*y6 == 56) || (*y6 == 58)) && ((*y8 == 52) || (*y8 == 54) || (*y8 == 56) || (*y8 == 58))) { *swapo01 = 0; }
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
			plik << "F R U R' U' F' "; *swapo01 = 1;
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
				plik << "U F R U R' U' F' "; *swapo01 = 2;
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
					plik << "F R U R' U' R U R' U' F' "; *swapo01 = 3;
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
						plik << "F' L' U' L U L' U' L U F "; *swapo01 = 4;
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
							plik << "U' F' L' U' L U L' U' L U F "; *swapo01 = 5;
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
								plik << "U F R U R' U' R U R' U' F' "; *swapo01 = 6;
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
								plik << "R U2 R2 F R F' U2 R' F R F'  "; *swapo01 = 7;
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
		plik << "R 2U R' U' R U R' U' R U' R' "; *swapo02 = 1;
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
			plik << "U R 2U R' U' R U R' U' R U' R' "; *swapo02 = 2;
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
				plik << "R 2U 2R U' 2R U' 2R 2U R "; *swapo02 = 3;
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
					plik << "U R 2U 2R U' 2R U' 2R 2U R "; *swapo02 = 4;
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
						plik << "2U R 2U 2R U' 2R U' 2R 2U R "; *swapo02 = 5;
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
							plik << "U' R 2U 2R U' 2R U' 2R 2U R "; *swapo02 = 6;
						}
						else { *swapo02 = 0; }
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
		plik << "2R D' R 2U R' D R 2U R "; *swapo03 = 1;
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
			plik << "U' 2R D' R 2U R' D R 2U R "; *swapo03 = 2;
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
				plik << "2U 2R D' R 2U R' D R 2U R "; *swapo03 = 3;
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
					plik << "U 2R D' R 2U R' D R 2U R "; *swapo03 = 4;
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
		plik << "2U L F R' F' L' F R F' "; *swapo04 = 1;
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
			plik << "U' L F R' F' L' F R F' "; *swapo04 = 2;
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
				plik << "L F R' F' L' F R F' "; *swapo04 = 3;
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
					plik << "U L F R' F' L' F R F' "; *swapo04 = 4;
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
		plik << "L' U' L U' L' 2U L "; *swapo05 = 1;
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
		plik << "B' U' B U' B' 2U B "; *swapo06 = 1;
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
		plik << "R' U' R U' R' 2U R "; *swapo07 = 1;
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
		plik << "F' U' F U' F' 2U F "; *swapo08 = 1;
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
		plik << "L U L' U L 2U L' "; *swapo09 = 1;
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
		plik << "B U B' U B 2U B' "; *swapo10 = 1;
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
		plik << "R U R' U R 2U R' "; *swapo11 = 1;
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
		plik << "F U F' U F 2U F' "; *swapo12 = 1;
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
		plik << "R' F R B' R' F' R B "; *swapo13 = 1;
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
		plik << "B' R B L' B' R' B L "; *swapo14 = 1;
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
		plik << "L' B L F' L' B' L F "; *swapo15 = 1;
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
		plik << "F' L F R' F' L' F R "; *swapo16 = 1;
	};

	plik << std::endl;
	plik.close();
}

void simplepll(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9,
	int* swapp01, int* swapp02, int* swapp03, int* swapp04, int* swapp05, int* swapp06, int* swapp07, int* swapp08,
	int* swapp09, int* swapp10, int* swapp11, int* swapp12, int* swapp13, int* swapp14)
{
	std::fstream plik;
	plik.open("plik.txt", std::ios::out | std::ios::app);     
	if ((*o2 == 12 && *b2 == 22 && *r2 == 32 && *g2 == 42) || (*o2 == 22 && *b2 == 32 && *r2 == 42 && *g2 == 12) || (*o2 == 32 && *b2 == 42 && *r2 == 12 && *g2 == 22) || (*o2 == 42 && *b2 == 12 && *r2 == 22 && *g2 == 32)) { *swapp01 = 0; }
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
				plik << "L U' R' U L' 2U R U' R' 2U R "; *swapp01 = 1;
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
					plik << "L U' R' U L' 2U R U' R' 2U R U' "; *swapp01 = 2;
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
						plik << "L U' R' U L' 2U R U' R' 2U R 2U "; *swapp01 = 3;
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
							plik << "L U' R' U L' 2U R U' R' 2U R U "; *swapp01 = 4;
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
								plik << "U' L U' R' U L' 2U R U' R' 2U R U "; *swapp01 = 5;
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
									plik << "U' L U' R' U L' 2U R U' R' 2U R "; *swapp01 = 6;
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
										plik << "U' L U' R' U L' 2U R U' R' 2U R U' "; *swapp01 = 7;
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
											plik << "U' L U' R' U L' 2U R U' R' 2U R 2U "; *swapp01 = 8;
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
												plik << "R' U L U' R 2U L' U L 2U L' "; *swapp01 = 9;
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
													plik << "R' U L U' R 2U L' U L 2U L' U' "; *swapp01 = 10;
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
														plik << "R' U L U' R 2U L' U L 2U L' 2U "; *swapp01 = 11;
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
															plik << "R' U L U' R 2U L' U L 2U L' U "; *swapp01 = 12;
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
																plik << "U R' U L U' R 2U L' U L 2U L' U "; *swapp01 = 13;
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
																	plik << "U R' U L U' R 2U L' U L 2U L' "; *swapp01 = 14;
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
																		plik << "U R' U L U' R 2U L' U L 2U L' U' "; *swapp01 = 15;
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
																			plik << "U R' U L U' R 2U L' U L 2U L' 2U "; *swapp01 = 16;
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
				plik << "R U R' U' R' F R2 U' R' U' R U R' F' "; *swapp02 = 1;
			}
		}
	}
	if (*o2 == 12 && *b2 == 22 && *r2 == 32 && *g2 == 42) { *swapp03 = 0; }
	else
	{
		if (*o2 == 22 && *b2 == 32 && *r2 == 42 && *g2 == 12)
		{
			Up(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			plik << "U' "; *swapp03 = 1;
		}
		if (*o2 == 32 && *b2 == 42 && *r2 == 12 && *g2 == 22)
		{
			UU(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			plik << "2U "; *swapp03 = 2;
		}
		if (*o2 == 42 && *b2 == 12 && *r2 == 22 && *g2 == 32)
		{
			U(y1, y2, y3, y4, y5, y6, y7, y8, y9, b1, b2, b3, r1, r2, r3, g1, g2, g3, o1, o2, o3);
			plik << "U "; *swapp03 = 3;
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
		plik << "R2 U2 R U2 R2 U2 R2 U2 R U2 R2 2U "; *swapp04 = 1;
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
		plik << "R B' R' F R B R' F' R B R' F R B' R' F' "; *swapp05 = 1;
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
		plik << "U' R B' R' F R B R' F' R B R' F R B' R' F' U "; *swapp06 = 1;
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
		plik << "R' F R' 2B R F' R' 2B 2R "; *swapp07 = 1;
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
		plik << "U R' F R' 2B R F' R' 2B 2R U' "; *swapp08 = 1;
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
		plik << "2U R' F R' 2B R F' R' 2B 2R 2U "; *swapp09 = 1;
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
		plik << "U' R' F R' 2B R F' R' 2B 2R U "; *swapp10 = 1;
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
		plik << "2R 2B R F R' 2B R F' R "; *swapp11 = 1;
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
		plik << "U 2R 2B R F R' 2B R F' R U' "; *swapp12 = 1;
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
		plik << "2U 2R 2B R F R' 2B R F' R 2U "; *swapp13 = 1;
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
		plik << "U' 2R 2B R F R' 2B R F' R U "; *swapp14 = 1;
	}

	plik << std::endl;
	plik.close();
}


void solve(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9,
    int* swap01, int* swap02, int* swap03, int* swap04, int* swap05, int* swapc06, int* swapc07, int* swapc08, int* swapc09, int* swapc10, int* swapc11,
	int* swapc12, int* swapc13, int* swapc14, int* swapc15, int* swapc16, int* swapc17,
	int* swapc18, int* swapc19, int* swapc20, int* swapc21, int* swapc22, int* swapc23, int* swapc24, int* swapc25, int* swapc26, int* swapc27,
	int* swapc28, int* swapc29, int* swapc30, int* swapc31, int* swapc32, int* swapc33,
	int* swapc34, int* swapc35, int* swapc36, int* swapc37,
    int* swape01, int* swape02, int* swape03, int* swape04, int* swape05, int* swape06, int* swape07, int* swape08, int* swape09, int* swape10,
	int* swape11, int* swape12, int* swape13, int* swape14, int* swape15, int* swape16, int* swape17, int* swape18, int* swape19, int* swape20,
	int* swape21, int* swape22, int* swape23, int* swape24, int* swape25, int* swape26, int* swape27, int* swape28, int* swape29, int* swape30, 
	int* swape31, int* swape32,
	int* swapo01, int* swapo02, int* swapo03, int* swapo04, int* swapo05, int* swapo06, int* swapo07, int* swapo08,
	int* swapo09, int* swapo10, int* swapo11, int* swapo12, int* swapo13, int* swapo14, int* swapo15, int* swapo16,
	int* swapp01, int* swapp02, int* swapp03, int* swapp04, int* swapp05, int* swapp06, int* swapp07, int* swapp08, 
	int* swapp09, int* swapp10, int* swapp11, int* swapp12, int* swapp13, int* swapp14)
{
	*swapc06 = 0; *swapc07 = 0; *swapc08 = 0; *swapc09 = 0; *swapc10 = 0; *swapc11 = 0; *swapc12 = 0; *swapc13 = 0; *swapc14 = 0; *swapc15 = 0;
	*swapc16 = 0; *swapc16 = 0; *swapc17 = 0; *swapc18 = 0; *swapc19 = 0; *swapc20 = 0; *swapc21 = 0; *swapc22 = 0; *swapc23 = 0; *swapc24 = 0;
	*swapc25 = 0; *swapc26 = 0; *swapc27 = 0; *swapc28 = 0; *swapc29 = 0; *swapc30 = 0; *swapc31 = 0; *swapc32 = 0; *swapc33 = 0; *swapc34 = 0;
	*swapc35 = 0; *swapc36 = 0; *swapc37 = 0;
	*swape01 = 0; *swape02 = 0; *swape03 = 0; *swape04 = 0; *swape05 = 0; *swape06 = 0; *swape07 = 0; *swape08 = 0; *swape09 = 0; *swape10 = 0;
	*swape11 = 0; *swape12 = 0; *swape13 = 0; *swape14 = 0; *swape15 = 0; *swape16 = 0; *swape17 = 0; *swape18 = 0; *swape19 = 0; *swape20 = 0;
	*swape21 = 0; *swape22 = 0; *swape23 = 0; *swape24 = 0; *swape25 = 0; *swape26 = 0; *swape27 = 0; *swape28 = 0; *swape29 = 0; *swape30 = 0;
	*swape31 = 0; *swape32 = 0,
		* swapo01 = 0, * swapo02 = 0, * swapo03 = 0, * swapo04 = 0, * swapo05 = 0, * swapo06 = 0, * swapo07 = 0, * swapo08 = 0, * swapo09 = 0, * swapo10 = 0,
		* swapo11 = 0, * swapo12 = 0, * swapo13 = 0, * swapo14 = 0, * swapo15 = 0, * swapo16 = 0;
	    *swapp01 = 0, *swapp02 = 0, *swapp03 = 0, *swapp04 = 0, *swapp05 = 0, *swapp06 = 0, *swapp07 = 0, *swapp08 = 0, *swapp09 = 0, *swapp10 = 0,
		*swapp11 = 0, *swapp12 = 0, *swapp13 = 0, *swapp14 = 0;
	softset(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9, swap01);
	blueone(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9, swap02);
	redone(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9, swap03);
	greenone(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9, swap04);
	orangeone(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9,swap05);
	softcorners(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9,
		swapc06, swapc07, swapc08, swapc09, swapc10, swapc11, swapc12, swapc13, 
		swapc14, swapc15, swapc16, swapc17, swapc18, swapc19, swapc20, swapc21,
		swapc22, swapc23, swapc24, swapc25, swapc26, swapc27, swapc28, swapc29,
		swapc30, swapc31, swapc32, swapc33, swapc34, swapc35, swapc36, swapc37);
	edges(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9,
		swape01, swape02, swape03, swape04, swape05, swape06, swape07, swape08, swape09, swape10, 
		swape11, swape12, swape13, swape14, swape15, swape16, swape17, swape18, swape19, swape20, 
		swape21, swape22, swape23, swape24, swape25, swape26, swape27, swape28, swape29, swape30, 
		swape31, swape32);
	simpleoll(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9,
		swapo01, swapo02, swapo03, swapo04, swapo05, swapo06, swapo07, swapo08, swapo09, swapo10, 
		swapo11, swapo12, swapo13, swapo14, swapo15, swapo16);
	simplepll(b1, b2, b3, b4, b5, b6, b7, b8, b9,
		r1, r2, r3, r4, r5, r6, r7, r8, r9,
		g1, g2, g3, g4, g5, g6, g7, g8, g9,
		o1, o2, o3, o4, o5, o6, o7, o8, o9,
		y1, y2, y3, y4, y5, y6, y7, y8, y9,
		w1, w2, w3, w4, w5, w6, w7, w8, w9,
		swapp01, swapp02, swapp03, swapp04, swapp05, swapp06, swapp07, swapp08, swapp09, swapp10, 
		swapp11, swapp12, swapp13, swapp14);
}
void plikreset()
{
	std::fstream plik;
	plik.open("plik.txt", std::ios::out | std::ios::trunc);
	plik << "";
	plik.close();
}
void completetest(int* b1, int* b2, int* b3, int* b4, int* b5, int* b6, int* b7, int* b8, int* b9,
	int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9,
	int* g1, int* g2, int* g3, int* g4, int* g5, int* g6, int* g7, int* g8, int* g9,
	int* o1, int* o2, int* o3, int* o4, int* o5, int* o6, int* o7, int* o8, int* o9,
	int* y1, int* y2, int* y3, int* y4, int* y5, int* y6, int* y7, int* y8, int* y9,
	int* w1, int* w2, int* w3, int* w4, int* w5, int* w6, int* w7, int* w8, int* w9)
{
	if (*o1 == 11 && *o2 == 12 && *o3 == 13 && *o4 == 14 && *o5 == 15 && *o6 == 16 && *o7 == 17 && *o8 == 18 && *o9 == 19 &&
		*b1 == 21 && *b2 == 22 && *b3 == 23 && *b4 == 24 && *b5 == 25 && *b6 == 26 && *b7 == 27 && *b8 == 28 && *b9 == 29 &&
		*r1 == 31 && *r2 == 32 && *r3 == 33 && *r4 == 34 && *r5 == 35 && *r6 == 36 && *r7 == 37 && *r8 == 38 && *r9 == 39 &&
		*g1 == 41 && *g2 == 42 && *g3 == 43 && *g4 == 44 && *g5 == 45 && *g6 == 46 && *g7 == 47 && *g8 == 48 && *g9 == 49 &&
		*y1 == 51 && *y2 == 52 && *y3 == 53 && *y4 == 54 && *y5 == 55 && *y6 == 56 && *y7 == 57 && *y8 == 58 && *y9 == 59 &&
		*w1 == 61 && *w2 == 62 && *w3 == 63 && *w4 == 64 && *w5 == 65 && *w6 == 66 && *w7 == 67 && *w8 == 68 && *w9 == 69 &&
		objzmienna->licznik11 == 1 && objzmienna->licznik12 == 1 && objzmienna->licznik13 == 1 && objzmienna->licznik14 == 1 && objzmienna->licznik16 == 1 &&
		objzmienna->licznik17 == 1 && objzmienna->licznik18 == 1 && objzmienna->licznik19 == 1 && objzmienna->licznik21 == 2 && objzmienna->licznik22 == 2 &&
		objzmienna->licznik23 == 2 && objzmienna->licznik24 == 2 && objzmienna->licznik26 == 2 && objzmienna->licznik27 == 2 && objzmienna->licznik28 == 2 &&
		objzmienna->licznik29 == 2 && objzmienna->licznik31 == 3 && objzmienna->licznik32 == 3 && objzmienna->licznik33 == 3 && objzmienna->licznik34 == 3 &&
		objzmienna->licznik36 == 3 && objzmienna->licznik37 == 3 && objzmienna->licznik38 == 3 && objzmienna->licznik39 == 3 && objzmienna->licznik41 == 4 &&
		objzmienna->licznik42 == 4 && objzmienna->licznik43 == 4 && objzmienna->licznik44 == 4 && objzmienna->licznik46 == 4 && objzmienna->licznik47 == 4 &&
		objzmienna->licznik48 == 4 && objzmienna->licznik49 == 4 && objzmienna->licznik51 == 5 && objzmienna->licznik52 == 5 && objzmienna->licznik53 == 5 &&
		objzmienna->licznik54 == 5 && objzmienna->licznik56 == 5 && objzmienna->licznik57 == 5 && objzmienna->licznik58 == 5 && objzmienna->licznik59 == 5 &&
		objzmienna->licznik61 == 6 && objzmienna->licznik62 == 6 && objzmienna->licznik63 == 6 && objzmienna->licznik64 == 6 && objzmienna->licznik66 == 6 &&
		objzmienna->licznik67 == 6 && objzmienna->licznik68 == 6 && objzmienna->licznik69 == 6)
	{
		objzmienna->zmiennatest = 0;
	}
	else { objzmienna->zmiennatest = 1; }
}