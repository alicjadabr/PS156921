#include <stdio.h>
#include <stdlib.h>

/*2. Napisz funkcje, kt�rej parametrami sa trzy dodatnie liczby ca�kowite n, m i k. Funkcja ma zwr�cic
sume liczb wielokrotnosci n wiekszych niz m i mniejszych niz k. Stw�rz dwa przypadki testowe dla
funkcji.*/

int foo(unsigned int n, unsigned int m, unsigned int k)
{
    int sum = 0;
    for(int i=n; i<k; i+=n)
    {
        if(i<k)
            sum += i;
    }
    return sum;
}

int main()
{
    printf("%d\n", foo(3, 2, 14));
    printf("%d", foo(5, 4, 37));
    return 0;
}


