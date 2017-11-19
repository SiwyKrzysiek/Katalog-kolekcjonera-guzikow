#include "Sortowanie.h"
#include "Guzik.h"

int comparSize(const void* a, const void* b)
{
	if (((struct Guzik*)a)->rozmiar > ((struct Guzik*)b)->rozmiar) return -1;
	if (((struct Guzik*)a)->rozmiar == ((struct Guzik*)b)->rozmiar) return 0;
	if (((struct Guzik*)a)->rozmiar < ((struct Guzik*)b)->rozmiar) return 1;
}