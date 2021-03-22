#include <stdio.h>
#include <stdlib.h>


void f(int n, int *w)
{
    *w = n;
}

int main()
{
    int n, w;
    scanf("%d\n%d", &n, &w);
    f(n, &w);
    printf("w= %d", n, w);
    return 0;
}
