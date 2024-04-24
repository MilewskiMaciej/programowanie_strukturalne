#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double * alokujdouble()
{
    return malloc(sizeof(double));
}

double * alokujblok(unsigned int n)
{
    return malloc(n*sizeof(double));
}

double funkcja(double (*fun)(int x), int y)
{
    return fun(y);
}

double testowa(int x)
{
    return x*x;
}

bool funkcja_porownujaca(int (*fun1)(int x), int (*fun2)(int y), unsigned int n)
{
    int i=0;
    for(i=0;i<=n;i++)
    {
        if(!(fun1(i)==fun2(i)))
        {
            return false;
        }
    }
    return true;
}

bool funkcja_porownujaca2(int (*fun1)(int x), int (*fun2)(int y), unsigned int n)
{
    int i=0;
    for(i=0;i<=n;i++)
    {
        if(fun1(i)==3)
        {
            return false;
        }
    }
    return true;
}

int testowa1(int x)
{
    if(x<=2)
    {
        return x;
    }
    else
    {
        return 2;
    }
}

int testowa2(int x)
{
    return x;
}

void przepisz(const int *x, int *y)
{
    *y = *x;
}

bool liczby_doskonale(unsigned int x)
{
    int c=0;
    for(int i=1;i<=(x/2);i++)
    {
        if(x%i==0)
        {
            c+=i;
        }
    }
    return c==x;
}

/*
void wypisz(int min, int max)
{
    for(int i=min;i<=max;i++)
    {
        if(liczby_doskonale(i))
        {
            printf("%d\n", i);
        }
    }
}
*/

void nadajzera(unsigned int n, int * tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab[i]=0;
    }
}

void nadaj_i(unsigned int n, int * tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab[i]=i;
    }
}

void podwoj(unsigned int n, int * tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab[i]=2*tab[i];
    }
}

void dodaj_wartosc_bezwzgledna(unsigned int n, int * tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab[i]=abs(tab[i]);
    }
}

void wypisz(unsigned int n, const int * tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t", tab[i]);
    }
    printf("\n");
}

float srednia(unsigned int n, int * tab)
{
    int i;
    float s=0.0;
    for(i=0;i<n;i++)
    {
        s=s+tab[i];
    }
    s=s/n;
    return s;
}

float suma(unsigned int n, int * tab)
{
    int i;
    int s=0;
    for(i=0;i<n;i++)
    {
        s=s+tab[i];
    }
    return s;
}

float suma_kw(unsigned int n, const int * tab)
{
    int i;
    int s=0;
    for(i=0;i<n;i++)
    {
        s=s+(tab[i]*tab[i]);
    }
    return s;
}

float sredniageometryczna(unsigned int n, unsigned int * tab)
{
    int i;
    float s=1.0;
    for(i=0;i<n;i++)
    {
        s=s*tab[i];
    }
    s=pow(s,1./n);
    return s;
}

int main()
{
    int rozmiar = 4;
    int tab[rozmiar];
    tab[0]=1; tab[1]=2; tab[2]=5; tab[3]=0;
    wypisz(rozmiar, tab);
    printf("%f\n", srednia(rozmiar, tab));
    wypisz(rozmiar, tab);
    printf("%f\n", suma(rozmiar, tab));
    wypisz(rozmiar, tab);
    printf("%f\n", suma_kw(rozmiar, tab));
}
