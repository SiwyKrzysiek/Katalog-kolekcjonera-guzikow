#include <stdio.h>
#include <stdlib.h>
#include "Data.h"
#include "Guzik.h"
#include "Vector.h"

#pragma warning(disable:4996)

int main()
{
    char nazwa[20] = "Tomek";
    struct Guzik a = {"Tomek", 15, zlto, 20, {4,11,2017}, 2010}, b = { "Bartk", 2, drewno, 25,{ 4,11,2016 }, 2009 };
    struct Vector tab;
    zainicjalizuj(&tab);
	push_back(&tab, a);
	push_back(&tab, b);

	wypisz(&tab);

	delete(&tab, 0);
	wypisz(&tab);

	clear(&tab);
	wypisz(&tab);

	
	cleanupAtExit(&tab);
	return 0;
}
