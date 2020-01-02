#include <stdio.h>
#include <stdlib.h>

void somme(int*,int,int);

main()
{
    int a,b,s=0;
    printf("Donner l'entier A :\n");
    scanf("%d",&a);
    printf("Donner l'entier B :\n");
    scanf("%d",&b);

    somme(&s,a,b);
    printf("La somme dans void est : %d", s);

}

void somme(int *s,int a,int b){
    *s=a+b;
    printf("La somme dans la fonction %d :", *s);
}
