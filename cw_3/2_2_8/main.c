#include <stdio.h>
#include <stdlib.h>

int pierw(int n)
{
    int res = 0;
    for(int i=0; i*i <=n ;i++)
    {
        res=i;
    }
    return res;
}

int main()
{
    int x;
    scanf("%d", &x);
    int res = pierw(x);
    printf("%d", res);
    return 0;
}
