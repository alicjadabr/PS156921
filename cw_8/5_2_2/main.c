#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcję dlugosc, która jako argument otrzymuje napis
i zwraca jako wartość jego długość. Napisz dwie wersje funkcji dlugosc
dla napisów składających się ze znaków typu char i wchar_t. */

int dlugosc(char *napis)
{
    int i=0;
    while(*(napis+i) != 0)
        i++;
    return i;
}

int dlugosc2(wchar_t *napis)
{
    int i=0;
    while(*(napis+i) != 0)
        i++;
    return i;
}

int main()
{
    char nap[] = "lokomotywa";
    char *w = nap;
    printf("%d\n", dlugosc(w));

    wchar_t nap2[] = L"stonoga";
    wchar_t *w2 = nap2;
    wprintf(L"%d", dlugosc2(w2));
    return 0;
}
