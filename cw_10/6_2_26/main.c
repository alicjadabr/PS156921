#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcjê, która dostaje jako argumenty dwuwymiarow¹ prostok¹tn¹ tablicê tablic tab1
o wymiarach n × m i elementach typu int oraz jej wymiary, i zwraca jako wartoœæ wskaŸnik
do nowo utworzonej dwuwymiarowej tablicy tablic tab2 o wymiarach m × n zawieraj¹cej transponowan¹
    macierz przechowywan¹ w tablicy tab1 (czyli dla dowolnych k i j zachodzi tab1[k][j]=tab2[j][k]. */

int ** foo(int n, int m, int**tab1)
{
    int ** tab2=malloc(m*sizeof(int*));
    for(int i=0;i<m;i++)
    {
        *(tab2+i)=malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tab2[j][i]=tab1[i][j];
        }
    }
    return tab2;
}

void wyswietl(int n, int m, int **tab)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",*(*(tab+i)+j));
        }
        printf("*\n");
    }
    printf("---\n");
}

int** alokuj(int n, int m)
{
    int ** tab=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc(m*sizeof(int));
    }
    return tab;
}

int main()
{
    int**tablica2=alokuj(4,10);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<10;j++)
        {
            *(*(tablica2+i)+j)=i+j;
        }
    }
    wyswietl(4,10,tablica2);
    int **tablicaNew=foo(4,10,tablica2);
    wyswietl(10,4,tablicaNew);
    return 0;
}
