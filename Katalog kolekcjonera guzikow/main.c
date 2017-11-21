#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Data.h"
#include "Guzik.h"
#include "Vector.h"
#include "Sortowanie.h"
#include "Pliki.h"
#include "Interfejs.h"

#pragma warning(disable:4996)

int main()
{
    struct Vector tab;
    zainicjalizuj(&tab);
    //struct Guzik a = {"Tomek", 15, zlto, 20, {4,11,2017}, 2010}, b = { "Staszek", 2, drewno, 25,{ 4,11,2016 }, 2009 }
    //, j = { "Jagodka", 20, srebro, 50.32,{ 19,3,1999 }, 2016 }, c = { "Bartek", 17, skora, 6.99,{ 30,2,2000 }, 2010 };
    //push_back(&tab, a);
    //push_back(&tab, b);
    //push_back(&tab, j);
    //push_back(&tab, c);

	wczytajZPliku(&tab, "baza.txt");
	
	wypisz(&tab);

    
    cleanupAtExit(&tab);
	return 0;
}
