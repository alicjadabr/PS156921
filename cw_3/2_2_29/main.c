#include <stdio.h>
#include <stdlib.h>

int nwd(int x, int y)
{
    if(y != 0) return nwd(y, x%y);
    return x;
}

int main()
{
    int x, y;
    scanf("%d\n%d", &x, &y);
    int res = nwd(x, y);
    printf("%d", res);
    return 0;
}
