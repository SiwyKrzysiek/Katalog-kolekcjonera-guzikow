#include <stdio.h>
#include <stdlib.h>
#include "Data.h"
#include "Guzik.h"
#include "Vector.h"

#pragma warning(disable:4996)

int main()
{
    char nazwa[20] = "Tomek";
    struct Guzik a = {"", 5, zlto, 20, {4,11,2017}, 2010};
    strcpy(a.nazwa, nazwa);
    //struct Vector tab;
    //zainicjalizuj(&tab);
    //push_back(&tab, a);
    //
    //strcpy(a.nazwa, "Miki");
    
	//printf("%-20s%10s%10s%10s%10s%10s", "abcdefghi", "abcdefghi", "abcdefghi", "abcdefghi", "abcdefghi", "abcdefghi");

	char nagluwek[] = "Nazwa                Rozmiar   Material   Cena      Data zakupu   Rok produkcji";

	char bufor[100];
	puts(nagluwek);
	puts(guzikToString(bufor, a));
    
	return 0;
}
