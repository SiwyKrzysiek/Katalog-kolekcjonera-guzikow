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
#define TEST 1

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

		wyswietlGlowneMenu();

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
			break;
		case '3':
			break;
		case '4':
			break;
		case '5':
			break;
		case '6':
			puts("Ta operacja usunie wszystkie rekordy z bazy. Czy na pewno? (t/n)");
			decyzja = getchar();
			putchar('\n');
			if (decyzja != '\n')
				czyscBufor();
			if (decyzja == 't')
				empty(&tab);
			else if(decyzja != 'n')
				puts("Nierozpoznany znak\n");
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
