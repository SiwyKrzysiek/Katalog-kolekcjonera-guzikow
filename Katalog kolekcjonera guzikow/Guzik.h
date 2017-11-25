#ifndef GUZIK
#define GUZIK

#include <stdio.h>
#include <string.h>
#include "Data.h"

#define LICZBA_MATERIALOW 7

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

const char *materialToString(enum Material material); //Zamienia typ matrial na odpowiadajacy mu ciag znakow
char *guzikToString(char nazwa[75], struct Guzik guzik); //Zamienia typ Guzik na ciag znakow opisujacy jego cechy
enum Material stringToMaterial(char materialS[15]); //Zamienia ciag znakow opisujacy material na typ material. W przypadku blednych danych zwraca -1

#endif /* GUZIK */
