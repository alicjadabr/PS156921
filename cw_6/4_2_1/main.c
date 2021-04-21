#include <stdio.h>
#include <stdlib.h>

void f_a(unsigned int n, int tab[])
{
    for(int i=0; i<n; i++)
        tab[i] = 0;
}

void f_b(unsigned int n, int tab[])
{
    for(int i=0; i<n; i++)
        tab[i] = i;
}

void f_c(unsigned int n, int tab[])
{
    for(int i=0; i<n; i++)
        tab[i] *= 2;
}

void f_d(unsigned int n, int tab[])
{
    for(int i=0; i<n; i++)
        tab[i] = abs(tab[i]);
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
    int tab[6] = {-4, -1, 3, 6, 9, 13};
    wyswietl(6, tab);
    f_a(6, tab);
    wyswietl(6, tab);
    printf("-------\n");
    int tab2[6] = {-2, -1, 10, 61, 29, 13};
    wyswietl(6, tab2);
    f_b(6, tab2);
    wyswietl(6, tab2);
    printf("-------\n");
    int tab3[6] = {-9, -13, 3, 1, 8, 2};
    wyswietl(6, tab3);
    f_c(6, tab3);
    wyswietl(6, tab3);
    printf("-------\n");
    int tab4[4] = {-4, -1, 3, 6};
    wyswietl(4, tab4);
    f_d(4, tab4);
    wyswietl(4, tab4);
    return 0;
}
