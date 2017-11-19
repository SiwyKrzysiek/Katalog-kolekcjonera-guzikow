#include "Sortowanie.h"

int comparSizeD(const void* p1, const void* p2)
{
	if (((struct Guzik*)p1)->rozmiar > ((struct Guzik*)p2)->rozmiar) return -1;
	if (((struct Guzik*)p1)->rozmiar == ((struct Guzik*)p2)->rozmiar) return 0;
	if (((struct Guzik*)p1)->rozmiar < ((struct Guzik*)p2)->rozmiar) return 1;

	return 0;
}

int comparSizeI(const void* p1, const void* p2)
{
	if (((struct Guzik*)p1)->rozmiar < ((struct Guzik*)p2)->rozmiar) return -1;
	if (((struct Guzik*)p1)->rozmiar == ((struct Guzik*)p2)->rozmiar) return 0;
	if (((struct Guzik*)p1)->rozmiar > ((struct Guzik*)p2)->rozmiar) return 1;

	return 0;
}

int comparNameI(const void* p1, const void* p2)
{
	return strcmp(((struct Guzik*)p1)->nazwa, ((struct Guzik*)p2)->nazwa);
}

int comparNameD(const void* p1, const void* p2)
{
	return -strcmp(((struct Guzik*)p1)->nazwa, ((struct Guzik*)p2)->nazwa);
}