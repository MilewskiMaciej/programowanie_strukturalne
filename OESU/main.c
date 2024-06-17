#include <stdio.h>
#include <stdlib.h>

/*
struct student
{
    char *imie, *nazwisko, *adres, *pesel, *kierunek;
    int numer_legit;
};

void przek(struct student *dane)
{
    printf("Imie: %s\n", dane->imie);
    printf("Nazwisko: %s\n", dane->nazwisko);
    printf("Adres: %s\n", dane->adres);
    printf("PESEL: %s\n", dane->pesel);
    printf("Kierunek: %s\n", dane->kierunek);
    printf("Numer legitymacji: %d", dane->numer_legit);
}

int main()
{
    struct student wsk;
    wsk.imie = "Bartek";
    wsk.nazwisko = "Stefanski";
    wsk.adres = "Kielczany";
    wsk.pesel = "10203040501";
    wsk.kierunek = "gora";
    wsk.numer_legit = 143241;
    przek(&wsk);
}

void wypisz(unsigned int n, unsigned int m, int tab[n][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t", tab[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int tab[5][3] = {{1, 3, 5}, {1, 3, 5}, {1, 3, 5}, {1, 3, 5}, {1, 3, 5}};
    wypisz(5,3, tab);
}
*/

struct element
{
    int i;
    struct element * next;
};

void utworz(struct element * lista)
{
    struct element lista = w;
    lista->i = 3;
    lista->next->i = 6;
    lista->next->next->i = 9;
    lista->next->next->next = NULL;
    struct element * wsk = lista;
    while(wsk!=NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
}

int main()
{
    struct element * lista;
    utworz(lista);
}
