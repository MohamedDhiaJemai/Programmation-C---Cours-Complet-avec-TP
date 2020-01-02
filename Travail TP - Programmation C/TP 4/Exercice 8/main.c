#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,y,t[100],tab[100];

    do{
        printf("Donner la Taille du tableau : \n");
        scanf("%d",&n);
    }while (((n%2)!=0)|| (n<1));


    for(i=0;i<n;i++){
        printf("Case[%d] : ",i);
        scanf("%d",&t[i]);
        t[i+1]=t[i];
        i++;
    }

    printf("\n \nTABLEAU INITIAL : \n");
    for (i=0;i<n;i++){
        printf ("%d|",t[i]);
    }

    y=0;
    for(i=0;i<n;i=i+2){
            tab[y]=t[i];
            y++;
    }
    for(j=n-1;j>=0;j=j-2){
        tab[y]=t[j];
        y++;
    }

    printf("\n \nTABLEAU FINAL : \n");
    for(y=0;y<n;y++){
        printf("%d|",tab[y]);
    }
    return 0;
}
