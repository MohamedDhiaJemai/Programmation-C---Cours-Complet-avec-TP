#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void Carree(int *c , int n ) ;
int main()
{
    int n;
    int c;
    saisie(&n);
    Carree(&c,n);
    printf("Le valeur carree de n est %d",c);
    return 0;
}

void saisie(int *n)
{
    printf("Donner un nombre \n");
    scanf("%d",n);
}

void Carree(int *c , int n)
{
    *c=n*n;
}
