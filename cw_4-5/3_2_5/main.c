#include <stdio.h>
#include <stdlib.h>

int sum(const int *x, const int *y)
{
    return *x + *y;
}

int main()
{
    int x=5, y=-6;
    printf("Suma = %d", sum(&x, &y));
    return 0;
}
