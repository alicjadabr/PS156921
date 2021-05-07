#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcjê sklej otrzymuj¹c¹ jako argumenty trzy tablice znaków i zapisuj¹c¹ do trzeciej tablicy konkatenacjê
napisów znajduj¹cych siê w dwóch pierwszych tablicach (czyli dla napisów ”Ala m”
i ”a kota” znajduj¹cych siê w pierwszych dwóch argumentach do trzeciej tablicy powinien
zostaæ zapisany napis ”Ala ma kota”). Zak³adamy, ¿e w trzeciej tablicy jest wystarczaj¹co du¿o miejsca.*/

void sklej(char *tab1, char *tab2, char *tab3)
{
    int i,j;
    for(i=0; tab1[i] != '\0'; i++)
        tab3[i] = tab1[i];
    for(j=0; tab2[j] != '\0'; j++)
        tab3[i+j] = tab2[j];
    tab3[i+j] = '\0';
}

int main()
{
    char nap1[] = "Ala m";
    char nap2[] = "a kota";
    char nap3[30];
    printf("%s\n", nap1);
    printf("%s\n", nap2);
    printf("%s.\n", nap3);
    sklej(nap1, nap2, nap3);
    printf("Po zmianie : %s\n", nap1);
    printf("Po zmianie : %s\n", nap2);
    printf("Po zmianie : %s\n", nap3);
    return 0;
}
