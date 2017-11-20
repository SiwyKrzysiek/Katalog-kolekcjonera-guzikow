#include "Vector.h"

void zainicjalizuj(struct Vector *vector)
{
    vector->cappcity=1;
    vector->size=0;
    vector->tab = (struct Guzik*) malloc(vector->cappcity * sizeof(struct Guzik));
	if (vector->tab == NULL)
	{
		puts("Blad alokacji pamieci");
		exit(1);
	}

}

void push_back(struct Vector *vector, struct Guzik guzik)
{
    if (vector->cappcity == vector->size)
    {
		struct Guzik *tmp = vector->tab;
        vector->cappcity *= 2;
        vector->tab = (struct Guzik*) realloc(vector->tab, vector->cappcity * sizeof(struct Guzik));
		if (vector->tab == NULL)
		{
			puts("Blad alokacji pamieci");
			free(tmp);
			exit(1);
		}
    }
    
    (vector->tab)[vector->size++] = guzik;
}

void delete(struct Vector *vector, int index)
{
    memmove(vector->tab+index, vector->tab+index+1, (vector->size-index-1)*sizeof(struct Guzik));
    vector->size--;
}

void empty(struct Vector *vector)
{
	free(vector->tab);
	zainicjalizuj(vector);
}

void cleanupAtExit(struct Vector *vector)
{
	free(vector->tab);
}

void replace(struct Vector *vector, int index, struct Guzik nowy)
{
	vector->tab[index] = nowy;
}

void wypisz(struct Vector *vector)
{
	char bufor[100];
	char nagluwek[] = "ID   Nazwa                Rozmiar   Material   Cena      Data zakupu   Rok produkcji";
	puts(nagluwek);
	puts("------------------------------------------------------------------------------------");

	for (int i = 0; i < vector->size; i++)
	{
		printf("%-4d %s\n", i + 1, guzikToString(bufor, vector->tab[i]));
	}
	putchar('\n');
}

void sort(struct Vector *vector, enum TypSortowania typSortowania, bool rosnaco)
{
    switch (typSortowania)
    {
        case nazwa:
            if (rosnaco)
                qsort(vector->tab, vector->size, sizeof(struct Guzik), comparNameI);
            else
                qsort(vector->tab, vector->size, sizeof(struct Guzik), comparNameD);
            break;
        case rozmiar:
            if (rosnaco)
                qsort(vector->tab, vector->size, sizeof(struct Guzik), comparSizeI);
            else
                qsort(vector->tab, vector->size, sizeof(struct Guzik), comparSizeD);
            break;
        case material:
            if (rosnaco)
                qsort(vector->tab, vector->size, sizeof(struct Guzik), comparMeterialI);
            else
                qsort(vector->tab, vector->size, sizeof(struct Guzik), comparMeterialD);
            break;
        case cena:
            if (rosnaco)
                qsort(vector->tab, vector->size, sizeof(struct Guzik), comparPriceI);
            else
                qsort(vector->tab, vector->size, sizeof(struct Guzik), comparPriceD);
            break;
        case dataZakupu:
            break;
        case rokProdukcji:
            break;
        default:
            break;
    }
}
