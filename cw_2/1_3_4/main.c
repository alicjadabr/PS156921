#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y;
    scanf("%d\n%d", &x, &y);
    if(abs(x)>abs(y))
    {
        printf("%d", x);
    }
    else if(abs(x)<abs(y))
    {
        printf("%d", y);
    }
    else
    {
        printf("Wartosci bezwgledne liczb sa sobie rowne");
    }

    return 0;
}
