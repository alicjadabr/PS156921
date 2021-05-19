#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcjê, która otrzymuje jako argumenty tablice tab1
i tab2 o argumentach typu struct punkt zdefiniowanego
w rozwi¹zaniu zadania 7.2.3 oraz ich rozmiar, i przepisuje
 zwartoœæ tablicy
tab1 do tablicy tab2. */

struct punkt
{
    float x, y, z;
};

void przepisz(int n, struct punkt tab1[], struct punkt tab2[])
{
    for(int i=0; i<n; i++)
        tab2[i] = tab1[i];
}

void opispunkt(struct punkt pkt)
{
    printf("%f %f %f\n", pkt.x, pkt.y, pkt.z);
}

void wyswietl(int n, struct punkt tab[])
{
    for(int i=0; i<n; i++)
    {
        printf("%d:     ", i);
        opispunkt(tab[i]);
    }
    printf("--------\n");
}

int main()
{
    struct punkt tab1[3] = { {2, 3.5, 4.5}, {1, 6.5, 7.5}, {-3, 4.5, 8} };
    struct punkt tab2[3] = { {8, 4, 9}, {5, 3.5, 2.5}, {-9, -4.5, 4.6} };
    wyswietl(3, tab1);
    wyswietl(3, tab2);
    przepisz(3, tab1, tab2);
    printf("Po przepisaniu tab1 do tab2: \n");
    printf("--------\n");
    wyswietl(3, tab1);
    wyswietl(3, tab2);
    return 0;
}

