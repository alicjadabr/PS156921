#include <stdio.h>
#include <stdlib.h>

int main()
{
    //wpisz wartosci zmiennych po wykonaniu danej linijki kodu
    int a = 156921; //tu wpisz swoj numer indeksu
    int b=a%10;
    int c=b%6;
    int d= (b+=4)-(c*=2); // b=5  , c=2  , d=3
    c=(d^=2); // b= 5 , c=1  , d=1
    d=(b/=4)*(c-=3); // b=1  , c=-2  , d=-2
    return 0;
}
