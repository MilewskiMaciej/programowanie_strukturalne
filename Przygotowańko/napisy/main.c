#include <stdio.h>
#include <stdlib.h>

///cw 5_2_1
int wyczysc(char *nap)
{
    nap[0]=0;
}

int main()
{
    char nap[] = "OESU";
    printf("Podany napis to: %s\n", nap);
    printf("Napis po wyczyszczeniu: %s\n", wyczysc(nap));
}
