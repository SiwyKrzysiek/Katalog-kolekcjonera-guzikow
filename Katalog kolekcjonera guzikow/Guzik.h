#ifndef GUZIK
#define GUZIK

#include "Data.h"
#include <stdio.h>

enum Material
{
	zlto,
	srebro,
	miedz,
	drewno,
	szklo,
	skora,
	modelina
};

struct Guzik
{
	char nazwa[20];
	int rozmiar; //W mm
	enum Material material;
	double cena;
	struct Data data;
	int rokProdukcji;
};

const char *materialToString(enum Material material);
char *guzikToString(char nazwa[], struct Guzik guzik);

#endif /* GUZIK */
