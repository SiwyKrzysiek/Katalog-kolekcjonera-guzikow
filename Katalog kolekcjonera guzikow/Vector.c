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
        vector->cappcity *= 2;
        vector->tab = (struct Guzik*) realloc(vector->tab, vector->cappcity * sizeof(struct Guzik));
		if (vector->tab == NULL)
		{
			puts("Blad alokacji pamieci");
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


void wypisz(struct Vector *vector)
{
	char bufor[100];
	char nagluwek[] = "ID   Nazwa                Rozmiar   Material   Cena      Data zakupu   Rok produkcji";

	puts("WIP");
	exit(1);
}