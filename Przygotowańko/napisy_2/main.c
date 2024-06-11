#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *nap)
{
    int i = 0;
    while(nap[i] != 0)
    {
        i++;
    }
    return i;
}


int main()
{
    char nap[] = "OESU";
    printf("Podany napis to: %s\n", nap);
    printf("Dlugosc napisu wynosi: %d\n", dlugosc(nap));
}
