#ifndef pliki_h
#define pliki_h

#include <stdio.h>
#include "Vector.h"

void zapiszDoPliku(struct Vector* vector, char nazwaPliku[]);
void wczytajZPliku(struct Vector* vector, char nazwaPliku[]);

#endif /* pliki_h */
