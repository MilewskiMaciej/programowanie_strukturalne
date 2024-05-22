#include <stdio.h>
#include <stdlib.h>

///cw 7_3_1
struct element
{
    int i;
    struct element * next;
};

struct element *utworz()
{
    return NULL;
}

///cw 7_3_2
void wyczysc(struct element *Lista)
{
    struct element *wsk=Lista;
    while(Lista!=NULL)
    {
        Lista = Lista->next;
        free(wsk);
        wsk = Lista;
    }
}

///cw 7_3_3
struct element * dodajnapoczatek(struct element * Lista, int a)
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista;
    return wsk;
}

///cw 7_3_4
struct element *dodajnakoniec(struct element * Lista, int a)
{
    struct element *wsk;
    if(Lista == NULL)
    {
        Lista = wsk == malloc(sizeof(struct element));
    }
    else
    {
        wsk = Lista;
        while(wsk->next!=NULL)
        {
            wsk = wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
    return Lista;
}

void wypisz(struct element * Lista)
{
    while(Lista!=NULL)
    {
        printf("%d\n", Lista->i);
        Lista=Lista->next;
    }
    printf("\n");
}

///cw 7_3_5
struct element * dodajodpowiednio(struct element * Lista, struct element * elem, int a)
{
    struct element * wsk=malloc(sizeof(struct element));
    wsk->i=a;
    if(elem==NULL)
    {
        wsk->next=Lista;
        Lista=wsk;
    }
    else
    {
        wsk->next=elem->next;
        elem->next=wsk;
    }
    return Lista;
};

///cw 7_3_6
struct element * znajdz(struct element * Lista, int a)
{
    while((Lista!=NULL)&&(Lista->i!=a))
    {
        Lista = Lista->next;
    }
    return Lista;
};

///cw 7_3_6 (znajduje ostatni)
struct element * znajdzostatni(struct element * Lista, int a)
{
    struct element * wsk = NULL;
    while(Lista!=NULL)
    {
        printf("%p\n", Lista);
        if(Lista->i==a)
        {
            wsk = Lista;
        }
        Lista=Lista->next;
    }
};

int main()
{
    struct element * lista=utworz();
    lista = dodajnakoniec(lista, 4);
    wypisz(lista);
    lista = dodajnakoniec(lista, 15);
    wypisz(lista);
    lista = dodajnakoniec(lista, 3);
    wypisz(lista);
    lista = dodajnakoniec(lista, -7);
    wypisz(lista);
    lista = dodajnakoniec(lista, 9);
    wypisz(lista);
    lista = dodajnakoniec(lista, -2);
    wypisz(lista);
    lista = dodajnapoczatek(lista, 6);
    wypisz(lista);
}
