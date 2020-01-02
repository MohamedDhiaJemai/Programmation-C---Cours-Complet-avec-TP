#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,t[100],tab[100];

    //do{
        printf("Donner La Taille du Tableau : \n");
        scanf("%d",&n);
   // }while ((n>=10)&&(n>=50));

    for (i=0;i<n;i++){
        printf("Case [%d] : \n",i);
        scanf("%d",&t[i]);
    }
    /******************************/
    j=0;
    for (i=0;i<n;i++){
        if(t[i]%2== 0){
            tab[j]=t[i];
            j++;
        }
    }
        for (i=0;i<n;i++){
        if(t[i]%2!= 0){
            tab[j]=t[i];
            j++;
        }
    }

    /******************************/

    for(i=0;i<n;i++){
        printf("%d|",t[i]);
    }
    printf("\n \n");

    for(i=0;i<n;i++){
        printf("%d|",tab[i]);
    }

    return 0;
}
