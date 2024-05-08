#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int SpaceOfInt(int x)
{
    int i;
    for(i=0; abs[x]>=pow(10,i);i++)
    {
        if(x==0 || x!=abs[x])
        {
            i++;
        }
    }
    return i;
}

void MatrixAddition(int m, int n, int A[m][n], int B[m][n], int result[m][n])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            result[i][j]=A[i][j]+B[i][j];
        }
    }
}

void MatrixMultiplication(int m, int n, int p, int A[m][n], int B[n][p], int result[m][p])
{
    int i, j, k, sum;
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            sum=0;
            for(k=0;k<n;k++)
            {
                sum+=A[i][k]*B[k][j];
            }
            result[i][j]=sum;
        }
    }
}

void PrintMatrix(int m, int n, int matrix[][n])
{
    int targets[n];
    for(int j=0;j<n;j++)
    {
        int target=SpaceOfInt(matrix[0][j]);
        for(int i=1;i<m;i++)
        {
            if(SpaceOfInt(matrix[i][j])>target)
            {
                target=SpaceOfInt(matrix[i][j]);
            }
        }
        targets[j]=target+1;
    }
    targets[0]++;

    printf("[");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int space = targets[j];
            if(j+i==0)
                space--;
            printf("%*d", space, matrix[i][j]);
        }
        if(i+1<m)
            printf("\n");
    }
    printf("]\n\n");
}

void wypisz(int m, int n, int tablica[m][n])
{
    printf("[");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

int main()
{
    int A[a1][a2] = {{-3, 9, 6}, {3, -5, -1}, {6, -3, 8}};
    int B[b1][b2] = {{3, 2, -2}, {-2, 3, 5}, {6, 1, 9}};
    int result[a1][b2] = {{0}};
    MatrixAddition(a1, a2, A, B, result);
    //PrintMatrix(a1, a2, A);
    //PrintMatrix(b1, b2, B);
    //PrintMatrix(a1, b2, result);
    wypisz(a1, a2, A);

}
