#include <stdio.h>
#include <stdlib.h>

/* Zdefiniuj typ wyliczeniowy czworokat, mogący przyjmować wartości odpowiadające nazwom różnych czworokątów.*/

enum Czworokat
{
    prostokat, kwadrat, romb, trapez, rownoleglobok, deltoid
};

int main()
{
    enum Czworokat last = deltoid;
    enum Czworokat first = prostokat;
    printf("%i\n", last);
    printf("%i\n", first);
    return 0;

}
