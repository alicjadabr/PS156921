#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n)
{
    int sum=0;
    if(n==1)
        return 0;
    else if(n%2==0)
        for(int i=n-1; i>0; i-=2)
            sum += i;
    else if(n%2!=0)
        for(int i=n-2; i>0; i-=2)
            sum += i;

    return sum;
}

int main()
{
    printf("%d\n", foo(1));
    printf("%d\n", foo(5));
    printf("%d", foo(12));
    return 0;
}
