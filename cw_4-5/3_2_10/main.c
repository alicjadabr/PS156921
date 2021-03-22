#include <stdio.h>
#include <stdlib.h>

void* *pamiec_doub()
{
    return malloc(sizeof(double));
}

int main()
{
    printf("%p", pamiec_doub());
    return 0;
}
