#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cstdio>

struct punkt
{
    float x, y, z;
};

float odleglosc(struct punkt p1, struct punkt p2)
{
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p2.y-p2.y)*(p1.y-p2.y)+(p1.z-p2.z)*(p1.z-p2.z));
}

float foo(int n, struct punkt tab[])
{
    float temp = odleglosc(tab[0], tab[1]);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i!=j)
            {
                if(temp>odleglosc(tab[i], tab[j]))
                    temp = odleglosc(tab[i], tab[j]);
            }



        }
    }
    return temp;
}

int main()
{
    struct punkt p1 = {2, 3.5, 4.5};
    struct punkt p2 = {1, 6.5, 7.5};
    struct punkt p3 = {-3, 4.5, 8};
    struct punkt tablica[3] = {p1, p2, p3};
    printf("%f\n", foo(3, tablica));
    return 0;
}
