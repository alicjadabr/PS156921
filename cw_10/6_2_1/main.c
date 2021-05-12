#include <stdio.h>
#include <stdlib.h>

/*  Napisz funkcj�, kt�ra dostaje jako argument dodatnie liczby ca�kowite n i m, tworzy dynamiczn�
dwuwymiarow� tablic� tablic element�w typu int o wymiarach n na m, i zwraca jako warto�� wska�nik
do niej.*/

int** foo(int n, int m)
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
    int**tablica=foo(2,3);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            *(*(tablica+i)+j)=i*j;
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("[%d,%d]=%d\n",i,j,*(*(tablica+i)+j));
        }
    }
    return 0;
}
