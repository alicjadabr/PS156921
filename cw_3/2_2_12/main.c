#include <stdio.h>
#include <stdlib.h>

float potega(float a, float n)
{
    float x=1;
    for(int i=1; i<=n; i++)
    {
        x *= a;
    }
    return x;
}

float sum(float n, float m)
{
    float x=0, sum=0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j >= potega(j,m); j++)
        {
            x = j;
        }
        sum += x;
    }

    return sum;
}

int main()
{
    float  m, n;
    scanf("%f\n%f", &m, &n);
    float res = sum(n,m);
    printf("%f", res);
    return 0;
}
