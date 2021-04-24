#include <stdio.h>
#include <stdlib.h>


int foo(int n, int tab1[], int tab2[])
{
    int liczba_indeksow = 0;
    for(int i=0; i<n; i++)
    {
        if(tab1[i]==tab2[i])
            liczba_indeksow += 1;
    }
    return liczba_indeksow;
}

int main()
{
    int tab1[] = {-4, -6, 0, 3, 1};
    int tab2[] = {-8, -6, 0, 1, 3};
    int tab3[] = {-13, 2, 30, 1, 3};
    int tab4[] = {-13, 3, 0, 1, 3};
    printf("%d\n", foo(5, tab1, tab2));
    printf("%d", foo(5, tab3, tab4));

    return 0;
}
