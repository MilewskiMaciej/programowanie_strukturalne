#include <stdio.h>
#include <stdlib.h>


//cw 6_2_19
void przepisz(int **t1, int **t2, unsigned int n, unsigned int m)
{
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            t2[i][j]=t1[i][j];
        }
    }
}

//cw 6_2_18
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

//cw 6_2_1
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

//cw 6_2_20
void zamien(int **t1, int **t2, unsigned int n, unsigned int m)
{
    int i, j, pom;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            pom=t2[i][j];
            t2[i][j]=t1[i][j];
            t1[i][j]=pom;
        }
    }
}

void odwroc_wiersze2(unsigned int n, unsigned int m, int t[][m])
{
    int i, j, pom;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m/2;j++)
        {
            pom=t[i][j];
            t[i][j]=t[i][m-1-j];
            t[i][m-1-j]=pom;
        }
    }
}

void wypisz2(unsigned int n, unsigned int m, int t[][m])
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
    printf("\n");
}

void wiersze_w_dol(int **t, unsigned int n, unsigned int m)
{
    int i, j, pom;
    for(j=0;j<m;j++)
    {
        pom=t[n-1][j];
        for(i=n-1;i>0;i--)
        {
            t[i][j]=t[i-1][j];
        }
        t[0][j]=pom;
    }
}

int main()
{
    int t[3][7]={{20,2,5,7,9,-11,-81}, {2,8,31,4,45,7,8}, {-33,-10,5,6,7,8,908}};
    wypisz2(3,7,t);
    odwroc_wiersze2(3,7,t);
    wypisz2(3,7,t);
}
