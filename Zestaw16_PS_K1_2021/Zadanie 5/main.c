#include <stdio.h>
#include <stdlib.h>


int foo(int n, int *tab)
{
    for(int i=0; i<n; i++)
    {
        if(*(tab+i)%2 != 0)
            *(tab+i) = 2 * *(tab+i);
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
    *(tab)=3;
    *(tab+1)=-2;
    *(tab+2)=-5;
    *(tab+3)=7;
    wyswietl(4, tab);
    foo(4, tab);
    printf("Powyzsza tablica po podwojeniu nieparzystych elementow: \n");
    wyswietl(4, tab);
    printf("------------ \n");
    int *tab2 = malloc(4*sizeof(int));
    *(tab2)=21;
    *(tab2+1)=-7;
    *(tab2+2)=11;
    *(tab2+3)=22;
    wyswietl(4, tab2);
    foo(4, tab2);
    printf("Powyzsza tablica po podwojeniu nieparzystych elementow: \n");
    wyswietl(4, tab2);
    return 0;
}
