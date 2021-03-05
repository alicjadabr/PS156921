#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k;
    scanf("%d\n%d\n%d", &n, &m, &k);
    for(int i = n; i < k; i += n)
    {
        if(n > m)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
