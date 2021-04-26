#include <stdio.h>
#include <stdlib.h>

void foo(int* tab, int n)
{
    for(int i=0;i<n-2;i++)
    {
        *(tab+i)+=4;
    }
}

int main()
{
    int tab[] = {1,6,5,2,9,8};
    int *wsk=tab-2;
    foo(wsk,5);
    int b = *(wsk+=4); //b=5
    int c = b+2; // b=5  , c=7
    int d = b^c; // b=5  , c=7  , d=2
    int e = (wsk+=-1)[2]; // b=5  , c=7  , d=2  , e=2
    e = (d -= 3) + (c += 3); // b=5  , c=10  , d=-1  , e=9
    c = d - (b+=4); // b=9  , c=-10  , d=-1  , e=9
    b = *wsk + e; // b=15  , c=-10  , d=-1  , e=9
    e = (++d)*(b--); // b=14  , c=-10  , d=0  , e=0
    return 0;
}
