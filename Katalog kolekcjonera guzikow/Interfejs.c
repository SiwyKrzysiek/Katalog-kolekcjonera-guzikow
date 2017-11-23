#include "Interfejs.h"

char *wczytaj(char  *z, int  ile)
{
	char *  wynik;
	char *  tutaj;
	wynik = fgets(z, ile, stdin);
	if (wynik)
	{
		tutaj = strchr(z, '\n'); //  szukam nowego  wiersza
		if (tutaj)  //  jesli adres  jest rozny  od NULL
			*tutaj = '\0';  //  zamieniam znak  nowego wiersza na  pusty
		else
			while (getchar() != '\n')
				continue;
	}

	return  wynik;
}

void czyscBufor()
{
	while (getchar() != '\n');
}

struct Guzik wczytajGuzik()
{
	struct Guzik nowy;
	bool ponow;
	puts("Podaj nazwe guzika");
	wczytaj(nowy.nazwa, 20);
	do
	{
		ponow = false;
		puts("Podaj rozmiar guzika w mm");
		if (scanf("%u", &nowy.rozmiar) != 1 || nowy.rozmiar<=0)
		{
			ponow = true;
			puts("Bledny rozmiar");
			czyscBufor();
		}
	} while (ponow);
	do
	{
		ponow = false;
		puts("Podaj wybierz material guzika");
		puts("1 - drewno\n2 - miedz\n3 - modelina\n4 - skora\n5 - srebro\n6 - szklo\n7 - zlto");
		
		/////////////////////////////////////////////

	} while (ponow);
	

	puts("WIP");

	return nowy;
	//exit(1);
}
