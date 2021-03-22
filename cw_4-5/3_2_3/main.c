#include <stdio.h>
#include <stdlib.h>

void f(int *x, int *y)
{
   int pom = *x;
   *x = *y;
   *y = pom;
}

int main()
{
    int x, y;
    scanf("%d\n%d", &x, &y);
    printf("x = %d , y = %d\n", x, y);
    f(&x, &y);
    printf("x = %d , y = %d", x, y);
    return 0;
}
