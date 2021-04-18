#include <stdio.h>
#include <stdlib.h>

double foo(unsigned int n, double tab[], double tab2[])
{
    double iloczyn_skalarny = 0;
    for(int i=0; i<n; i++)
    {
        iloczyn_skalarny += (tab[i] * tab2[i]);
    }
    return iloczyn_skalarny;
}

int main()
{
    double tab1[] = {1, 3, 1, -5};
    double tab2[] = {4, 2, -2, 4};
    double res = foo(4, tab1, tab2);
    printf("%.2lf", res);
    return 0;
}
