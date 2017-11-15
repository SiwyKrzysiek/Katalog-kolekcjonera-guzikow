#ifndef GUZIK
#define GUZIK

enum Material
{
	z³oto,
	srebro,
	miedz,
	drewno,
	szklo,
	material,
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
