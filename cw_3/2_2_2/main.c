#include <stdio.h>
#include <stdlib.h>

int silnia(int n)
{
    int sil = 1;
    for(int i=2; i<=n; i++)
    {
        sil *= i;
    }
    return sil;
}

int main()
{
    int x;
    scanf("%d", &x);
    int res = silnia(x);
    printf("%d", res);
    return 0;
}

