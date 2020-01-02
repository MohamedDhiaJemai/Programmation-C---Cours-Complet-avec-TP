#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,b,i;
    printf("Donner Un Entier N : \n");
    scanf("%d",&n);

    for(i=2;i<n;i++){
        if (n%i==0){
            b=0;
            break;
        }
    }
    if (b==0)
        printf ("%d : N'est Pas Un Entier Premier \n",n);
    else
        printf("%d : Est Un Entier Premier \n",n);

    return 0;
}
