#include <stdio.h>

int main(){

    int i,j,n,k;

    printf("Donner Le Nombre Des Lignes : \n");
    scanf("%d",&n);

    for(i=0;i<n;i++){

    for(j=i;j<n-1;j++){printf(" ");}

    for(j=0;j<=i;j++){printf("*");}

    for(k=0;k<i;k++){printf("*");}

    printf("\n");

    }


    for(i=0;i<n-1;i++){

        for(j=0;j<i+1;j++){printf(" ");}

        for(k=0;k<n-i-1;k++){printf("*");}

        for(k=0;k<n-i-2;k++){printf("*");}

    printf("\n");

    }


   return 0;
}
