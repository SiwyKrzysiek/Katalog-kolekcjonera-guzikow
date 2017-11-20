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

void wczytajGuzik(struct Vector *vector)
{
	//struct Guzik nowy;

	puts("WIP");
	//exit(1);
}
