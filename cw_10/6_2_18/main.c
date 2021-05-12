#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcj�, kt�ra dostaje jako argument dwuwymiarow� tablic�
tablic o elementach typu int oraz jej wymiary, i wypisuje jej zawarto��
na standardowym wyj�ciu w taki spos�b, �eby kolejne wiersze tablicy zosta�y wypisane w
oddzielnych wierszach standardowego wyj�cia.
Przyjmujemy, �e dwa elementy le�� w tym samym wierszu, je�eli maj�
taki sam drugi indeks. */

void foo(int n, int m, int **tab)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",*(*(tab+i)+j));
        }
        printf("\n");
    }
}

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*4);
    tab[0]=(int*) malloc(sizeof(int)*6);
    tab[1]=(int*) malloc(sizeof(int)*6);
    tab[2]=(int*) malloc(sizeof(int)*6);
    tab[3]=(int*) malloc(sizeof(int)*6);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<6;j++)
            *(*(tab+i)+j)=i+j+2;
    }
    foo(4, 6, tab);
    return 0;
}
