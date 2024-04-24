#include <stdio.h>
#include <math.h>

int main()
{
    /*
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    printf("Zdefiniowales rownanie kwadratowe %d, %d, %d", a,b,c);
    int d = b*b-4*a*c;
    if(d>0)
    {
        float x1, x2;
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("Miejsca zerowe: %f, %f",x1,x2);
    }
    else if(d == 0)
    {
        float x1;
        x1 = (-b)/(2*a);
        printf("Równanie posiada jedno rozwi¹zanie: %f", x1);
    }
    else
    {
        printf("Brak rozwiazan.")
    }
    int a,b;
    printf("Podaj dwie liczby: ");
    scanf("%d%d", &a, &b);
    int w;
    printf("Jaka operacje arytmetyczna chcesz wykonac? Wcisnij: \n");
    printf("1 - dla dodawania \n");
    printf("2 - dla odejmowania \n");
    printf("3 - dla mnozenia \n");
    printf("4 - dla dzielenia \n");
    scanf("%d", &w);
    if(w==1)
    {
        printf("Wynik: %d", a+b);
    }
    else if(w==2)
    {
        printf("Wynik: %d", a-b);
    }
    else if(w==3)
    {
        printf("Wynik: %d", a*b);
    }
    else if(w==4)
    {
        printf("Wynik: %d", a/b);
    }
    else
    {
        printf("Podano zly klawisz");
    }
        int n,m;
    scanf("%d%d", &n, &m);
    int i;
    for(i=n;i<m; i=i+n)
    {
        printf("%d\n", i);
    }
        int n,m;
    scanf("%d%d", &n, &m);
    int i;
    for(i=1;i<=m;i++)
    {
        printf("%d\n",i*n);
    }
        int n,m,k;
    scanf("%d%d%d", &n, &m, &k);
    int i;
    for(i=m/n*n+n;i<=k;i=i+n)
    {
        printf("%d\n", i);
    }
        int n,i;
    int s=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    printf("%d!=%d", n,s);
        int n;
    scanf("%d",&n);
    int i;
    int s=0;
    for(i=1;i<=n;i++)
    {
        s=s+i*i;
    }
    printf("0^2+1^2+...+%d^2=%d", n,s);
    int n;
    scanf("%d", &n);
    int i;
    int s=1;
    for(i=2;i<=n;i=i+2)
    {
        s=s*i;
        if(i<n-1)
        {
            printf("%d*",i);
        }
        else
        {
            printf("%d",i);
        }
    }
    printf("=%d", s);
        int x, y, t, i, n;
    scanf("%d", &n);
    x = 1;
    y = 1;
    for(i=1;i<n;i++)
    {
       t=x;
       x=y;
       y=x+t;
    }
    printf("F_%d = %d", n, x);
        int m,n;
    scanf("%d%d",&n,&m);
    int min;
    if(m>n)
    {
        min=n;
    }
    else
    {
        min=m;
    }
    int i;
    int d;
    for(i=min;i>0;i=i-1)
    {
        if(m%i==0 && n%i==0)
        {
            d=i;
            break;
        }
    }
    printf("Wynik:%d", d);
    */
    int m,n;
    scanf("%d%d", &n,&m);
    int a=m;
    int b=n;
    while(m>0&&n>0)
    {
        if(m>n)
        {
            m=m%n;
        }
        else
        {
            n=n%m;
        }
    }
    if(n==0)
    {
        printf("NWD(%d,%d) = %d", a,b,m);
    }
    else
    {
        printf("NWD(%d,%d) = %d", a,b,n);
    }
}

