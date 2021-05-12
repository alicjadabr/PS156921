#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcj�, kt�ra dostaje jako argument dodatnie liczby
ca�kowite n i m, tworzy dynamiczn� dwuwymiarow� tablic� element�w
typu int o wymiarach n na m i zwraca jako warto�� wska�nik do niej. */

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
