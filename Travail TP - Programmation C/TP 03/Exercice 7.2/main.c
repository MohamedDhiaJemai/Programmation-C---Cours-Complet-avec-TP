#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Donner la Valeur de N : \n");
    scanf("%d",&n);


    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("+");
        }
        printf("\n");
    }




    return 0;
}
