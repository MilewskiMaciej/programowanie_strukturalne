#include <stdio.h>
#include <stdlib.h>

int sum_wartosc(int n)
{

}

void zlicz()
{
    static int liczba=0;
    liczba++;
    printf("Funkcja zostala wywolana %d razy\n", liczba);
}

void wypisz(unsigned int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(i*i+j*j==n)
            {
                printf("%d*%d+%d*%d = %d\n", i, i, j, j, n);
            }
        }
    }
}

int suma_podlog(int n)
{
    int i, s=0;
    for(i=0;i<=n;i++)
    {
        s=s+podloga_z_pierwiastka(i);
    }
    return s;
}

int euklides(int n, int m)
{
    int a,b;
    a=n;
    b=m;
    while(a*b!=0)
    {
        if(a>b)
        {
            a=a%b;
        }
        else
        {
            b=b%a;
        }
    }
    if(a==0)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int sum(int n)
{
    int i,s=0;
    for(i=2;i<n;i++)
    {
        if(euklides(n,i)==1)
        {
            s=s+i;
        }
    }
    return s;
}

int podloga_z_pierwiastka(int n)
{
    int i;
    for(i=0;i*i<=n;i++)
    {

    }
    return i-1;
}

int m_do_n(unsigned n, unsigned m)
{
    int w=1;
    int i;
    for(i=1;i<=m;i++)
    {
        w=w*n;
    }
    return w;
}

int main()
{
    int n;
    printf("Podaj liczbe: ");
    scanf("%d", &n);
}
