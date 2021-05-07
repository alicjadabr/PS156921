#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcjê godzina, która dostaje w argumentach trzy liczby
ca³kowite godz, min i sek, zawieraj¹ce odpowiednio godziny, minuty
oraz sekundy, i zwraca jako wartoœæ napis zawieraj¹cy godzinê
w formacie godz:min:sek, w którym wartoœci poszczególnych pól pochodz¹
ze zmiennych podanych w argumentach. */

char *godzina(int godz, int min, int sek)
{
    char *napis = malloc(9*sizeof(char));
    sprintf(napis, "%02d:%02d:%02d", godz, min, sek);
    return napis;
}

int main()
{
    int g=7;
    int m=46;
    int s=3;
    char *nap;
    nap = godzina(g,m,s);
    printf("%s\n", nap);
    return 0;
}
