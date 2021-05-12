#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcjê, która dostaje w argumentach tablicê dwuwymiarow¹ elementów
typu int oraz jej wymiary n i m, i wype³nia j¹ zerami. */

void foo(int n, int m, int tab[n][m])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            tab[i][j] = 0;
    }
}

int main()
{
    int tab[2][3] = {{4,2,0},{-6,-3,9}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            printf("[%d,%d]=%d\n",i,j,*(*(tab+i)+j));
    }
    foo(2, 3, tab);
    printf("Po uzyciu funkcji: \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            printf("[%d,%d]=%d\n",i,j,*(*(tab+i)+j));
    }
    return 0;
}
