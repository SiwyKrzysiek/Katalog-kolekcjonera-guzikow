#ifndef pliki_h
#define pliki_h

#include <stdio.h>
#include "Vector.h"

void zapiszDoPliku(struct Vector* vector, char nazwaPliku[]); //Zapisuje baze danych do pliku
void wczytajZPliku(struct Vector* vector, char nazwaPliku[]); //Wczytuje baze danych z pliku

#endif /* pliki_h */
