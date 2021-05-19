#include <stdio.h>
#include <stdlib.h>

/*Zdefiniuj struktur� trojkat przechowuj�c� d�ugo�ci bok�w
tr�jk�ta. Napisz funkcj�, kt�ra otrzymuje jako argument zmienn� typu
struct trojkat, i zwraca jako warto�� obw�d tr�jk�ta przekazanego
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
