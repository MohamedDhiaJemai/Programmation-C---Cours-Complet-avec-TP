#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i,t1[100],t2[100];
    do{
        printf("Donner la Taille du tableau Num 1: \n");
        scanf("%d",&n1);
    }while ((n1<2)&&(n1>100));

    do{
        printf("Donner la Taille du tableau Num 2: \n");
        scanf("%d",&n2);
    }while ((n2<2)&&(n2>100));

     for(i=0;i<n1;i++){
        printf("Case[%d] de T1 : ",i);
        scanf("%d",&t1[i]);
        t1[i+1]=t1[i];
        i++;
    }

         for(i=0;i<n2;i++){
        printf("Case[%d] de T2 : ",i);
        scanf("%d",&t2[i]);
        t2[i+1]=t2[i];
        i++;
    }

    printf("\n \nTABLEAU Num 1 : \n");
    for (i=0;i<n1;i++){
        printf ("%d|",t1[i]);
    }


    printf("\n \nTABLEAU Num 2 : \n");
    for (i=0;i<n2;i++){
        printf ("%d|",t2[i]);
    }

    return 0;
}
