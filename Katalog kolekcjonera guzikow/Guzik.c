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
	char cena[10], data[11], wielkosc[8];
	sprintf(cena, "%.2fzl", guzik.cena);
	sprintf(wielkosc, "%2d mm", guzik.rozmiar);
	//30 10 11 9 14 4 = 75
	sprintf(nazwa, "%-20s %-9s %-10s %-8s %-14s %d", guzik.nazwa, wielkosc, materialToString(guzik.material), cena, dataToString(data, guzik.data), guzik.rokProdukcji);

	return nazwa;
}
