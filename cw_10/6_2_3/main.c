#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcj�, kt�ra dostaje jako argumenty wska�nik do dwuwymiarowej tablicy tablic
element�w typu int oraz jej wymiary: dodatnie liczby ca�kowite n i m, i usuwa z pami�ci otrzyman� tablic�.
 */

void foo(int **tab, int n, int m)
{
    for(int i=0; i<n; i++)
        free(*(tab+i));
    free(tab);
}

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*2);
    tab[0]=(int*) malloc(sizeof(int)*3);
    tab[1]=(int*) malloc(sizeof(int)*3);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            *(*(tab+i)+j)=i+j+2;
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            printf("[%d,%d]=%d\n",i,j,*(*(tab+i)+j));
    }

    foo(tab,2,3);

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            printf("[%d,%d]=%d\n",i,j,*(*(tab+i)+j));
    }
    return 0;
}
