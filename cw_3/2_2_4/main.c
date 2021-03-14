#include <stdio.h>
#include <stdlib.h>

int p_dwojki(int n)
{
    int p = 1;
    for(int i=0; i<n; i++)
    {
        p *= 2;
    }
    return p;
}

int main()
{
    int x;
    scanf("%d", &x);
    int res = p_dwojki(x);
    printf("%d", res);
    return 0;
}
