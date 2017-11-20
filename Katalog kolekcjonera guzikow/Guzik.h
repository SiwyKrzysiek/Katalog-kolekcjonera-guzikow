#ifndef GUZIK
#define GUZIK

#include <stdio.h>
#include <string.h>
#include "Data.h"

enum Material
{
    drewno,
    miedz,
    modelina,
    skora,
    srebro,
    szklo,
    zlto
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
enum Material stringToMaterial(char materialS[15]);

#endif /* GUZIK */
