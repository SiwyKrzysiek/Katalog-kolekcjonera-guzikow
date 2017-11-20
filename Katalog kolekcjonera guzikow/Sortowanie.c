#include "Sortowanie.h"

int comparSizeI(const void* p1, const void* p2)
{
    if (((struct Guzik*)p1)->rozmiar < ((struct Guzik*)p2)->rozmiar) return -1;
    if (((struct Guzik*)p1)->rozmiar == ((struct Guzik*)p2)->rozmiar) return 0;
    if (((struct Guzik*)p1)->rozmiar > ((struct Guzik*)p2)->rozmiar) return 1;
    
    return 0;
}

int comparSizeD(const void* p1, const void* p2)
{
    if (((struct Guzik*)p1)->rozmiar > ((struct Guzik*)p2)->rozmiar) return -1;
    if (((struct Guzik*)p1)->rozmiar == ((struct Guzik*)p2)->rozmiar) return 0;
    if (((struct Guzik*)p1)->rozmiar < ((struct Guzik*)p2)->rozmiar) return 1;

    return 0;
}

int comparNameI(const void* p1, const void* p2)
{
	return strcmp(((struct Guzik*)p1)->nazwa, ((struct Guzik*)p2)->nazwa);
}

int comparNameD(const void* p1, const void* p2)
{
	return -strcmp(((struct Guzik*)p1)->nazwa, ((struct Guzik*)p2)->nazwa);
}

int comparMeterialI(const void* p1, const void* p2)
{
    if (((struct Guzik*)p1)->material < ((struct Guzik*)p2)->material) return -1;
    if (((struct Guzik*)p1)->material == ((struct Guzik*)p2)->material) return 0;
    if (((struct Guzik*)p1)->material > ((struct Guzik*)p2)->material) return 1;
    
    return 0;
}

int comparMeterialD(const void* p1, const void* p2)
{
    if (((struct Guzik*)p1)->material > ((struct Guzik*)p2)->material) return -1;
    if (((struct Guzik*)p1)->material == ((struct Guzik*)p2)->material) return 0;
    if (((struct Guzik*)p1)->material < ((struct Guzik*)p2)->material) return 1;
    
    return 0;
}

int comparPriceI(const void* p1, const void* p2)
{
    if (((struct Guzik*)p1)->cena < ((struct Guzik*)p2)->cena) return -1;
    if (((struct Guzik*)p1)->cena == ((struct Guzik*)p2)->cena) return 0;
    if (((struct Guzik*)p1)->cena > ((struct Guzik*)p2)->cena) return 1;
    
    return 0;
}

int comparPriceD(const void* p1, const void* p2)
{
    if (((struct Guzik*)p1)->cena > ((struct Guzik*)p2)->cena) return -1;
    if (((struct Guzik*)p1)->cena == ((struct Guzik*)p2)->cena) return 0;
    if (((struct Guzik*)p1)->cena < ((struct Guzik*)p2)->cena) return 1;
    
    return 0;
}
