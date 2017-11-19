#ifndef SORTOWANIE
#define SORTOWANIE

enum TypSortowania
{
	nazwa,
	rozmiar,
	material,
	cena,
	dataZakupu,
	rokProdukcji
};

int comparSize(const void* a, const void* b);

#endif /* SORTOWANIE */

