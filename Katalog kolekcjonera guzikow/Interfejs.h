#ifndef INTERFEJS
#define INTERFEJS

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Guzik.h"
#include "Vector.h"
#include "Data.h"
#include "pliki.h"

char *wczytaj(char  *z, int  ile); //Wczytuje dana liczbe znakow lub do konca linii a potem czysci bufor
void czyscBufor(void); //Czysci bufor wejsciowy
struct Guzik wczytajGuzik(void); //Wczytuje guzik ze standardowego wejscia
struct Data wczytajDate(void); //Wczytuje date ze standardowego wejscia
void wyswietlMenuGlowne(); //Wyswietla glowne menu
void menueCzyszczenia(struct Vector* baza); //Wyswietla menu czysczenia bazy danych
void menuEdycji(struct Vector* baza); //Wyswietla menu edytowania zawartosci bazy danych
void menuZapisuDoPliku(struct Vector* baza); //Wyswietla menu zapisu do pliku
void menuWczytajZPliku(struct Vector* baza); //Wyswietla menu wczytania danych z pliku
void menuSortowania(struct Vector* baza); //Wyswietla menu sortowania bazy danych

#endif /* INTERFEJS */
