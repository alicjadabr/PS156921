#include <stdio.h>
#include <stdlib.h>

/* Zdefiniuj uni� super_int, w kt�rej b�dzie mo�na przechowywa�
zar�wno zmienne typu int, jak i unsigned int  */

union Unia
{
    int liczba;
    unsigned int liczba2;
};

int main()
{
    union Unia p1;
    p1.liczba = -22;
    p1.liczba2 = 22;
    printf("%d\n",p1.liczba);
    printf("%d\n",p1.liczba2);
    return 0;
}
