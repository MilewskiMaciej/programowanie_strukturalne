#include <stdio.h>
#include <math.h>

int main()
{
    /*
    printf("Hello World \n");
    printf("Bardzo \ndlugi \nnapis \n");
    printf("\\\\\\\\\\ \n");
    printf("///// \n");
    printf("$$$$ \n");
    printf("%%%%%%%%%%%%%% \n");
    printf("&& \n");
    int c, d;
    float x;
    printf("Wczytaj liczbê rzeczywista: ");
    scanf("%f", &x);
    printf("Podana liczba to %f", x);
    scanf("%d%d",&c, &d);
    printf("Nasza liczba wynosi %d, a druga liczba to %d \n", c, d);
    float e;
    printf("Podaj liczbe rzeczywista: ");
    scanf("%f", &e);
    printf("%e", e);
    int x,y,z;
    scanf("%d%d%d", &x, &y, &z);
    printf("%d\n%d\n%d", x,y,z);
    int w;
    scanf("%d", &w);
    printf("%d", w+1);
    int x,y,z;
    scanf("%d%d%d", &x, &y, &z);
    printf("%f", (x+y+z)/3.);
    double m;
    scanf("%lf", &m);
    printf("%f", pow(m, 0.5));
    double m;
    scanf("%lf", &m);
    printf("%f", fabs(m));
    int x;
    scanf("%d", &x);
    if(x<0)
    {
        printf("|%d| = %d", x, -x);
    }
    else
    {
        printf("|%d| = %d", x, x);
    }
    int x,y;
    scanf("%d%d", &x, &y);
    if(x<y)
    {
        printf("max(%d,%d) = %d",x,y,y);
    }
    else if(x>y)
    {
        printf("max(%d, %d) = %d", x,y,x);
    }
    else
    {
        printf("max(%d,%d) = %d", x,y,x);
    }
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c)
    {
        printf("max(%d,%d,%d) = %d", a,b,c,a);
    }
    else if(b>c)
    {
        printf("max(%d,%d,%d) = %d", a,b,c,b);
    }
    else
    {
        printf("max(%d,%d,%d) = %d", a,b,c,c);
    }
    */
    int w;
    int a,b,c, h, l, P;
    printf("Wpisz 1 jesli chcesz liczyc pole trojkata z jego boku i wysokosci, podaj 2 jesli chcesz liczyc pole trojkata z dlugosci trzech bokow");
    scanf("%d", &w);
    if(w=1)
    {
        scanf("%d", &a);
        scanf("%d", &h);
        if(a<0 || h<0)
            printf("Podane dlugosci nie tworza trojkata");
    }
    else
    {
        if(a<0 || b<0 || c<0 || a+b<c || b+c<a || a+c<b)
        {
            printf("Podane d³ugosci bokow nie tworza trojkata");
        }
    }
}
