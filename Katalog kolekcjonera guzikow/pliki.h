#ifndef pliki_h
#define pliki_h

#include <stdio.h>
#include "Vector.h"

void zapiszDoPliku(struct Vector* vector, FILE* plik);
void wczytajZPliku(struct Vector* vector, FILE* plik);

#endif /* pliki_h */
