#include <stdio.h>
#include <stdlib.h>

void f_a(int n, int tab1[], int tab2[])
{
    for(int i=0; i<n; i++)
        tab2[i] = tab1[i];
}

void f_b(int n, int tab1[], int tab2[])
{
    for(int i=0; i<n; i++)
        tab2[i] = tab1[n-1-i];
}

void wyswietl(int n, int *tab)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", *(tab+i));
    }
    printf("\n");
}

int main()
{
    int tab1[] = {-3, -1, 4, 6, 7};
    int tab2[] = {3, 4, 12, -2, 0};
    wyswietl(5, tab1);
    wyswietl(5, tab2);
    f_b(5, tab1, tab2);
    printf("Tablice po przepisaniu zawartosci tablicy tab1 do tablicy tab2 w odwrotnej kolejnosci: \n");
    wyswietl(5, tab1);
    wyswietl(5, tab2);
    printf("----------\n");
    int tab3[] = {1, 55, -5, 4};
    int tab4[] = {22, 5, 65, -6};
    wyswietl(4, tab3);
    wyswietl(4, tab4);
    f_a(4, tab3, tab4);
    printf("Tablice po przepisaniu zawartosci tablicy tab1 do tablicy tab2: \n");
    wyswietl(4, tab3);
    wyswietl(4, tab4);
    return 0;
}
