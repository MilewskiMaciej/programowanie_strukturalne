#include <stdio.h>
#include <stdlib.h>

int **alokuj(unsigned int n, unsigned int m)
{
    int **t=malloc(n*sizeof(int*));
    int i;
    for(i=0;i<n;i++)
    {
        t[i]=malloc(m*sizeof(int));
    }
    return t;
}

int(* alokuj2(unsigned int n, unsigned int m))[]
{
    return malloc(n*sizeof(int[m]));
}

void wypisz(int **t, unsigned int n, unsigned int m)
{
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
}

void wypisz2(unsigned int n, unsigned int m, int t[][m])
{
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
}

void wczytaj(int **t, unsigned int n, unsigned int m)
{
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d\t", &t[i][j]);
        }
    }
}

void wczytaj2(unsigned int n, unsigned int m, int t[][m])
{
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d\t", &t[i][j]);
        }
    }
}

int **alokujtrojkatna(unsigned int n, unsigned int m)
{
    int **t=malloc(n*sizeof(int*));
    int i;
    for(i=0;i<n;i++)
    {
        t[i]=malloc((i+1)*sizeof(int));
    }
    return t;
}

void zeruj2(int** t, unsigned int n, unsigned int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            t[i][j]=0;
        }
    }
}

void zeruj3(unsigned int n, unsigned int m, int t[][m])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            t[i][j]=0;
        }
    }
}

int sumuj2(int** t, unsigned int n, unsigned int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
}

int indeks_wiersza(int **t, unsigned int n, unsigned int m)
{
    int i,j;
    int S, max, indeks;
    for(i=0;i<n;i++)
    {
        S=0;
        for(j=0;j<m;j++)
        {
            S=S+t[i][j];
        }
        if(i==0)
        {
            max=S;
            indeks = 0;
        }
        if(max<S)
        {
            S=max;
            indeks = i;
        }
    }
    return indeks;
}

int main()
{
    int **t=alokuj(3,3);
    wczytaj(t, 3, 3);
    wypisz(t,3,3);
    int t2[3][3];
    wczytaj2(3,3,t2);
    wypisz2{3,3,t2};
    int t3[4][4]={{20, 2, 5, 8},{2,8,31,4},{5,6,7,8},{5,6,7,8}};
    wypisz2(4,4,t3);
}
