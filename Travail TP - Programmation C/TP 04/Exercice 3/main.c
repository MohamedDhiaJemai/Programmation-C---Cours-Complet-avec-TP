#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i, t[100],v,p;
    printf("Donner la taille du tableau : \n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("donner la valeur N %d du tableau \n",i);
        scanf("%d",&t[i]);
    }

    printf("Notre Tableau : \n");
    for (i=0;i<n;i++){
        printf ("%d|",t[i]);
    }

    printf("\n");
    printf("Donner un entier V : \n");
    scanf("%d",&v);
    printf("Donner l'indice du P : \n");
    scanf("%d",&p);

    n=n+1;

    for (i=n;i>=p;i--){
        t[i]=t[i-1];
    }

    t[p-1]=v;

    printf("Notre Tableau : \n");
    for (i=0;i<n;i++){
        printf ("%d|",t[i]);
    }

    return 0;
}
