#include "Sortowanie.h"
#include "Guzik.h"
#include <string.h>

int comparSize(const void* p1, const void* p2)
{
	if (((struct Guzik*)p1)->rozmiar > ((struct Guzik*)p2)->rozmiar) return -1;
	if (((struct Guzik*)p1)->rozmiar == ((struct Guzik*)p2)->rozmiar) return 0;
	if (((struct Guzik*)p1)->rozmiar < ((struct Guzik*)p2)->rozmiar) return 1;
}

int comparName(const void* p1, const void* p2)
{
	//char *a = ((struct Guzik*)p1)->nazwa, *b = ((struct Guzik*)p2)->nazwa;

	return strcmp(((struct Guzik*)p1)->nazwa, ((struct Guzik*)p2)->nazwa);
}