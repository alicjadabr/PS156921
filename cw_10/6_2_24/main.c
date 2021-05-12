#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcj�, kt�ra dostaje jako argumenty dwuwymiarow� tablic�
tablic o elementach typu int oraz jej wymiary, i zmienia kolejno��
kolumn w tablicy w taki spos�b, �e kolumna pierwsza ma si� znale��
na miejscu drugiej, kolumna druga ma si� znale�� na miejscu trzeciej
itd., natomiast ostatnia kolumna ma si� znale�� na miejscu pierwszej
(przyjmujemy, �e dwa elementy tablicy le�� w tej samej kolumnie,
je�eli maj� tak� sam� drug� wsp�rz�dn�). */

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
