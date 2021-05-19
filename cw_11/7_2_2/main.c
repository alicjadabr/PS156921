#include <stdio.h>
#include <stdlib.h>

/* Napisz funkcj�, kt�ra otrzymuje jako argumenty zmienn� troj1
typu struct trojkat zdefiniowanego w zadaniu 7.2.1 oraz zmienn�
troj2 wska�nik na zmienn� typu struct trojkat, i przepisuje zawarto��
 zmiennej troj1 do zmiennej wskazywanej przez troj2.  */

struct trojkat
{
    float a;
    float b;
    float c;
};

void przepisz(struct trojkat troj1, struct trojkat *troj2)
{
    *troj2 = troj1;
}

int main()
{
    struct trojkat t1 = {2.5, 3.6, 5.2};
    struct trojkat t2 = {1.9, 3.2, 4.4};
    printf("%f %f %f\n", t1.a, t1.b, t1.c);
    printf("%f %f %f\n", t2.a, t2.b, t2.c);
    przepisz(t1, &t2);
    printf("Po przepisaniu: \n");
    printf("%f %f %f\n", t1.a, t1.b, t1.c);
    printf("%f %f %f\n", t2.a, t2.b, t2.c);
    return 0;
}
