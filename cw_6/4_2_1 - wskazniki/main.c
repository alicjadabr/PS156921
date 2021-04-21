#include <stdio.h>
#include <stdlib.h>

void f_a(unsigned int n, int *tab)
{
    for(int i=0; i<n; i++)
        *(tab+i) = 0;
}

void f_b(unsigned int n, int *tab)
{
    for(int i=0; i<n; i++)
        *(tab+i) = i;
}

void f_c(unsigned int n, int *tab)
{
    for(int i=0; i<n; i++)
        *(tab+i) *= 2;
}

void f_d(unsigned int n, int *tab)
{
    for(int i=0; i<n; i++)
        *(tab+i) = abs(tab[i]);
}

void wyswietl(int n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}


int main()
{
    int *tab = malloc(5*sizeof(int));
    *(tab)=1;
    *(tab+1)=-2;
    *(tab+2)=8;
    *(tab+3)=7;
    *(tab+4)=3;
    wyswietl(5, tab);
    f_a(5, tab);
    wyswietl(5, tab);
    return 0;
}
