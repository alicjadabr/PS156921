#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj nr elementu ciagu Fibonacciego, ktory chcesz uzyskac: ");
    scanf("%d", &n);
    int akt = 1;
    int pop = 0;
    for(int i=0; i<n; i++)
    {
        akt += pop;
        pop = akt - pop;
    }
    printf("Element %d w ciagu Fibonacciego wynosi %d", n, akt);
    return 0;
}
