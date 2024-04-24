#include <stdio.h>
#include <stdlib.h>

unsigned int silnia(unsigned int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return silnia(n-1)*n;
    }
}

int rek(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return 2*rek(n-1)+5;
    }
}

int fib(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

int sum(int n)
{
    int k,s=0;
    if(n<=1)
    {
        return 1;
    }
    else
    {
        for(k=0;k<n;k++)
        {
            s=s+sum(k);
        }
    }
    return s;
}

int sum_il(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        if(n%2==0)
        {
            return sum_il(n-1)+n;
        }
        else
        {
            return sum_il(n-1)*n;
        }
    }
}

int rek_dwa(int n, int m)
{
    if(m==0)
    {
        return n;
    }
    else if(n==0)
    {
        return m;
    }
    else
    {
        return rek_dwa(n-1,m)+rek_dwa(n,m-1)+rek_dwa(n-1,m-1);
    }
}

int * wskazniki(int * a, int * b)
{
    if(*a<*b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void wskazniki_converter(int *a, int *b)
{
    if(*a>*b)
    {
        int x;
        x=*a;
        *a=*b;
        *b=x;
    }
}

int stale(const int * a, const int * b)
{
    return *a + *b;
}

void trzy_dwa_szesc(int n, int * w)
{
    *w = n;
}

int * alokujcalkowita()
{
    return malloc(sizeof(int));
}

double * alok_double()
{
    return malloc(sizeof(double));
}

int main()
{
    double *a=alok_double();
    printf("Adres to: %p\n", a);
    printf("Wartosc zmiennej typu double pod tym adresem to: %d\n", *a);
    *a=15;
    printf("Adres to: %p\n", a);
    printf("Wartosc zmiennej typu double pod tym adresem to: %d\n", *a);
}
