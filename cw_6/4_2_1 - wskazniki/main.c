#include <stdio.h>
#include <stdlib.h>

void f_a(unsigned int n, int *tab)
{
    for(int i=0; i<n; i++)
    {
        *(tab+i) = 0;
        printf("%d ", tab[i]);
    }
}

void f_b(unsigned int n, int *tab)
{
    for(int i=0; i<n; i++)
    {
        *(tab+i) = i;
        printf("%d ", tab[i]);
    }
}

void f_c(unsigned int n, int *tab)
{
    for(int i=0; i<n; i++)
    {
        *(tab+i) *= 2;
        printf("%d ", tab[i]);
    }
}

void f_d(unsigned int n, int *tab)
{
    for(int i=0; i<n; i++)
    {
        *(tab+i) = abs(tab[i]);
        printf("%d ", tab[i]);
    }
}

int main()
{
    int *tab [6] = {-4, -1, 3, 6, 9, 13};
    return 0;
}
