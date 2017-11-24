#ifndef INTERFEJS
#define INTERFEJS

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Guzik.h"
#include "Vector.h"
#include "Data.h"

char *wczytaj(char  *z, int  ile);
void czyscBufor(void);
struct Guzik wczytajGuzik(void);
struct Data wczytajDate(void);


#endif /* INTERFEJS */
