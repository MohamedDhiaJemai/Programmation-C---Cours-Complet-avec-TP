#include <stdio.h>
#define MAX 10

int main(void)
{
    int i = 0;
    int n = 0;
    int j = 0;
    int taille;
    int t[MAX];
    do
    {
        printf("Donnez la taille \n");
        scanf("%d",&taille);
    }while((taille>MAX)||(taille<1));
    for(i=0;i<taille;i++)
    {
       printf("Tapez la case %d \n",i+1);
       scanf("%d",&t[i]);
    }

    printf("\nNombre a supprimer? \n");
    scanf("%d", &n);

    for(i=0; i<taille; i++ )
    {
        if( t[i]==n)
        {
            for(j=i; j < taille; j++)
            {
                if( j < taille-1)
                {
                    t[j] = t[j+1];
                }
               else
                {
                    taille--;
                }
             }
         }
    }

    for(i=0; i < taille ; i++ )
    {
        printf("%d | ", t[i]);
    }
    return 0;
}
