#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, x;
    printf("Podaj operacje ktora chcesz wykonac:\n1.dodawanie\n2.odejmowanie\n3.mnozenie\n4.dzielenie\n");
    scanf("%f", &x);
    printf("Podaj dwie kolejne liczby: ");
    scanf("%f\n%f", &a, &b);
    if(x == 1)
    {
        printf("%.2f", a + b);
    }
    else if(x == 2)
    {
        printf("%.2f", a - b);
    }
    else if(x == 3)
    {
        printf("%.2f", a * b);
    }
    else if(x == 4)
    {
        if(b == 0)
        {
            printf("Nie mozna dzielic przez zero!");
        }
        else
        {
            printf("%.4f", a / b);
        }

    }
    else
    {
        printf("Niewlasciwy numer operacji");
    }
    return 0;
}
