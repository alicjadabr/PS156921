#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcjê, która dostaje jako argument dwuwymiarow¹ tablicê
tablic o elementach typu int oraz jej wymiary, i wypisuje jej zawartoœæ
na standardowym wyjœciu w taki sposób, ¿eby kolejne wiersze tablicy zosta³y wypisane w
oddzielnych wierszach standardowego wyjœcia.
Przyjmujemy, ¿e dwa elementy le¿¹ w tym samym wierszu, je¿eli maj¹
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
