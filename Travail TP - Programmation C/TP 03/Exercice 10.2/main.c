#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,r,q,i=1,x=0;
    printf("Donner un Entier Decimale : \n");
    scanf("%d",&n);

    while (q!=0){
        q=n/16;
        r=n%16;
        n=q;
        i=i*10;
        x=x+(r*i);
    }

    printf("%d",x/10);
    return 0;
}
