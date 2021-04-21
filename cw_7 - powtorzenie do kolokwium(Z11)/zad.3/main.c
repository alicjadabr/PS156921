#include <stdio.h>
#include <stdlib.h>

float * memory()
{
    float *tab= malloc(2*sizeof(float));
    *tab = 2.8;
    *(tab+1) = 3.2;
    return tab+1;
}

int main()
{
    printf("%p", memory());
    return 0;
}

