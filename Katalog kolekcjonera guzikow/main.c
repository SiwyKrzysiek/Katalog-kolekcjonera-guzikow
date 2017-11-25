//Program na PRI - dynamiczna baza danych
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Data.h"
#include "Guzik.h"
#include "Vector.h"
#include "Sortowanie.h"
#include "pliki.h"
#include "Interfejs.h"
#include "Testy.h"

#pragma warning(disable:4996)
#define TEST 0

int main()
{
    puts("Krzysztof Dabrowski gr. 1I1\nProjekt Katalog kolekcjonera guzikow\n-----------------------------------------------------\n");
    
    struct Vector bazaDanych;
    zainicjalizuj(&bazaDanych);

#if TEST
	struct Guzik a = { "Tomek", 1500, zlto, 5421,{ 4,11,2017 }, 2010 }, b = { "Staszek", 2, drewno, 25,{ 4,11,2016 }, 2009 }
	, j = { "Jagodka", 20, srebro, 50.32,{ 19,3,1999 }, 2016 }, c = { "Bartek", 17, skora, 6.99,{ 30,2,2000 }, 2010 };
	push_back(&bazaDanych, a);
	push_back(&bazaDanych, b);
	push_back(&bazaDanych, j);
	push_back(&bazaDanych, c);
#endif // TEST

	bool ponow;
	do
	{
		ponow = true;
		char decyzja;

		wyswietlMenuGlowne();

		decyzja = getchar();
		if (decyzja != '\n')
			czyscBufor();
		putchar('\n');

		switch (decyzja)
		{
		case '1':
			wypisz(&bazaDanych);
			break;
		case '2':
			menuEdycji(&bazaDanych);
			break;
		case '3':
			menuSortowania(&bazaDanych);
			break;
		case '4':
			menuWczytajZPliku(&bazaDanych);
			break;
		case '5':
			menuZapisuDoPliku(&bazaDanych);
			break;
		case '6':
			menueCzyszczenia(&bazaDanych);
			break;
		case 'q':
			ponow = false;
			break;
		default:
			puts("Nierozpoznany znak. Sproboj ponownie\n");
			break;
		}
	} while (ponow);
    
    cleanupAtExit(&bazaDanych);
	return 0;
}
