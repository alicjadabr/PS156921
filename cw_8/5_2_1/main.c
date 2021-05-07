#include <stdio.h>
#include <stdlib.h>

void wyczysc(char *napis)
{
    *napis = '\0';
}

void wyczysc2(char *napis)
{
    napis[0] = '\0';
}


void wyczysc3(wchar_t *napis)
{
    *napis = '\0';
}


int main()
{
    char nap[] = "skakanka";
    printf("%s.\n", nap);
    wyczysc(nap);
    printf("%s.\n", nap);

    wchar_t nap2[] = L"apokalipsa";
    wprintf(L"%s.\n", nap2);
    wyczysc3(nap2);
    wprintf(L"%s.\n", nap2);
    return 0;
}
