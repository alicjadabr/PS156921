#include <stdio.h>
#include <stdlib.h>

void f_wywolan()
{
    static int wywolania = 0;
    wywolania++;
    printf("%d", wywolania);
}

int main()
{
    f_wywolan();
    printf("\n");
    f_wywolan();
    printf("\n");
    f_wywolan();
    printf("\n");
    f_wywolan();

    return 0;
}
