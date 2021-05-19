#include <stdio.h>
#include <stdlib.h>

/*Zdefiniuj strukturê trojkat przechowuj¹c¹ d³ugoœci boków
trójk¹ta. Napisz funkcjê, która otrzymuje jako argument zmienn¹ typu
struct trojkat, i zwraca jako wartoœæ obwód trójk¹ta przekazanego
w argumencie */
struct trojkat
{
    float a;
    float b;
    float c;
};

float obwod(struct trojkat arg)
{
    return arg.a + arg.b + arg.c;
}

int main()
{
    struct trojkat zmienna = {2.5, 3.6, 5.2};
    printf("%f\n", obwod(zmienna));
    return 0;
}
