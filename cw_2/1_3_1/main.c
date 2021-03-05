#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    scanf("%d", &x);
    if(x>=0)
    {
        printf("%d", x);
    }
    else
    {
        printf("%d", -x);
    }
    return 0;
}
