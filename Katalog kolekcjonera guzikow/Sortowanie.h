#ifndef SORTOWANIE
#define SORTOWANIE

#include <string.h>
#include "Guzik.h"
#include "Data.h"

enum TypSortowania
{
    nazwa,
    rozmiar,
    material,
    cena,
    dataZakupu,
    rokProdukcji
};

int comparNameI(const void* p1, const void* p2); //Porownanie po imieniu rosnaco
int comparNameD(const void* p1, const void* p2); //Porownanie po imieniu malejaco
int comparSizeD(const void* p1, const void* p2); //Porownanie po rozmiarze rosnaco
int comparSizeI(const void* p1, const void* p2); //Porownanie po rozmiarze malejaco
int comparMeterialI(const void* p1, const void* p2); //Porownanie po materiale rosnaco
int comparMeterialD(const void* p1, const void* p2); //Porownanie po materiale malejaco
int comparPriceI(const void* p1, const void* p2); //Porownanie po cenie rosnaco
int comparPriceD(const void* p1, const void* p2); //Porownanie po cenie malejaco
int comparDateI(const void* p1, const void* p2); //Porownanie po dacie wprowadzenia rosnaco
int comparDateD(const void* p1, const void* p2); //Porownanie po dacie wprowadzenia malejaco
int comparProductionYearI(const void* p1, const void* p2); //Porownanie po dacie produkcji rosnaco
int comparProductionYearD(const void* p1, const void* p2); //Porownanie po dacie produkcji malejaco

#endif /* SORTOWANIE */

