#include <stdio.h>
#include <stdlib.h>

int foo (int a)
{
    return a+2;
}

int foo2 (int b)
{
    return b/2;
}

int f(int (*wsk)(int x), int (*wsk_2)(int y), unsigned int n)
{
    for(int i=0; i<=n; i++)
    {
        if(wsk(i)!=wsk_2(i))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    unsigned int n = 4;
    printf("%d\n", f(foo, foo2, n));
    printf("%d\n", f(foo, foo2, 6));
    printf("%d\n", f(foo, foo2, 5));
    printf("%d\n", f(foo, foo2, 5));
    return 0;
}
