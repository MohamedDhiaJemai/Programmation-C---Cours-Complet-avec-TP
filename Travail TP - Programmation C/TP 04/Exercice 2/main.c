#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,v,t[50],i,x=0;

    printf("Donner la taille du tableau : \n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("donner la valeur N %d du tableau \n",i);
        scanf("%d",&t[i]);
    }

    printf("Donner une Valeur V : \n");
    scanf("%d",&v);

    for (i=0;i<n;i++){
        if (t[i]==v) x++;
    }
    printf("Le nombre d'occurence de %d dans le tableau est : %d \n",v,x);




    return 0;
}
