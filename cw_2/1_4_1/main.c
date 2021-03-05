#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, m;
    scanf("%d\n%d", &n, &m);
    for(int i = n; i < m; i = i + n )
    {
        printf("%d\n", i);
    }
    return 0;
}
