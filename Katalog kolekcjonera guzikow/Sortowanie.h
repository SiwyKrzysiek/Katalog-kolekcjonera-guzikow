#ifndef SORTOWANIE
#define SORTOWANIE

#include <string.h>
#include "Guzik.h"

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
int comparMeterialI(const void* p1, const void* p2);
int comparMeterialD(const void* p1, const void* p2);
int comparPriceI(const void* p1, const void* p2);
int comparPriceD(const void* p1, const void* p2);


#endif /* SORTOWANIE */

