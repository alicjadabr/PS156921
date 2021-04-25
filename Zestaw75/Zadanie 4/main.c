#include <stdio.h>
#include <stdlib.h>
/* 4. Napisz funkcje rekurencyjna, która dla otrzymanej w argumencie nieujemnej liczby ca³kowitej n zwraca
wartosc elementu o indeksie n ciagu zdefiniowanego w nastepujacy sposób */

int foo(int n)
{
    int res;
    if(n==0)
        return 1;
    else if(n==1)
        return 2;
    else if(n%2==0)
        res = foo(n-2) + n;
    else
        res = foo(n-2) * n;
    return res;
}

int main()
{
    printf("2 przypadki testowe dla funkcji: \n");
    printf("%d\n", foo(2));
    printf("%d\n", foo(4));

    printf("Pozostale przypadki: \n");
    printf("%d\n", foo(1));
    printf("%d\n", foo(3));
    printf("%d\n", foo(5));
    return 0;
}
