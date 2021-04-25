#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcje, która otrzymuje trzy argumenty: dodatnia liczbe ca³kowita n oraz dwie n-elementowe
tablice tab1 i tab2 o elementach typu int. Funkcja ma zwrócic wskaznik na nowoutworzona dynamiczna
tablice 2n-elementowa zawierajaca elementy z obu tablic przekazanych jako argumenty funkcji w
porzadku nierosnacym. Stwórz przypadek testowy. */

int min_w_tablicy(int n, int *tab)
{
    int min = 0;
    for(int i=1; i<n; i++)
    {
        if(*(tab+i)<tab[min])
            min = i;
    }
   return min;
}

int foo(int n, int tab1[], int tab2[])
{
    int *tab = malloc(2*n*(sizeof(int)));

    for(int i=0; i<n; i++)
        tab[i] = tab1[i];
    for(int i=0; i<n; i++)
        tab[i+n] = tab2[i];

    int x, temp;
    for(int i=0; i<2*n-1; i++)
    {
        x = min_w_tablicy(2*n-i, tab);  // x = indeks najmniejszego elementu
        temp = tab[2*n-i-1]; //zmienna tymczasowa przechowujaca wartosc ostatniego elementu tab w danym obrocie
        tab[2*n-i-1] = tab[x]; //ostatnie miejsce zajmuje najmniejeszy element
        tab[x] = temp; // miejsce najmniejeszego elementu zajmuje przedtem ostatni element
    }
    return tab;
}

void wyswietl(int n, int *tab)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", *(tab+i));
    }
    printf("\n");
}

int main()
{
    int tab1[] = {4, 2, 1, 6};
    int tab2[] = {-5, 3, -3, 10};
    wyswietl(8, foo(4, tab1, tab2));
    return 0;
}
