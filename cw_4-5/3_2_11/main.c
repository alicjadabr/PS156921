#include <stdio.h>
#include <stdlib.h>

int* memory(int n)
{
return malloc(n*sizeof(int));
}

int main()
{
    printf("%p", memory(5));
    return 0;
}
