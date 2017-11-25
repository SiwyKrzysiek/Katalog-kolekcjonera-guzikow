#ifndef INTERFEJS
#define INTERFEJS

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Guzik.h"
#include "Vector.h"
#include "Data.h"
#include "pliki.h"

char *wczytaj(char  *z, int  ile);
void czyscBufor(void);
struct Guzik wczytajGuzik(void);
struct Data wczytajDate(void);
void wyswietlMenuGlowne();
void menueCzyszczenia(struct Vector* baza);
void menuEdycji(struct Vector* baza);
void menuZapisuDoPliku(struct Vector* baza);
void menuWczytajZPliku(struct Vector* baza);
void menuSortowania(struct Vector* baza);

#endif /* INTERFEJS */
