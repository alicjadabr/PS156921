#include <stdio.h>
#include <stdlib.h>

int potega(int a, int m)
{
    int res = 0;
    for(int i=1; pow(i, m) <= a; i++)
    {
        res = i;
    }
    return res;
}

int sum(int n, int m)
{
    int sum = 0;
    for(int i=0; i <= n; i++)
    {
        sum += potega(i, m);
    }

    return sum;
}

int main()
{
    int  n, m;
    scanf("%d\n%d", &n, &m);
    int res = sum(n,m);
    printf("%d", res);
    printf("\n Dla n = 4 i m = 2 suma ciagu wynosi %d", sum(4, 2));
    printf("\n Dla n = 9 i m = 3 suma ciagu wynosi %d", sum(9, 3));
    return 0;
}
