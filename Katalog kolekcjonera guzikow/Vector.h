#ifndef VECTOR
#define VECTOR

#include <stdio.h>
#include <stdlib.h>
#include "Guzik.h"

struct Vector
{
	struct Guzik *tab; 
	int size;
	int cappcity;
};

void zainicjalizuj(struct Vector *vector);
void push_back(struct Vector *vector, struct Guzik guzik);

#endif /* VECTOR */