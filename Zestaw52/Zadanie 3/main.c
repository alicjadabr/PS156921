#include <stdio.h>
#include <stdlib.h>

/*Napisz bezargumentowa funkcje, kt�ra rezerwuje blok dw�ch zmiennych typu double. Funkcja ma
ustawic kolejno w pamieci wartosci 5.2 i -4.2. Na koniec funkcja powinna zwr�cic wskaznik na
poczatek bloku. Stw�rz przypadek testowy w main tak, aby wyswietlic na konsoli wartosci zmiennych
przechowywanych na bloku stworzonym wewnatrz funkcji. */

double *memory()
{
    double *tab = malloc(2*sizeof(double));
    *tab = 5.2;
    *(tab+1) = -4.2;
    return tab;
}

int main()
{
    double *tab = memory();
    printf("%lf\n", tab[0]);
    printf("%lf", tab[1]);
    return 0;
}
