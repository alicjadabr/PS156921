#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcj� wytnij, kt�ra dostaje jako argumenty napis
oraz dwie liczby ca�kowite n i m, i wycina z otrzymanego napisu znaki
o indeksach od n do m ( n <= m). Otrzymany w argumencie napis
mo�e mie� dowoln� liczb� znak�w (w tym mniejsz� od n lub m) */


void wytnij(char *nap, int n, int m)
{
    int i, j;
    for(i=0; nap[i] != '\0'; i++);
    if(i+1>m)
    {
        for(j=0; j+m<i; j++)
            nap[n+j] = nap[j+m+1];
    }
    else if((n<i)&&(i+1<=m))
        nap[n] = '\0';
}

int main()
{
    char nap[] = "Kalamarnica";
    printf("%s\n", nap);
    wytnij(nap, 0, 3);
    printf("Po zmianie : %s\n", nap);
    return 0;
}
