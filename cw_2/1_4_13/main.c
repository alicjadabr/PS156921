#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sn=1, silnia=1;
    printf("Podaj n: \n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        silnia = silnia * i;
        sn += silnia;
    }
    printf("Suma ciagu wynosi %d: ", sn);
    return 0;
}
