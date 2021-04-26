#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int silnia(int n)
{
    int silnia = 1;
    for(int i=1; i<=n; i++)
        silnia *= i;

    return silnia;
}

float foo(int n, float x)
{
    if(n==0)
        return 1;
    if(n==1)
        return x+1;
    float sum = 1 + x;
    for(int i=2; i<=n; i++)
    {
        float licznik = pow(x, i);
        float mian = silnia(i);
        sum += (licznik/mian);
    }
    return sum;
}

int main()
{
    printf("%f", foo(2, 2));
    return 0;
}
