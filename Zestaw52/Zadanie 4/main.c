#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n)
{
    int res;
    if(n==0 || n==1)
        return 1;
    else if(n%3 == 0)
        res = foo(n-1);
    else if(n%3 == 1)
        res = foo(n-1)+1;
    else if(n%3 == 2)
        return 5;

    return res;

}

int main()
{
    printf("%d\n", foo(1));
    printf("%d\n", foo(2));
    printf("%d\n", foo(3));
    printf("%d\n", foo(4));
    printf("%d\n", foo(5));
    printf("%d\n", foo(6));
    printf("%d\n", foo(7));
    printf("%d\n", foo(8));
    printf("%d\n", foo(9));
    return 0;
}
