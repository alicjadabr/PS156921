#include <stdio.h>
#include <stdlib.h>

void f_b(int n, int tab1[], int tab2[])
{
    for(int i=0; i<n; i++)
    {
        tab2[i] = tab1[n-1-i];
        printf("%d ", tab1[i]);
        printf("%d ", tab2[i]);
    }

}

int main()
{
    int tab1[] = {-3, -1, 4, 6, 7};
    int tab2[] = {3, 4, 12, -2, 0};
    f_b(5, tab1, tab2);
    return 0;
}
