#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,y;
    char t[50],c;

    do{
        printf("Taile Du Tableau : \n");
        scanf("%d",&n);
    }while ((n<2)&&(n>=20));


    for(i=0;i<n;i++){
        printf("Case[%d] : ",i);
        scanf("%c",&c);
        scanf("%c",&t[i]);
    }

    for(i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if(t[i]==t[j]){
                for(y=j;y<n;y++)
                    t[y]=t[y+1];
                    n--;
            }
        }
    }

    for (i=0;i<n;i++){
        printf ("%c|",t[i]);
    }

    return 0;
}
