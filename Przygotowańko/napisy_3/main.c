#include <stdio.h>
#include <stdlib.h>

int porownaj(char *nap1, char *nap2)
{
    int i1 = 0;
    int i2 = 0;
    while(nap1[i1] != 0)
    {
        i1++;
    }
    while(nap2[i2] != 0)
    {
        i2++;
    }
    if(i1 == i2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char nap1[] = "OESU";
    char nap2[] = "GOTO";
    printf("%d\n", porownaj(nap1, nap2));
}
