#include <stdio.h>
int main()
{
    int i,j;
    float mat[3][3];
    float sommeLigne,sommeColone,sommeGlobale;
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
            printf("Remplir la ligne %d \n",i);
            scanf("%f",&mat[i][j]);
       }
    }
    sommeLigne=0;

    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
            sommeLigne+=mat[i][j];
       }
       printf("La moyenne de la ligne %d est %f \n ",i+1,sommeLigne/3);
       printf("\n");
    }
    sommeColone=0;
    sommeGlobale=0;
    for(j=0;j<3;j++)
    {
       for(i=0;i<3;i++)
       {
            sommeColone+=mat[i][j];
            sommeGlobale+=mat[i][j];
       }
       printf("La moyenne de la colone %d est %f \n ",j+1,sommeColone/3);
       printf("\n");
    }
    printf("Le moyenne globale est %f \n",sommeGlobale/9);
    return 0;
}

