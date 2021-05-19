#include <stdio.h>
#include <stdlib.h>

/* Zdefiniuj strukturê student s³u¿¹c¹ do przechowywania danych osobowych studenta
(struktura powinna zawieraæ takie pola, jak: imie, nazwisko, adres, pesel,
kierunek i numer legitymacji). Napisz funkcjê, która otrzymuje jako argument
 wskaŸnik na strukturê student i wczytuje dane ze standardowego wejœcia do rekordu
wskazywanego przez argument funkcji. */

struct student
{
    char imie[20];
    char nazwisko[30];
    char adres[50];
    char pesel[11];
    char kierunek[30];
    char nr_leg[8];
};

void foo(struct student *arg)
{
    printf("Podaj imie: \n");
    fgets(arg->imie, 20, stdin);
    printf("Podaj nazwisko: \n");
    fgets(arg->nazwisko, 30, stdin);
    printf("Podaj adres: \n");
    fgets(arg->adres, 50, stdin);
    printf("Podaj nr pesel: \n");
    fgets(arg->pesel, 11, stdin);
    printf("Podaj kierunek studiow: \n");
    fgets(arg->kierunek, 30, stdin);
    printf("Podaj nr legitymacji: \n");
    fgets(arg->nr_leg, 8, stdin);
}

int main()
{
    struct student s1 = {};
    foo(&s1);
    printf("Imie: %s\nNazwisko:%s\nAdres:%s\nPESEL: %s\nKierunek studiow:%s\nNr legitymacji: %s\n",
    s1.imie, s1.nazwisko, s1.adres, s1.pesel, s1.kierunek, s1.nr_leg);
    return 0;
}
