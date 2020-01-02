#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Donner Un Entier N : \n");
    scanf("%d",&n);

    for(i=1;i<=n; i++){

    int n=(i/2);
    int s=0;

    for (j =1; j<=n; j++){
        if ((i%j) == 0)
            {s=s+j;}
    }

    if(s==i)
        {printf("%d C'est Un Nombre Parfait \n",i);}

    }

    return 0;
}
