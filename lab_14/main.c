#include <stdio.h>
#include <stdlib.h>

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

///cw 7_3_32
struct element * polacz_naprzemiennie(struct * lista, struct element * lista2)
{
    struct element * wsk1, *wsk2;
    if(lista1==NULL)
    {
        return NULL;
    }
    wsk1=wsk2=lista1;
    lista1=lista1->next;
    wsk2->next=lista2;
    wsk2=lista2;
    lista2=lista2->next;
    while(lista1!=NULL)
        wsk2->next=lista1;
    wsk2=lista1;
    lista1=lista1->next;
    wsk2->next=lista2;
    wsk2=lista2;
    lista2=lista2->next;
}
return wsk1;
};

///cw 7_3_31
struct element * odwroc(struct element * Lista)
{
    struct element * pom1, *pom2;
    if((Lista==NULL) || (Lista->next==NULL))
        return Lista;
    pom1=Lista->next;
    pom2=pom1->next;
    Lista->next=NULL;
    pom1->next=Lista;
    while(pom2!=NULL)
    {
        Lista=pom1;
        pom1=pom2;
        pom2=pom2->next;
        pom1->next=Lista;
    }
    return pom1;
};

///cw 7_2_1
struct trojkat
{
    double a,b,c;
};

double obwod(struct trojkat t)
{
    return t.a+t.b+t.c;
}

///cw 7_2_2
void przepisz(struct trojkat t1, struct trojkat *t2)
{
    *t2=t1;
}

///cw 7_2_3
struct punkt
{
    double x,y,z;
};

double minimum(struct punkt tab[], int n)
{
    int i,j;
    double pom;
    double min=sqrt(pow(tab[1].x-tab[0].x, 2)+pow(tab[1].y-tab[0].y,2)+pow(tab[1].z-tab[0].z, 2));
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            pom=sqrt(pow(tab[j].x-tab[i].x, 2)+pow(tab[j].y-tab[i].y,2)+pow(tab[j].z-tab[i].z, 2));
        }
        if(pom<min)
        {
            min=pom;
        }
    }
    return min;
}

int main()
{
    struct punkt pierwszy, drugi, trzeci;
    pierwszy.x = 4;
    pierwszy.y = 7;
    pierwszy.z = 1;
    drugi.x = 2;
    drugi.y = 2;
    drugi.z = 8;
    trzeci.x = 5;
    trzeci.y = 6;
    trzeci.z = 0;
    struct punkt tab[3]={pierwszy, drugi, trzeci};
    printf("%f", minimum(tab, 3));
}
