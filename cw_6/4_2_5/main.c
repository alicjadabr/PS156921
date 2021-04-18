#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int foo(int n)
{
    int temp;
    bool tab[n];

    for(int i=0; i<n; i++)
        tab[i] = true;
    for(int i=2; i<n; i++)
    {
        if(tab[i])
        {
            temp = i;
            for(int j=i*2; j<n; j+=i)
                tab[j] = false;
        }
    }
    return temp;
}

int main()
{
    printf("%d\n", foo(3));
    printf("%d\n", foo(6));
    printf("%d\n", foo(25));
    printf("%d\n", foo(50));
    printf("%d\n", foo(77));
    return 0;
}
