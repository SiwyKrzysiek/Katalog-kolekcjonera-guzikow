#ifndef DATA
#define DATA

#include <stdio.h>
#pragma warning(disable:4996)

struct Data
{
	int dzien,
		miesiac,
		rok;
};

char *dataToString(char slowo[], struct Data data);

#endif /* DATA */

