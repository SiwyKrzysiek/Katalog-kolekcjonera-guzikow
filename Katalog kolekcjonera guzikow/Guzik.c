#include "Guzik.h"

const char *materialToStrin(enum Material material)
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
