#include <stdio.h>
#include <stdlib.h>

int saisie(int *);
void remplissage(int ,int [] );
int somme(int , int [] ,int * );
void affichage(int ,int [] );

void main()
{
    int s,n,t[50];
    saisie(&n);
    remplissage(n,t);
    s=somme(n,t,&s);
    printf("Somme Tableau : %d",s);
    affichage(n,t);
}

int saisie(int *n){
    printf("Donner la taille du tableau");
    scanf("%d",n);
}

void remplissage(int n,int t[]){
    int i;
    for(i=0;i<n;i++){
        printf("Valeur de [%d] \n:",i);
        scanf("%d",t+i);
    }
}

int somme(int n, int t[],int *s){
    int i;
    *s=0;
    for(i=0;i<n;i++){
        *s=*s+t[i];
    }
    return(*s);
}

void affichage(int n,int t[]){
    int i;
    for (i=0;i<n;i++){
        printf("[%d]",t[i]);
    }
}

