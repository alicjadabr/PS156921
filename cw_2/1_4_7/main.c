#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d\n%d", &n, &m);
    int iloczyn=n;
    for(int i=n+1; i<=m; i++)
        {
            iloczyn = iloczyn * i;
        }
    printf("%d", iloczyn);
    return 0;
}
