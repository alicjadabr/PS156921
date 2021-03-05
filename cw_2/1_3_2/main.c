#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d\n%d", &x, &y);
    if(x <= y)
    {
        printf("%d", y);
    }
    else
    {
        printf("%d", x);
    }
    return 0;
}
