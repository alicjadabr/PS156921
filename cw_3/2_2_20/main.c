#include <stdio.h>
#include <stdlib.h>

int silnia(int n)
{
    if(n < 2)
        return 1;
    int res = n * silnia(n-1);
    return res;
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", silnia(x));
    return 0;
}



