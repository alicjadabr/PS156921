#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double foo (double a)
{
    if(a<5)
        return a*a*a;

    else
        return a+3;
}

double foo2 (double b)
{
    return b;
}

double f(double (*wsk)(double a), double (*wsk_2)(double b), double x)
{
    for(int i=1; i<=floor(x); i++)
    {
        if(wsk(i) != (wsk_2(i)*wsk_2(i)*wsk_2(i)))
        {
            return -1;
        }
    }
    if(x<1)
        return -1;
    else
        return 1;
}

int main()
{
    printf("%lf\n", f(foo, foo2, -4.0));
    printf("%lf\n", f(foo, foo2, 0.5));
    printf("%lf\n", f(foo, foo2, 4.2));
    printf("%lf\n", f(foo, foo2, 2));
    printf("%lf\n", f(foo, foo2, 5.2));
    printf("%lf\n", f(foo, foo2, 6.7));
    return 0;
}
