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

int comparName(const void* p1, const void* p2);
int comparSize(const void* p1, const void* p2);

#endif /* SORTOWANIE */

