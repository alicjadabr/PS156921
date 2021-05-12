#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcjê, która dostaje jako argumenty dwuwymiarow¹ tablicê
tablic o elementach typu int oraz jej wymiary, i zmienia kolejnoœæ
kolumn w tablicy w taki sposób, ¿e kolumna pierwsza ma siê znaleŸæ
na miejscu drugiej, kolumna druga ma siê znaleŸæ na miejscu trzeciej
itd., natomiast ostatnia kolumna ma siê znaleŸæ na miejscu pierwszej
(przyjmujemy, ¿e dwa elementy tablicy le¿¹ w tej samej kolumnie,
je¿eli maj¹ tak¹ sam¹ drug¹ wspó³rzêdn¹). */

void przesun(unsigned int n, int *tab)
{
    int temp = tab[n-1];
    for(int i=n-2; i>=0; i--)
        tab[i+1] = tab[i];
    tab[0] = temp;

}
void przesun_2d(int **tab, int n, int m)
{
    for(int i=0; i<n; i++)
        przesun(n, tab[i]);
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
    przesun_2d(tab,4,4);
    printf("Po przesunieciu kolumn o 1 w prawo: \n");
    wyswietl(4, 4, tab);
    return 0;
}
