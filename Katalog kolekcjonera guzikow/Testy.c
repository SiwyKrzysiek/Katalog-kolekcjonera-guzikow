#include "Testy.h"

void testVectorDodawanieElementow()
{
    struct Vector vector;
    zainicjalizuj(&vector);
    struct Guzik a = {"Tomek", 15, zlto, 20, {4,11,2017}, 2010};
    
    for (int i=0; i<=10; i++)
    {
        printf("%d.\nLiczba elementow vectora: %d\nPojemnosc vectora: %d\n\n", i, vector.size, vector.cappcity);
        push_back(&vector, a);
    }
    
    cleanupAtExit(&vector);
}

void testWypisaniaDanych()
{
    struct Vector vector;
    zainicjalizuj(&vector);
    struct Guzik a = {"Tomek", 15, zlto, 20, {4,11,2017}, 2010}, b = { "Staszek", 2, drewno, 25,{ 4,11,2016 }, 2009 }
    , j = { "Jagodka", 20, srebro, 50.32,{ 19,3,1999 }, 2016 }, c = { "Bartek", 17, skora, 6.99,{ 30,2,2000 }, 2010 };
    push_back(&vector, a);
    push_back(&vector, b);
    push_back(&vector, j);
    push_back(&vector, c);
    
    
    wypisz(&vector);
    
    cleanupAtExit(&vector);
}

void testSortowan()
{
    struct Vector vector;
    zainicjalizuj(&vector);
    struct Guzik a = {"Tomek", 15, zlto, 20, {4,11,2017}, 2010}, b = { "Staszek", 2, drewno, 25,{ 4,11,2016 }, 2009 }
    , j = { "Jagodka", 20, srebro, 50.32,{ 19,3,1999 }, 2016 }, c = { "Bartek", 17, skora, 6.99,{ 30,2,2000 }, 2010 };
    push_back(&vector, a);
    push_back(&vector, b);
    push_back(&vector, j);
    push_back(&vector, c);
    
    puts("Stan poczatkowy");
    wypisz(&vector);

    puts("Sortowanie po nazwie rosnaco");
    sort(&vector, nazwa, true);
    wypisz(&vector);

    puts("Sortowanie po nazwie malejaco");
    sort(&vector, nazwa, false);
    wypisz(&vector);
    
    puts("Sortowanie po rozmiarze rosnaco");
    sort(&vector, rozmiar, true);
    wypisz(&vector);
    
    puts("Sortowanie po rozmiarze malejaco");
    sort(&vector, rozmiar, false);
    wypisz(&vector);
    
    puts("Sortowanie po materiale rosnaco");
    sort(&vector, material, true);
    wypisz(&vector);
    
    puts("Sortowanie po materiale malejaco");
    sort(&vector, material, false);
    wypisz(&vector);
    
    puts("Sortowanie po cenie rosnaco");
    sort(&vector, cena, true);
    wypisz(&vector);
    
    puts("Sortowanie po cenie malejaco");
    sort(&vector, cena, false);
    wypisz(&vector);

    puts("Sortowanie po dacie zakupu rosnaco");
    sort(&vector, dataZakupu, true);
    wypisz(&vector);
    
    puts("Sortowanie po dacie zakupu malejaco");
    sort(&vector, dataZakupu, false);
    wypisz(&vector);

    puts("Sortowanie po roku produkcji rosnaco");
    sort(&vector, rokProdukcji, true);
    wypisz(&vector);
    
    puts("Sortowanie po roku produkcji malejaco");
    sort(&vector, rokProdukcji, false);
    wypisz(&vector);
}













