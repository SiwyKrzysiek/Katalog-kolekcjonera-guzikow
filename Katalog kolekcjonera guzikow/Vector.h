#ifndef VECTOR
#define VECTOR

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Guzik.h"

struct Vector
{
	struct Guzik *tab; 
	int size;
	int cappcity;
};

void zainicjalizuj(struct Vector *vector);
void push_back(struct Vector *vector, struct Guzik guzik);
void delete(struct Vector *vector, int index);
void clear(struct Vector *vector);
void wypisz(struct Vector *vector);
void cleanupAtExit(struct Vector *vector);
void sort(struct Vector *vector, enum TypSortowania typSortowania);

#endif /* VECTOR */
