#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;

    printf("Donner La Valeur de N : \n");
    scanf("%d",&n);

    for (i=1;i<=n;i++){

        for(j=1;j<=i;j++){
            printf("+");
        }
        printf(" \n");
    }




    return 0;
}
