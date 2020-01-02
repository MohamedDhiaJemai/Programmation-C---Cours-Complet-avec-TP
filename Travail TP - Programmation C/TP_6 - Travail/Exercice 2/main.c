#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,a,b1,b2,b3,s,t,m[20][20];
    printf("Donner La Taille Du Matrice carre : \n");
    do{
        scanf("%d",&t);
    }while(t%2==0);

    printf("\nRemplissage Du Matrice :\n");

    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            printf("valeur de [%d][%d] \n",i,j);
            scanf("%d",&m[i][j]);
        }
    }

        a=0;
        for(j=0;j<t;j++){
           a=a+m[0][j];
        }
        //printf("%d",a);

        b1=0;
        i=0;
        do{
             s=0;
            for(j=0;j<t;j++){
                s=s+m[i][j];
            }
            if(a==s) b1=1;
            i++;
        }while((b1!=0)&&(j!=t));


        //if(b1!=1) printf("Cette Matrice N'est Pas Magique");

        k=0;
        do{
             s=0;
            for(j=0;j<t;j++){
                s=s+m[j][k];
            }
            if(a==s) b2=1;
            i++;
        }while((b2!=0)&&(j!=t));

       // if(b2!=1) printf("Cette Matrice N'est Pas Magique");

        b3=0;
        s=0;
        for(i=0;i<t;i++){
            s=s+m[i][i];
        }
        if (a==s) b3=1;


        if((b1==b2)&&(b2==b3)) printf("\nC'est une matrice Magique\n");
        else ("\nCette Matrice n'est pas Magique\n");


    return 0;
}
