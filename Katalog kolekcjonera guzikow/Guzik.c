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

char *guzikToString(char nazwa[], struct Guzik guzik)
{
	char cena[10], data[11];
	sprintf(cena, "%d zl", guzik.cena);
	//30 7 10 7 12
	sprintf(nazwa, "%-19s %2d mm   %-9s %-6s %-11s %d", guzik.nazwa, guzik.rozmiar, materialToString(guzik.material), cena, dataToString(data, guzik.data), guzik.rokProdukcji);
}
