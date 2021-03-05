#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int suma=0;
    scanf("%d", &n);
    for(int i = 0; i <= n; i ++)
    {
           suma += i * i;
    }
    printf("%d", suma);
    return 0;
}

