#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcjê, która dostaje w argumentach dwuwymiarow¹ tablicê tablic
elementów typu int oraz jej wymiary n i m, i wype³nia j¹ zerami.
 */

void foo(int **tab, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            *(*(tab+i)+j) = 0;
    }
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
}

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*3);
    tab[0]=(int*) malloc(sizeof(int)*3);
    tab[1]=(int*) malloc(sizeof(int)*3);
    tab[2]=(int*) malloc(sizeof(int)*3);
    foo(tab, 3, 3);
    wyswietl(3, 3, tab);
    return 0;
}
