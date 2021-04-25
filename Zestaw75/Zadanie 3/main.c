#include <stdio.h>
#include <stdlib.h>

/*3. Napisz funkcje, która otrzymuje trzy argumenty:
• dwa wskazniki na funkcje o jednym argumencie typu double zwracajace wartosc typu double,
• wartosc x typu double.
Funkcja ma zwrócic 1 jesli wartosc pierwszej funkcji jest szescianem wartosci drugiej funkcji odpowiednio
na liczbach od 1 do n = bxc (np. f1(1) = (f2(1))3, f1(2) = (f2(2))3, itd., bxc - oznacza najwieksza liczbe
ca³kowita nieprzekaczajaca x) oraz ma zwracac -1 w przeciwnym wypadku oraz gdy x < 1. Stwórz dwa
przypadki testowe dla funkcji, aby funkcja zwróci³a obie mozliwe wartosci. */

double foo (double a)
{
    if(a<5)
        return a*a*a;

    else
        return a+3;
}

double foo2 (double b)
{
    return b;
}

double f(double (*wsk)(double a), double (*wsk_2)(double b), double x)
{
    for(int i=1; i<=floor(x); i++)
    {
        if(wsk(i) != (wsk_2(i)*wsk_2(i)*wsk_2(i)))
            return -1;
    }
    if(x<1)
        return -1;
    else
        return 1;
}

int main()
{
    printf("%.lf\n", f(foo, foo2, 4.2));
    printf("%.lf\n", f(foo, foo2, 5.2));
    return 0;
}
