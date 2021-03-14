#include <stdio.h>
#include <stdlib.h>

int an(int n)
{
    if(n < 2)
        return 1;
    else return an(n-1) + an(n-1);
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", an(x));
    return 0;
}

