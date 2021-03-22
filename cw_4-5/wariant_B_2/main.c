#include <stdio.h>
#include <stdlib.h>

int an(unsigned int n)
{
    if(n == 0 || n == 1)
        return 3;
    else if(n%2 == 0)
       return n + an(n-2);
    else
        return 2 * an(n-1) - 2*n;
}
int main()
{
    printf("%d\n", an(0));
    printf("%d\n", an(1));
    printf("%d\n", an(2));
    printf("%d\n", an(3));
    printf("%d\n", an(5));
    printf("%d\n", an(6));
    return 0;
}
