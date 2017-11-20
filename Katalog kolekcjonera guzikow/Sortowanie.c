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

int comparDateI(const void* p1, const void* p2)
{
    struct Data a = ((struct Guzik*)p1)->data, b = ((struct Guzik*)p2)->data;
    
    if (a.rok < b.rok) return -1;
    if (a.rok > b.rok) return 1;
    if (a.rok == b.rok)
    {
        if (a.miesiac < b.miesiac) return -1;
        if (a.miesiac > b.miesiac) return 1;
        if (a.miesiac == b.miesiac)
        {
            if (a.dzien < b.dzien) return -1;
            if (a.dzien > b.dzien) return 1;
            if (a.dzien == b.dzien) return 0;
        }
    }
    
    return 0;
}

int comparDateD(const void* p1, const void* p2)
{
    return -comparDateI(p1, p2);
}

int comparProductionYearI(const void* p1, const void* p2)
{
    if (((struct Guzik*)p1)->rokProdukcji < ((struct Guzik*)p2)->rokProdukcji) return -1;
    if (((struct Guzik*)p1)->rokProdukcji == ((struct Guzik*)p2)->rokProdukcji) return 0;
    if (((struct Guzik*)p1)->rokProdukcji > ((struct Guzik*)p2)->rokProdukcji) return 1;
    
    return 0;
}

int comparProductionYearD(const void* p1, const void* p2)
{
    if (((struct Guzik*)p1)->rokProdukcji > ((struct Guzik*)p2)->rokProdukcji) return -1;
    if (((struct Guzik*)p1)->rokProdukcji == ((struct Guzik*)p2)->rokProdukcji) return 0;
    if (((struct Guzik*)p1)->rokProdukcji < ((struct Guzik*)p2)->rokProdukcji) return 1;
    
    return 0;
}
