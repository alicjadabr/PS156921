#include <stdio.h>
#include <stdlib.h>


float an(unsigned int n)
{
    if(n<2)
        return 1;
    float res = an(n-2) + (1/an(n-1));
    return res;
}

int main()
{
    printf("%.3f\n", an(0));
    printf("%.3f\n", an(1));
    printf("%.3f\n", an(2));
    printf("%.3f\n", an(3));
    printf("%.3f\n", an(4));
    printf("%.3f\n", an(5));
    return 0;
}
