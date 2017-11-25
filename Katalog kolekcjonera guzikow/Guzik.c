#include "Guzik.h"

const char *materialToString(enum Material material)
{
    switch (material) {
        case zlto:
            return "zloto";
        case srebro:
            return "srebro";
        case miedz:
            return "miedz";
        case drewno:
            return "drewno";
        case szklo:
            return "szklo";
        case skora:
            return "skora";
        case modelina:
            return "modelina";

        default:
            return "blad";
    }
}

char *guzikToString(char nazwa[75], struct Guzik guzik)
{
	char cena[11], data[11], wielkosc[8];
	sprintf(cena, "%.2fzl", guzik.cena);
	sprintf(wielkosc, "%2d mm", guzik.rozmiar);
	//30 10 11 9 14 4 = 75
	sprintf(nazwa, "%-20s %-9s %-10s %-9s %-13s %d", guzik.nazwa, wielkosc, materialToString(guzik.material), cena, dataToString(data, guzik.data), guzik.rokProdukcji);

	return nazwa;
}

enum Material stringToMaterial(char materialS[15])
{
    if (!strcmp(materialS, "zloto"))
        return zlto;
    if (!strcmp(materialS, "srebro"))
        return srebro;
    if (!strcmp(materialS, "miedz"))
        return miedz;
    if (!strcmp(materialS, "drewno"))
        return drewno;
    if (!strcmp(materialS, "szklo"))
        return szklo;
    if (!strcmp(materialS, "skora"))
        return skora;
    if (!strcmp(materialS, "modelina"))
        return modelina;
    
    return -1;
}
