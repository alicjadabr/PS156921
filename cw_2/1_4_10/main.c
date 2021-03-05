#include <stdio.h>
int main ()
{
    int x, res;
    printf("Podaj liczbe: ");
    scanf("%d", &x);
    for(int i=1; i<x; i++)
    {
        if (i*i <= x)
        {
            res=i;
        }
    }
    printf("Wynik to %d", res);
}

