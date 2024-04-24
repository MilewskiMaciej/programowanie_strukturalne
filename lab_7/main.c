#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int sito_eratostenesa(int n)
{
    int pom, i, j;
    bool tab[n];
    for(i=0;i<n;i++)
    {
        tab[i]=true;
    }
    for(i=2;i<n;i++)
    {
        if(tab[i])
        {
            pom = i;
            for(j=2*i;j<n;j=j+i)
            {
                tab[j]=false;
            }
        }
    }
}

void przepisz(unsigned int n, int * tab1, int * tab2)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab2[i]=tab1[i];
    }
}

void przepisz_odwrotnie(unsigned int n, int * tab1, int * tab2)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab2[i]=tab1[n-1-i];
    }
}

void suma(unsigned int n, int * tab1, int * tab2, int * tab3)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab3[i]=tab1[i]+tab2[i];
    }
}

void wiekszy(unsigned int n, int * tab1, int * tab2, int * tab3)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(tab1[i]>tab2[i])
        {
            tab3[i]=tab1[i];
        }
        else
        {
            tab3=tab2[i];
        }
    }
}

void swap(unsigned int n, int * tab1, int * tab2, int * tab3)
{
    int i, pom;
    for(i=0;i<n;i++)
    {
        pom=tab3[i];
        tab3[i]=tab2[i];
        tab2[i]=tab1[i];
        tab1[i]=pom;
    }
}

void wypisz(unsigned int n, int * tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t", tab[i]);
    }
}

void polacz(unsigned int n, double * tab1, double * tab2, double * tab3)
{
    int i;
    for(i=0;i<2*n;i++)
    {
        if(i<n)
        {
            tab3[i]=tab1[i];
        }
        else
        {
            tab3[i]=tab2[i-n];
        }
    }
}

void polacz_na_przemian(unsigned int n, double * tab1, double * tab2, double * tab3)
{
    int i;
    for(i=0;i<2*n;i++)
    {
        if(i%2==1)
        {
            tab3[i]=tab1[(i-1)/2];
        }
        else
        {
            tab3[i]=tab2[i/2];
        }
    }
}

void najwieksza_wartosc(unsigned int n, int * tab)
{
    int i = tab[0];
    int j;
    for(j=1;j<n;j++)
    {
        if(i<tab[j])
        {
            i=tab[j];
        }
    }
    return i;
}

void indeks_najwiekszej(unsigned int n, int * tab)
{
    int j=0;
    int i;
    for(i=1;i<n;i++)
    {
        if(tab[j]<=tab[i])
        {
            j=i;
        }
    }
    return j;
}

double iloczynskalarny(unsigned int n, double * tab1, double * tab2)
{
    double s=0.0;
    int i;
    for(i=0;i<n;i++)
    {
        s=s+tab1[i]*tab2[i];
    }
    return s;
}

void odwroc(unsigned int n, int * tab)
{
    int pom;
    int i;
    for(i=0;i<n/2;i++)
    {
        pom=tab[i];
        tab[i]=tab[n-i-1];
        tab[n-i-1]=pom;
    }
}

void przesun(unsigned int n, int * tab)
{
    int i;
    int pom = tab[0];
    for(i=1;i<n;i++)
    {
        tab[i-1]=tab[i];
    }
    tab[n-1]=pom;
    return tab;
}

int * alokuj(unsigned int n);
{
    return malloc(n*sizeof(int));
}

double * alokujdoubla(unsigned int n)
{
    return malloc(n*sizeof(double));
}

void zwolnij(int * tab)
{
    free(tab);
}

void zwolnij_doubla(double * tab)
{
    free(tab);
}

int main()
{
    int rozmiar = 4;
    int tab1[rozmiar];
    int tab2[rozmiar];
    tab1[0]=1; tab1[1]=3; tab1[2]=5; tab1[3]=7;
    tab2[0]=2; tab2[1]=4; tab2[2]=6; tab2[3]=8;
    wypisz(rozmiar, tab1);
    wypisz(rozmiar, tab2);
    przesun(rozmiar, tab1);
}
