#ifndef GUZIK
#define GUZIK

#include "Data.h"

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
	char nazwa[30];
	int rozmiar; //W mm
	enum Material material;
	double cena;
	struct Data data;
	int rokProdukcji;
};

#endif /* GUZIK */
