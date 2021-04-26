#include <stdio.h>
#include <stdlib.h>

int foo_x (int x)
{
    if(x<12)
        return x;

    else
        return x+3;
}

int foo(int (*wsk)(int x), int y)
{
    int res = wsk(y)%5;

    return res;
}

int main()
{
    printf("%d\n", foo(foo_x, 8));
    printf("%d\n", foo(foo_x, 14));
    return 0;
}
