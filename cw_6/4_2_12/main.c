#include <stdio.h>
#include <stdlib.h>

void foo_a(unsigned int n, int *tab)
{
    int temp;
    for(int i=0; i<n/2; i++)
    {
        temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = temp;
    }
}

void foo_b(unsigned int n, int *tab)
{
    int temp = tab[0];
    for(int i=0; i<n-1; i++)
        tab[i] = tab[i + 1];
    tab[n-1] = temp;

}

void foo_c(unsigned int n, int *tab)
{
    int temp = tab[n-1];
    for(int i=n-2; i>=0; i--)
        tab[i+1] = tab[i];
    tab[0] = temp;
}


int foo_d(unsigned int n, int *tab)
{
    int max, max_i;
    for (int i=n-1; i>0; i--)
    {
        max = tab[0];
        max_i = 0;
        for (int j= 1; j<=i; j++)
            if (tab[i]>max )
            {
                max = tab[i];
                max_i = i;
            }
        tab[max_i] = tab[i];
        tab[i] = max;
    }
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
    int *tab = malloc(4*sizeof(int));
    *(tab)=4;
    *(tab+1)=-2;
    *(tab+2)=8;
    *(tab+3)=7;
    wyswietl(4, tab);
    foo_a(4, tab);
    printf("Powyzsza tablica po odwroceniu elementow: \n");
    wyswietl(4, tab);
    printf("------------ \n");

    int *tab2 = malloc(4*sizeof(int));
    *(tab2)=6;
    *(tab2+1)=-2;
    *(tab2+2)=3;
    *(tab2+3)=-4;
    wyswietl(4, tab2);
    foo_b(4, tab2);
    printf("Powyzsza tablica po przesunieciu w lewo kazdego elementu: \n");
    wyswietl(4, tab2);
    printf("------------ \n");


    int *tab3 = malloc(4*sizeof(int));
    *(tab3)=20;
    *(tab3+1)=-12;
    *(tab3+2)=32;
    *(tab3+3)=-44;
    wyswietl(4, tab3);
    foo_c(4, tab3);
    printf("Powyzsza tablica po przesunieciu w prawo kazdego elementu: \n");
    wyswietl(4, tab3);
    printf("------------ \n");

    int *tab4 = malloc(6*sizeof(int));
    *(tab4)=20;
    *(tab4+1)=-12;
    *(tab4+2)=32;
    *(tab4+3)=-44;
    *(tab4+4)=3;
    *(tab4+5)=22;
    wyswietl(6, tab4);
    foo_d(6, tab4);
    printf("Powyzsza tablica posortowana rosnaco: \n");
    wyswietl(6, tab4);

    return 0;

}

