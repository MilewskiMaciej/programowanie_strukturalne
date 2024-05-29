#include <stdio.h>
#include <stdlib.h>

///cw 7_3_7

struct element
{
    int i;
    struct element *next;
};

struct element *utworz()
{
    return NULL;
};

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

struct element * usun(struct element * Lista, int a)
{
    struct element *wsk, *wsk2;
    if(Lista==NULL)
    {
        return Lista;
    }
    wsk = Lista;
    if(Lista->i==a)
    {
        Lista = Lista->next;
        free(wsk);
    }
    else
    {
        while((wsk->next!=NULL)&&(wsk->next->i!=a))
        {
            wsk=wsk->next;
        }
        if(wsk->next!=NULL)
        {
            wsk2=wsk->next;
            wsk->next=wsk2->next;
            free(wsk2);
        }
        return Lista;
    }
}

///cw 7_3_8
struct element *usunwybrany(struct element* Lista, struct element *elem)
{
    struct element *wsk, *wsk2;
    if(Lista==NULL)
    {
        return Lista;
    }
    wsk = Lista;
    if(Lista==elem)
    {
        Lista = Lista -> next;
        free(wsk);
        return Lista;
    }
    while((wsk->next!=NULL)&&(wsk->next!=elem))
        wsk=wsk->next;
    if(wsk->next!=NULL)
    {
        wsk2=wsk->next;
        wsk->next=wsk2->next;
        free(wsk2);
    }
    return Lista;
};

///Lista z Glovo
///cw 7_3_10

struct element *utworzglowa()
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->next=NULL;
    return wsk;
};

///cw 7_3_11
void wyczyscglowa(struct element *Lista)
{
    struct element *wsk=Lista->next;
    Lista = wsk;
    while(Lista!=NULL)
    {
        Lista=Lista->next;
        free(wsk);
        wsk=Lista;
    };
}

///cw 7_3_12
void dodajnapoczatekzglowa(struct element * Lista, int a)
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista->next;
    Lista-next=wsk;
}

///cw 7_3_20
///bezglowy
void zeruj(struct element * Lista)
{
    while(Lista!=NULL)
    {
        Lista->i=0;
        Lista=Lista->next;
    }
}

///z glowa
void zerujzglowa(struct element * Lista)
{
    while(Lista->next!=NULL)
    {
        Lista=Lista->next;
        Lista->i=0;
    }
}

///bezglowy
void bezwzgledna(struct element * Lista)
{
    while(Lista!=NULL)
    {
        Lista->i=abs(Lista->i);
        Lista=Lista->next;
    }
}

///cw 7_3_24
int suma(struct element * Lista)
{
    int sum=0;
    while(Lista!=NULL)
    {
        sum=sum+Lista->i;
        Lista=Lista->next;
    }
    return sum;
}

int sumazglowa(struct element * Lista)
{
    int sum=0;
    Lista=Lista->next;
    while(Lista!=NULL)
    {
        sum=sum+Lista->i;
        Lista=Lista->next;
    }
}

///cw 7_3_25
int minimumbezglowy(struct element * Lista)
{
    int min=Lista->i;
    while(Lista!=NULL)
    {
        if(Lista->i<min)
        {
            min=Lista->i;
        }
        Lista = Lista->next;
    }
    return min;
}

int minimumzglowa(struct element * Lista)
{
    int min=Lista->next->i;
    while(Lista!=NULL)
    {
        Lista=Lista->next;
        if(Lista->i<min)
        {
            min=Lista->i;
        }
    Lista=Lista->next;
    }
    return min;
}

///cw 7_3_26
struct element * minimumbezglowy_wskaznik(struct element * Lista)
{
    struct element * wsk;
    int min=Lista->i;
    while(Lista!=NULL)
    {
        if(Lista->i<min)
        {
            min=Lista->i;
            wsk=Lista;
        }
        Lista=Lista->next;
    }
    return wsk;
};

///cw 7_3_29
struct element * kopiuj(struct element * Lista)
{
    struct element * kopia = utworz();
    while(Lista != NULL)
    {
        kopia = dodajnakoniec(kopia, lista -> i);
        lista = lista -> next;
    }
    return kopia;
};

///cw 7_3_30
struct element * konkatenacja(struct element * lista, struct element* lista2)
{
    struct element * wsk=lista;
    while(wsk->next!=NULL)
    {
        wsk=wsk->next;
    }
    wsk->next=lista2;
};

///cw 7_3_31
struct element * odwroc(struct element * Lista)
{
    struct element * pom1, *pom2;

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
    lista = usun(lista, 4);
}
