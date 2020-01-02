#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t[100],i,max=0,p=0,s=0;
    float m=0;

    do{
        printf("Donner un entier N :\n");
        scanf("%d",&n);
    }while (n>100);


    for (i=0; i<n; i++){
        printf("donner la valeur N %d du tableau \n",i);
        scanf("%d",&t[i]);
    }

    for(i=0;i<n;i++){
            if (t[i]> max) max=t[i];
            p=i;
    }

    printf("\nLa valeur max est : %d , et sa position est T[ %d ] \n",max,i);

    for (i=0;i<n;i++){
        s=s+t[i];
    }

    printf("la Somme des elements du tableau est : %d \n",s);
    m=s;
    printf("La moyenne des elements du tableau est : %f \n",m/n);


    return 0;
}
