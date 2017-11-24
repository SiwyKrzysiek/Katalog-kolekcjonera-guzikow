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
		puts("\nPodaj rozmiar guzika w mm");
		if (scanf("%u", &nowy.rozmiar) != 1 || nowy.rozmiar <= 0)
		{
			ponow = true;
			puts("Bledny rozmiar");
			czyscBufor();
		}
		else
			czyscBufor();
	} while (ponow);

	do
	{
		ponow = false;
		puts("\nWybierz material guzika");
		puts("1 - drewno\n2 - miedz\n3 - modelina\n4 - skora\n5 - srebro\n6 - szklo\n7 - zlto");
		
		int decyzja;
		if (scanf("%d", &decyzja) != 1 || decyzja<=0 || decyzja>LICZBA_MATERIALOW)
		{
			ponow = true;
			puts("Bledny material");
			czyscBufor();
		}
		else
		{
			nowy.material = decyzja - 1;
			czyscBufor();
		}
	} while (ponow);

	do
	{
		ponow = false;
		puts("\nPodaj cene guzika");

		double decyzja;
		if (scanf("%lf", &decyzja) != 1 || decyzja <= 0)
		{
			ponow = true;
			puts("Bledna cena");
			czyscBufor();
		}
		else
		{
			nowy.cena = decyzja;
			czyscBufor();
		}
	} while (ponow);

	puts("\nPodaj date dodania do kolekcji:");
	nowy.data = wczytajDate();

	do
	{
		ponow = false;
		puts("\nPodaj rok produkcji guzika");

		int decyzja;
		if (scanf("%d", &decyzja) != 1 || decyzja <= 1800 || decyzja > 2100)
		{
			ponow = true;
			puts("Bledyny rok produkcji");
			czyscBufor();
		}
		else
		{
			nowy.rokProdukcji = decyzja;
			czyscBufor();
		}
	} while (ponow);

	return nowy;
}

struct Data wczytajDate()
{
	struct Data nowa;

	bool ponow;
	do
	{
		ponow = false;
		puts("\nPodaj dzien");
		if (scanf("%d", &nowa.dzien) != 1 || nowa.dzien <= 0 || nowa.dzien>31)
		{
			ponow = true;
			puts("Bledny numer dnia");
			czyscBufor();
		}
		else
			czyscBufor();
	} while (ponow);

	do
	{
		ponow = false;
		puts("\nPodaj miesac");
		if (scanf("%d", &nowa.miesiac) != 1 || nowa.miesiac <= 0 || nowa.miesiac>12)
		{
			ponow = true;
			puts("Bledny numer miesiaca");
			czyscBufor();
		}
		else
			czyscBufor();
	} while (ponow);

	do
	{
		ponow = false;
		puts("Podaj rok");
		if (scanf("%d", &nowa.rok) != 1 || nowa.rok <= 1900 || nowa.rok>2100)
		{
			ponow = true;
			puts("Bledny rok");
			czyscBufor();
		}
		else
			czyscBufor();
	} while (ponow);

	return nowa;
}

void wyswietlGlowneMenu()
{
	puts("Wybierz co chcesz zrobic:\n"
		"1 - Wyswietl baze guzikow\n"
		"2 - Edytuj zawartosc bazy\n"
		"3 - Sortuj baze\n"
		"4 - Wczytaj baze z pliku\n"
		"5 - Zapisz baze do pliku\n"
		"6 - Wyczysc baze\n"
		"q - Zamknij program"
	);
}