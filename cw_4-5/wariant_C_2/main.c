#include <stdio.h>
#include <stdlib.h>

/*Program nie wyswietla wyniku dla liczb z przedzialu, nie wiem dlaczego */

int sum(int n)
{
    if(n >= 0 || n <= 10000)
       return n%10 + sum(n/10);

    return -1;
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", sum(x));
    printf("%d", sum(34));
    return 0;
}

