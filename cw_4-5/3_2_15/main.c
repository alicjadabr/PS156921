#include <stdio.h>
#include <stdlib.h>

void foo(const int *x, int *y)
{
    *y = *x;
}

int main()
{
    const int x=-65;
    int y=12;
    printf("x = %d , y = %d\n", x, y);
    foo(&x, &y);
    printf("x = %d , y = %d\n", x, y);
    return 0;
}
