#include <stdio.h>
#include <stdlib.h>

int f(int *x, int *y)
{
    if(*x <= *y)
        return *x;
    return *y;
}

int main()
{
    int x=5, y=-6;
    printf("Mniejsza liczba to %d", f(&x, &y));
    return 0;
}
