#include <stdio.h>
#include <stdlib.h>
/* Napisz funkcjê, która dostaje w argumentach dodatni¹ liczbê ca³kowit¹ n oraz
 tablicê trójwymiarow¹ o elementach typu int o wymiarach
n × 100 × 100, i zwraca jako wartoœæ sumê wartoœci elementów otrzymanej tablicy. */

// Nie mam pomys³u na to zadanie, niepewnie czujê siê przy trójwymiarowych tablicach.

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
