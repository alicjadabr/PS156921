#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, b1, c1, a2, b2, c2;
    scanf("%d\n%d%d\n%d%d\n%d", &a1, &b1, &c1, &a2, &b2, &c2);
    int w = a1 * b2 - b1 * a2;
    int wx = c1 * b2 - b1 * c2;
    int wy = a1 * c2 - c1 * a2;

    if(w != 0)
    {
        printf("Rozwiazaniem ukladu jest x = %d oraz y = %d.\n", wx / w, wy / w);
    }
    else if(w == 0 && wx == 0 && wy == 0 )
    {
        printf("Uklad nieoznaczony - nieskonczenie wiele rozwiazan");
    }
    else
    {
        printf("Uklad sprzeczny - brak rozwiazan");
    }

    return 0;
}
