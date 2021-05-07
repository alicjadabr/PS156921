#include <stdio.h>
#include <stdlib.h>

/*Napisz funkcjê wytnijzw, która dostaje jako argument dwa napisy nap1 i nap2,
i wycina z napisu nap1 wszystkie znaki wystêpuj¹ce tak¿e w napisie nap2. */

void wytnij_zw(char *nap1, char *nap2)
{
    int i, j;
    int asci[256] = {};
    for(i=0; nap2[i] != '\0'; i++)
        asci[nap2[i]] = 1;
    for(i=0, j=0; nap1[i] != '\0'; i++)
        if(asci[nap1[i]] == 0)
        {
            if(j<i)
                nap1[j] = nap1[i];
            j++;
        }
    nap1[j] = '\0';

}

int main()
{
    char nap1[] = "Piekna majowa pogoda";
    char nap2[] = "Makaron jest smaczny";
    printf("%s\n", nap1);
    printf("%s\n", nap2);

    wytnij_zw(nap1, nap2);
    printf("Po zmianie : %s\n", nap1);
    printf("Po zmianie : %s\n", nap2);
    return 0;
}
