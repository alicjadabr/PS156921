#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcjê, która dostaje jako argumenty dwuwymiarow¹ tablicê tablic o elementach typu int
oraz jej wymiary, i odwraca kolejnoœæ elementów we wszystkich wierszach otrzymanej tablicy
 (przyjmujemy, ¿e dwa elementy tablicy le¿¹ w tym samym wierszu, je¿eli
maj¹ tak¹ sam¹ pierwsz¹ wspó³rzêdn¹).  */

void temp(int n, int *tab)
{
    int temp;
    for(int i=0; i<n/2; i++)
    {
        temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = temp;
    }
}

void foo(int **tab, int n, int m)
{
    for(int i=0; i<n; i++)
        temp(n, tab[i]);
}

void wyswietl(int n, int m, int **tab)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",*(*(tab+i)+j));
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*4);
    tab[0]=(int*) malloc(sizeof(int)*4);
    tab[1]=(int*) malloc(sizeof(int)*4);
    tab[2]=(int*) malloc(sizeof(int)*4);
    tab[3]=(int*) malloc(sizeof(int)*4);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
            *(*(tab+i)+j)=i+j+3;
    }
    wyswietl(4, 4, tab);
    foo(tab,4,4);
    printf("Po odwroceniu kolejnosci elementow w wierszach: \n");
    wyswietl(4, 4, tab);
    return 0;
}
