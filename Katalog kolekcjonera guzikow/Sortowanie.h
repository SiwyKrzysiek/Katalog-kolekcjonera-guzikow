#ifndef SORTOWANIE
#define SORTOWANIE

#include "Guzik.h"
#include <string.h>

enum TypSortowania
{
	nazwa,
	rozmiar,
	material,
	cena,
	dataZakupu,
	rokProdukcji
};

int comparNameI(const void* p1, const void* p2);
int comparNameD(const void* p1, const void* p2);
int comparSizeD(const void* p1, const void* p2);
int comparSizeI(const void* p1, const void* p2);

#endif /* SORTOWANIE */

