#include <stdio.h>
#include <stdlib.h>
/* Napisz funkcj�, kt�ra dostaje w argumentach dodatni� liczb� ca�kowit� n oraz
 tablic� tr�jwymiarow� o elementach typu int o wymiarach
n � 100 � 100, i zwraca jako warto�� sum� warto�ci element�w otrzymanej tablicy. */

// Nie mam pomys�u na to zadanie, niepewnie czuj� si� przy tr�jwymiarowych tablicach.

int sum(int n, int tab3[n][100][100])
{
    int sum = 0;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<100;j++)
        {
            for(int k=0; k<100; k++)
                sum += tab3[i][j][k];
        }
    }
    return sum;
}


int main()
{
    int n = 2;
    int tab[n][100][100];
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<100;j++)
        {
            for(int k=0; k<100; k++)
                tab[i][j][k] = 2;
        }
    }
    sum(2, tab);
    return 0;
}
