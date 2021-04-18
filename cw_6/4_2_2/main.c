#include <stdio.h>
#include <stdlib.h>

float f_a(int n, int tab[])
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += tab[i];
    }
    return (float) sum/n;
}

int f_b(int n, int tab[])
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += tab[i];
    }
    return sum;
}
int f_c(int n, int tab[])
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += tab[i] * tab[i];
    }
    return sum;
}

int main()
{
    int tab[5] = {-4, -1, 3, 5, 8};
    printf("%.2f\n", f_a(5, tab));
    printf("%d\n", f_b(5, tab));
    printf("%d", f_c(5, tab));
    return 0;
}
