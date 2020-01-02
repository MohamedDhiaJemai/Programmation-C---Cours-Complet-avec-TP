#include <stdio.h>
#include <stdlib.h>

void saisie(int*,int*);
int puissance (int,int);
void affichage(int);

void main()
{
    int a,b,p;
    saisie(&a,&b);
    affichage(a);
    affichage(b);
    p=puissance(a,b);
    affichage(p);

}
void saisie(int *a,int *b){

    printf("Donner A :\n");
    scanf("%d",a);
    printf("Donner B :\n");
    scanf("%d",b);
}
int puissance(int a,int b){
    return(pow(a,b));
}

void affichage (int p){
    printf("%d \n",p);
}
