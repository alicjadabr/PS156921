#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcj� godzina, kt�ra dostaje w argumentach trzy liczby
ca�kowite godz, min i sek, zawieraj�ce odpowiednio godziny, minuty
oraz sekundy, i zwraca jako warto�� napis zawieraj�cy godzin�
w formacie godz:min:sek, w kt�rym warto�ci poszczeg�lnych p�l pochodz�
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
