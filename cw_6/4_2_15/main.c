#include <stdio.h>
#include <stdlib.h>

void zwolnij_miejsce(int *tab)
{
    free(tab);
}

int main()
{
    int *tab;
    tab = malloc(sizeof(int) * 10);

    for(int i=0; i<10; i++)
        tab[i] = 5;
    zwolnij_miejsce(tab);
    return 0;
}
