#include <stdio.h>
#include <stdlib.h>

float pierw(float n)
{
  float e=0.01, x_k, xk_p1;
    xk_p1 = n * 0.5;
    while(x_k - xk_p1 > e || xk_p1 - x_k > e)
    {
        x_k = xk_p1;
        xk_p1= 0.5*(n/x_k+x_k);
    }
    return xk_p1;
}

int main()
{
    float x;
    scanf("%f", &x);
    float res = pierw(x);
    printf("%f", res);
    return 0;
}
