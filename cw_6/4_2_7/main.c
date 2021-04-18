#include <stdio.h>
#include <stdlib.h>

void f_a(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0; i<n; i++)
    {
        tab3[i] = tab1[i] + tab2[i];
    }
}

void f_b(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0; i<n; i++)
    {
        if(tab2[i]>tab1[i])
            tab3[i] = tab2[i];
        else
            tab3[i] = tab1[i];
    }
}

void f_c(int n, int tab1[], int tab2[], int tab3[])
{
    int pom1[n], pom2[n];

    for(int i=0; i<n; i++)
        pom1[i] = tab1[i];
    for(int i=0; i<n; i++)
        pom2[i] = tab2[i];
    for(int i=0; i<n; i++)
        tab1[i] = tab3[i];
    for(int i=0; i<n; i++)
        tab2[i] = pom1[i];
    for(int i=0; i<n; i++)
        tab3[i] = pom2[i];
}

void wyswietl(int tab[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab1[] = {3, 3, 1, -5};
    int tab2[] = {4, 3, 7, 9};
    int tab3[] = {1, -4, 2, -10};
    wyswietl(tab1, 4);
    wyswietl(tab2, 4);
    wyswietl(tab3, 4);
    f_a(4, tab1, tab2, tab3);
    printf("Tab3 po zmianie (a):\n");
    wyswietl(tab3, 4);
    f_b(4, tab1, tab2, tab3);
    printf("Tab3 po zmianie (b):\n");
    wyswietl(tab3, 4);
    int tab_1[] = {1, 2, 3};
    int tab_2[] = {4, 5, 6};
    int tab_3[] = {7, 8, 9};
    f_c(3, tab_1, tab_2, tab_3);
    printf("Tablice po wymianie (c):\n");
    wyswietl(tab_1, 3);
    wyswietl(tab_2, 3);
    wyswietl(tab_3, 3);

    return 0;
}
