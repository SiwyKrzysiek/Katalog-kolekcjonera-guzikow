#include <stdio.h>
#include <stdlib.h>
#include "Data.h"
#include "Guzik.h"
#include "Vector.h"

int main()
{
    char nazwa[30] = "Tomek";
    struct Guzik a = {"", 5, zlto, 20, {4,11,2017}, 2010};
    strcpy(a.nazwa, nazwa);
    struct Vector tab;
    zainicjalizuj(&tab);
    push_back(&tab, a);
    
    strcpy(a.nazwa, "Miki");
    

    
	return 0;
}
