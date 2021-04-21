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


int znajdz_max(int n, int *tab)
{
    int max = 0;
    for(int i=1; i<n; i++)
    {
        if(*(tab+i)>tab[max])
            max = i; // max bêdzie indeksem najwiêkszego elementu
    }
   return max;
}

void foo_d(int n, int *tab)
{
    int x, temp;
    for(int i=0; i<n-1; i++)
    {
        x = znajdz_max(n-i, tab);  // x = indeks najwiekszego elementu
        temp = tab[n-i-1]; //zmienna tymczasowa przechowuj¹ca wartoœæ ostatniego elementu tab w danym obrocie
        tab[n-i-1] = tab[x]; //ostatnie miejsce zajmuje najwiekszy element
        tab[x] = temp; // miejsce najwiekszego zajmuje przedtem ostatni element
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

    int *tab4 = malloc(5*sizeof(int));
    *(tab4)=20;
    *(tab4+1)=-12;
    *(tab4+2)=-44;
    *(tab4+3)=-443;
    *(tab4+4)=22;
    wyswietl(5, tab4);
    foo_d(5, tab4);
    printf("Powyzsza tablica posortowana rosnaco: \n");
    wyswietl(5, tab4);

    return 0;

}

