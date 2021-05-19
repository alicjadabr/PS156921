#include <stdio.h>
#include <stdlib.h>

/* Zdefiniuj strukturê punkt10 s³u¿¹c¹ do przechowywania wspó³rzêdnych
punktów w dziesiêciowymiarowej przestrzeni kartezjañskiej.
Do przechowywania poszczególnych wymiarów wykorzystaj tablicê
dziesiêcioelementow¹.
Napisz funkcjê, która otrzymuje jako argumenty tablice tab1 i tab2
typu struct punkt10 oraz ich wspólny rozmiar, i przepisuje zwartoœæ
tablicy tab1 do tablicy tab2.*/

struct punkt10
{
    int tab[10];
};

void przepisz(int n, struct punkt10 tab1[], struct punkt10 tab2[])
{
    for(int i=0; i<n; i++)
        tab2[i] = tab1[i];
}

void opispunkt(struct punkt10 pkt)
{
    for(int i=0; i<10; i++)
    {
        printf("%d  ", pkt.tab[i]);
    }
    printf("\n");
}

void wyswietl(int n, struct punkt10 tab[])
{
    for(int i=0; i<n; i++)
    {
        printf("%d:  ", i);
        opispunkt(tab[i]);
    }
    printf("--------\n");
}

int main()
{
    struct punkt10 tab1[] = { {2, 3, 4, 55, 34, -4, -6, 34, 3, 22}, {1, 6, 7, -4, -33, 4, 43, 34, 65, 3, 7}, {-3, 4, 8, -55, 23, 26, 57, 87, 4, 12} };
    struct punkt10 tab2[] = { {8, 4, 9, 34, 67, -66, -45, 4, 24, 67}, {5, 35, 25, -6, -45, 45, -66, 4, 3, 2}, {-9, -45, 46, 3, 4, 7, 54, 34, 3, -6} };
    wyswietl(3, tab1);
    wyswietl(3, tab2);
    przepisz(3, tab1, tab2);
    printf("Po przepisaniu tab1 do tab2: \n");
    printf("--------\n");
    wyswietl(3, tab1);
    wyswietl(3, tab2);
    return 0;
}
