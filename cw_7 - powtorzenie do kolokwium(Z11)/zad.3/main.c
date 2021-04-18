#include <stdio.h>
#include <stdlib.h>

float * memory()
{
    float *z1 = malloc(sizeof(float));
    float *z2 = malloc(sizeof(float));
    *z1 = 2.8;
    *z2 = 3.2;
    return z2;
}

int main()
{
    printf("%p", memory());
    return 0;
}

