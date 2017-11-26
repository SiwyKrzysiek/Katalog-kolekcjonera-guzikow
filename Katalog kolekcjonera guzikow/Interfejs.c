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

	//Wczytanie nazwy
	do 
	{
		ponow = false;
		puts("\nPodaj rozmiar guzika w mm");
		if (scanf("%u", &nowy.rozmiar) != 1 || nowy.rozmiar <= 0 || nowy.rozmiar >= 10000)
		{
			ponow = true;
			puts("Bledny rozmiar");
			czyscBufor();
		}
		else
			czyscBufor();
	} while (ponow);

	//Wczytanie materialu
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

	//Wczytanie ceny
	do
	{
		ponow = false;
		puts("\nPodaj cene guzika");

		double decyzja;
		if (scanf("%lf", &decyzja) != 1 || decyzja <= 0 || decyzja >= 10000)
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

	//Wczytanie daty dodania do kolekcji
	printf("\nWprowadz date dodania do kolekcji:");
	nowy.data = wczytajDate();

	//Wczytanie roku produkcji
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
			putchar('\n');
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
		puts("\nPodaj rok");
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

void wyswietlMenuGlowne()
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

void menueCzyszczenia(struct Vector* baza)
{
	char decyzja;

	puts("Ta operacja usunie wszystkie rekordy z bazy. Czy na pewno? (t/n)");
	decyzja = getchar();
	putchar('\n');

	if (decyzja != '\n')
		czyscBufor();
	if (decyzja == 't')
		empty(baza);
	else if (decyzja != 'n')
		puts("Nierozpoznany znak\n");
}

void menuEdycji(struct Vector* baza)
{
	char decyzja;
	bool ponow = true;
	int id;

	do
	{
		puts("Wybierz operacje:\n"
			"1 - Dodaj rekor\n"
			"2 - Edytuj rekord\n"
			"3 - Usun rekord\n"
			"q - Wroc do glownego menu"
		);
		decyzja = getchar();
		putchar('\n');

		if (decyzja != '\n')
			czyscBufor();

		switch (decyzja)
		{
		case '1':
			push_back(baza, wczytajGuzik());
			break;
		case '2':
			puts("Podaj ID guzika, ktorego chcesz edytowac");
			
			if (scanf("%d", &id) != 1)
			{
				puts("Bledne ID\n");
				break;
			}
			czyscBufor();
			putchar('\n');
			id--;
			if (id < 0 || id >= baza->size)
			{
				puts("Bledne ID\n");
				break;
			}

			baza->tab[id] = wczytajGuzik();
			break;
		case '3':
			puts("Podaj ID guzika, ktory chcesz usunac");
			
			if (scanf("%d", &id) != 1)
			{
				puts("Bledne ID\n");
				break;
			}
			czyscBufor();
			putchar('\n');
			id--;
			if (id < 0 || id >= baza->size)
			{
				puts("Bledne ID\n");
				break;
			}

			delete(baza, id);
			break;
		case 'q':
			ponow = false;
			break;
		default:
			puts("Nierozpoznany znak\n");
			break;
		}
	} while (ponow);
}

void menuZapisuDoPliku(struct Vector* baza)
{
	puts("Podaj nazwe pliku do ktorego chcesz zapisac baze");

	char nazwaPliku[200];
	wczytaj(nazwaPliku, sizeof(nazwaPliku));
	putchar('\n');

	zapiszDoPliku(baza, nazwaPliku);
}

void menuWczytajZPliku(struct Vector* baza)
{
	puts("Podaj nazwe pliku z ktorego chcesz wczytac baze");

	char nazwaPliku[200];
	wczytaj(nazwaPliku, sizeof(nazwaPliku));
	putchar('\n');

	wczytajZPliku(baza, nazwaPliku);
}

void menuSortowania(struct Vector* baza)
{
	char kolumna;
	puts("Wybierz kolumne po ktorej chcesz sortowac:\n"
		"1 - nazwa\n"
		"2 - rozmiar\n"
		"3 - material\n"
		"4 - cena\n"
		"5 - data\n"
		"6 - rok produkcji"
	);

	kolumna = getchar();
	putchar('\n');

	if (kolumna != '\n')
		czyscBufor();

	if (kolumna < '1' || kolumna > '6')
	{
		puts("Nierozpoznany znak\n");
		return;
	}

	char kolejnosc;
	puts("Wybierz kolejnosc sortowania (r/m)");

	kolejnosc = getchar();
	putchar('\n');

	if (kolejnosc != '\n')
		czyscBufor();

	switch (kolejnosc)
	{
	case 'r':
		sort(baza, kolumna - '0' - 1, true);
		break;
	case 'm':
		sort(baza, kolumna - '0' - 1, false);
		break;
	default:
		puts("Nierozpoznany znak\n");
		break;
	}
}