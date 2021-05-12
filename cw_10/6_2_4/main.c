#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcjê, która dostaje jako argumenty wskaŸnik do tablicy dwuwymiarowej
elementów typu int oraz jej wymiary wymiary n i m, i usuwa z pamiêci otrzyman¹ tablicê.*/

int (*foo(int n, int m))[]
{
    return malloc(n*sizeof(int[m]));
}

void usun(int n, int m, int tab[][m])
{
    free(tab);
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
    usun(a,b,tablica);
    return 0;
}
