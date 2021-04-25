#include <stdio.h>
#include <stdlib.h>

/*Napisz funkcje, której parametrami sa trzy dodatnie liczby ca³kowite n, m i k. Funkcja ma zwrócic 2
jesli m jest podzielne jednoczesnie przez n i k, 1 jesli jest podzielne tylko przez jedna z liczb n lub k
oraz zwraca 0 w przeciwnym wypadku. Stwórz przypadek testowy dla funkcji. */

int foo(int n, int m, int k)
{
    if(m%n==0 && m%k==0)
        return 2;
    else if(m%n==0 || m%k==0)
        return 1;
    else
        return 0;

}

int main()
{
    printf("Przypadek testowy dla funkcji: \n");
    printf("%d\n", foo(3, 15, 5));

    printf("Pozostale przypadki: \n");
    printf("%d\n", foo(3, 15, 7));
    printf("%d\n", foo(3, 17, 7));
    return 0;
}
