#include <stdio.h>
#include <stdlib.h>

int silnia(int x)
{
    int i;
    int s=1;
    for(i=1;i<=x;i++)
    {
        s=s*i;
    }
    return s;
}

int nww(int x)
{
    int i;
    int d=1;
    for(i=1;i<=x/2;i++)
    {
        if(x%i==0)
        {
            d=i;
        }
    }
    return d;
}

float dwa_do_n(int x)
{
    int i;
    float s=1;
    if(x>=0)
    {
        for(i=1;i<=x;i++)
        {
            s=s*2;
        }
        return s;
    }
    else
    {
        for(i=x;i<0;i++)
        {
            s=s/2;
        }
        return s;
    }
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

int podloga_z_pierwiastka(int n)
{
    int i;
    for(i=0;i*i<=n;i++)
    {

    }
    return i-1;
}

int main()
{
    int n;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);
    printf("Podloga z pierwiastka wynosi: %d",podloga_z_pierwiastka(n));
    return 0;
}

/*
int lab_3()
{
    int i;
    int n;
    scanf("%d", &n);
    for(i=0;i*i<=n;i++)
    {
    }
    printf("Podloga z pierwiastka z %d wynosi %d", n, i-1);

    int n;
    scanf("%d", &n);
    int i,j;
    int nwd;
    int s=0;
    for(j=2;j<n;j++)
    {
        for(i=1;i<=j;i++)
        {
            if(n%i==0&&j%i==0)
            {
                nwd=i;
            }
        }
        if(nwd==1)
        {
            s=s+j;
            printf("%d+",j);
        }
    }
    printf("=%d",s);

    int n,i,s=1;
    int x=0;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        s=s*i;
        x=x+s;
    }
    printf("%d", x+1);

    int n;
    int a,b,c;
    scanf("%d", &n);
    for(a=1;a<n;a++)
    {
        for(b=a;b<n;b++)
        {
            for(c=1;c<n;c++)
            {
                if(a*a+b*b==c*c)
                {
                    printf("(%d, %d, %d)",a,b,c);
                }
            }
        }
    }
}
*/
