#ifndef VECTOR
#define VECTOR

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "Guzik.h"
#include "Sortowanie.h"

struct Vector
{
	struct Guzik *tab; 
	int size;
	int cappcity;
};

void zainicjalizuj(struct Vector *vector); //Przygotowanie vectora do pracy
void push_back(struct Vector *vector, struct Guzik guzik); //Dodatne elementy na koniec
void delete(struct Vector *vector, int index); //Usuniecie wybranego elementu
void empty(struct Vector *vector); //Wyczyszczenie vectora
void wypisz(struct Vector *vector); //Wypisanie zawartosci vectora
void cleanupAtExit(struct Vector *vector); //Zwolnienie calej pamieci
void sort(struct Vector *vector, enum TypSortowania typSortowania, bool rosnaco); //Posortowanie zawartosci vectora wedlug daniego kryterium

#endif /* VECTOR */
