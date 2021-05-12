#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcjê, która dostaje jako argument dodatnie liczby
ca³kowite n i m, tworzy dynamiczn¹ dwuwymiarow¹ tablicê elementów
typu int o wymiarach n na m i zwraca jako wartoœæ wskaŸnik do niej. */

int (*foo(int n, int m))[]
{
    return malloc(n*sizeof(int[m]));
}


int main()
{
    int a=3,b=4;
    int (*tablica)[4]=foo(a,b);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            *(*(tablica+i)+j)=i*j;
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("[%d,%d]=%d,%p\n",i,j,*(*(tablica+i)+j),*(tablica+i)+j);
        }
    }
    return 0;
}
