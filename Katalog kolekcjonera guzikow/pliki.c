#include "Pliki.h"

void zapiszDoPliku(struct Vector* vector, FILE* plik)
{
    for (int i=0; i<vector->size; i++) 
    {
        char bufor[80];
        fputs(guzikToString(bufor, vector->tab[i]), plik);
        fputc('\n', plik);
    }
}

void wczytajZPliku(struct Vector* vector, FILE* plik)
{
    struct Guzik guzik;
    char material[15];
    
    empty(vector);
    while (fscanf(plik, "%s %d %*s %s %lf %*s %d %*c %d %*c %d %d", guzik.nazwa, &guzik.rozmiar, material, &guzik.cena, &guzik.data.dzien, &guzik.data.miesiac, &guzik.data.rok, &guzik.rokProdukcji) == 8)
    {
        guzik.material = stringToMaterial(material);
        
        push_back(vector, guzik);
    }
}
