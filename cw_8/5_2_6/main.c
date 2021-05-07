#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcję kopiujn, która dostaje w argumentach dwie tablice
znaków nap1, nap2 oraz liczbę n i przekopiowuje n pierwszych znaków
z napisu przechowywanego w tablicy nap1 do tablicy nap2. W przypadku
gdy napis w tablicy nap1 jest krótszy niż n znaków, funkcja
powinna po prostu przepisać cały napis. Funkcja powinna zadbać o to,
żeby na końcu napisu w tablicy nap2 znalazł się znak o kodzie 0.
Zakładamy, że w docelowej tablicy jest wystarczająco dużo miejsca.
*/


//Panie Doktorze, próbowałam na różne sposoby i cały czas obcina mi pierwszy napis, proszę o pomoc.
int dlugosc(char *napis)
{
    int i=0;
    while((*(napis+i)) != 0)
        i++;
    return i;
}

void kopiuj_n(char *nap1, char *nap2, int n)
{
    int dl_nap1 = dlugosc(nap1);
    int dl_nap2 = dlugosc(nap2);
    char temp[dl_nap1];

    for(int i=0; i<dl_nap1; i++)
        temp[i] = nap1[i];
    temp[dl_nap1+1] = '\0';
    int dl_temp = dlugosc(temp);
    for(int i=0; i<n; i++)
        nap2[i+dl_nap2] = temp[i];

    nap2[dl_nap2+n] = '\0';
}

int main()
{
    char nap1[] = "komoda";
    char nap2[] = "niedziela";
    printf("%s\n", nap1);
    printf("%s\n", nap2);
    kopiuj_n(nap1, nap2, 4);
    printf("Po zmianie : %s\n", nap1);
    printf("Po zmianie : %s\n", nap2);
    return 0;
}
