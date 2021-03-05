#include <stdio.h>
#include <stdlib.h>

int main()
{
    int figura;
    printf("Wybierz figure: \n1.kwadrat \n2.prostokat \n3.trojkat\n");
    scanf("%d", &figura);
    if(figura == 1)
    {
        float a=0;
        printf("Podaj a: ");
        scanf("%f", &a);
        printf("Pole kwadratu wynosi: %f", a*a);
    }
    else if(figura == 2)
    {
        float a, b;
        printf("Podaj a i b: ");
        scanf("%f\n%f", &a, &b);
        printf("Pole prostokata wynosi: %f", a*b);
    }
    else if(figura == 3)
    {
        float a, h;
        printf("Podaj a i h: ");
        scanf("%f\n%f", &a, &h);
        printf("Pole trojkata wynosi: %f", a*h/2);
    }

    return 0;
}
