#include <stdio.h>
#include <stdlib.h>

float foo(int n, float *tab1, float *tab2)
{
    for(int i=0; i<n; i++)
    {
        if (abs(tab1[i]- tab2[i]) > 0.1)
            return 0;
    }
    return 1;
}

int main()
{
    float *tab_1 = malloc(5*sizeof(float));
    *(tab_1)=4;
    *(tab_1+1)=-2;
    *(tab_1+2)=8;
    *(tab_1+3)=7;
    *(tab_1+4)=7;

    float *tab_2 = malloc(5*sizeof(float));
    *(tab_2)=4;
    *(tab_2+1)=-2;
    *(tab_2+2)=8;
    *(tab_2+3)=7;
    *(tab_2+4)=7;

    printf("%.f\n", foo(5, tab_1, tab_2));

    float *tab3 = malloc(3*sizeof(float));
    *(tab3)=1;
    *(tab3+1)=2;
    *(tab3+2)=10;

    float *tab4 = malloc(3*sizeof(float));
    *(tab4)=1;
    *(tab4+1)=2;
    *(tab4+2)=-5;

    printf("%.f", foo(3, tab3, tab4));

    return 0;
}
