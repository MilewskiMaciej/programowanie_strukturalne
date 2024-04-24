#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

/*
void wytnij(char *napis, int n, int m)
{
    int i,j;
    for(j=0;napis[j]!=0;j++)
    {
        ///ustala dlugosc napisu
    }
    if(j+1>m)
    {
        for(i=0;i+m<j;i++)
        {
            napis[n+1]=napis[m+i+1];
        }
    }
    else if((n<j)&&(j+1<=m))
    {
        napis[n]=0;
    }
}

bool porownaj(char *napis1, char* napis2, int n)
{
    int i;
    for(i=0;(napis1[i]!=0)&&napis2[i]!=0;i++)
    {
        if(napis1[n+1]!=napis2[i])
        {
            return false;
        }
        if(napis2[i]==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

void wytnij2(char *napis1, char *napis2)
{
    int i, dl;
    for(dl=0;napis2[dl]!=0;dl++)
    {
        for(i=0;napis1[i]!=0;i++)
        {
            if(porownaj(napis1,napis2,i))
            {
                wytnij(napis1, i, i+dl-1);
                return;
            }
        }
    }
}

void wytnij_wszystkie_znaki(char * napis1, char * napis2)
{
    int i, j;
    int znaki[256];
    for(i=0;napis2[i]!=0;i++)
    {
        znaki[napis2[i]]=1;
    }
    for(i=0,j=0;napis1[i]!=0;i++)
    {
        if(znaki[napis1[i]]==0)
        {
            napis1[j]=napis1[i];
            j++;
        }
        napis1[j]=0;
    }
}


void wytnijtesameznaki(char *napis1, char *napis2)
{
    int i,j;
    for(i=0,j=0;napis1[i]!=0;i++)
    {
        if(napis1[i]!=napis2[i])
        {
            napis1[j]=napis1[i];
            j++;
        }
    }
    napis1[j]=0;
}


char * sklejnapisy(char * napis1, char * napis2, char * napis3)
{
    char* wynik=malloc((strlen(napis1)+strlen(napis2)+strlen(napis3)+1)*sizeof(char));
    strcpy(wynik, napis1);
    strcat(wynik, napis2);
    strcat(wynik, napis3);
    return wynik;
}


void maleduze(char* napis)
{
    int i;
    for(i=0;napis[i]!=0;i++)
    {
        napis[i]=towupper(napis[i]);
    }
}



char * godzina(int godz, int min, int sek)
{
    char * wynik=malloc(9*sizeof(char));
    sprintf(wynik, "%02d:%02d:%02d", godz, min, sek);
    return wynik;
}
*/

void usunSpacje(char * napis)
{
    int i,j;
    for(i=0, j=0; napis[i]; i++)
    {
        if (napis[i]!= ' ')
    }
}


int main()
{
    zliczacza("matematyka");
}
