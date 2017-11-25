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
    
    struct Vector tab;
    zainicjalizuj(&tab);

#if TEST
	struct Guzik a = { "Tomek", 15, zlto, 20,{ 4,11,2017 }, 2010 }, b = { "Staszek", 2, drewno, 25,{ 4,11,2016 }, 2009 }
	, j = { "Jagodka", 20, srebro, 50.32,{ 19,3,1999 }, 2016 }, c = { "Bartek", 17, skora, 6.99,{ 30,2,2000 }, 2010 };
	push_back(&tab, a);
	push_back(&tab, b);
	push_back(&tab, j);
	push_back(&tab, c);
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
			wypisz(&tab);
			break;
		case '2':
			menuEdycji(&tab);
			break;
		case '3':

			break;
		case '4':
			menuWczytajZPliku(&tab);
			break;
		case '5':
			menuZapisuDoPliku(&tab);
			break;
		case '6':
			menueCzyszczenia(&tab);
			break;
		case 'q':
			ponow = false;
			break;
		default:
			puts("Nierozpoznany znak. Sproboj ponownie\n");
			break;
		}


	} while (ponow);
    
    cleanupAtExit(&tab);
	return 0;
}
