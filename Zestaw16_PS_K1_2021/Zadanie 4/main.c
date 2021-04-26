#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    int res;
    if(n==0)
        return 0;
    else if((foo(n-1)-2)>0)
        res = foo(n-1)-2;
    else
        res = foo(n-1) + n;

    return res;
}


int main()
{
    printf("%d\n", foo(3));
    printf("%d\n", foo(4));
    return 0;
}
