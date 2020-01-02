#include <stdio.h>

int main()
{
   int i,j;
   int mat[3][3];
   int nb2,nb;

    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
            printf("Remplir la ligne %d \n",i+1);
            scanf("%d",&mat[i][j]);
       }
    }


    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
            printf(" %d|  ",mat[i][j]);
       }
       printf("\n");
    }





int max=0;
int pos;
nb2=0;
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
             if (mat[i][j]==0)
             {
             nb2=nb2+1;
            }

            if(nb2>max)
            {
                pos=i;
            }
       }
       printf("Le nb de 0 de la ligne %d est %d \n ",i+1,nb2);
       printf("\n");

       nb2=0;
    }

       printf(" le max est la ligne %d",pos+1);
       printf("\n");



   nb=0;
int max1=0;
int pos1;
    for(j=0;j<3;j++)
    {
       for(i=0;i<3;i++)
       {
           if (mat[i][j]==0)
           {
         nb=nb+1;
          }


      if(nb>max1)
            {
                pos1=j;
            }



       }
       printf("Le nb des 0 de la colone %d est %d \n ",j+1,nb);
       printf("\n");
       nb=0;
    }


       printf(" le max est la colonne %d",pos1+1);
       printf("\n");

    return 0;
}
