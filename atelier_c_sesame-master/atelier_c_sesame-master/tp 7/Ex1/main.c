#include <stdio.h>

void initialiser_taquin(int tab[4][4]);
int verif_jeton(int tab[4][4]);

int main()
{
    int tab[4][4];
    initialiser_taquin(tab);
    afficher(tab);
    return 0;
}

void initialiser_taquin(int tab[4][4])
{
    int i,j,aux=tab[0][0]=rand()%15;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            tab[i][j]=rand()%15;
        }
    }
    int test=0;

        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                 test=occurance(tab,tab[i][j]);
                 if(test>1)
                 {
                      tab[i][j]=rand()%15;
                 }
            }
        }
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                 test=occurance(tab,tab[i][j]);
                 if(test>1)
                 {
                      tab[i][j]=rand()%15;
                 }
            }
        }

        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                 test=occurance(tab,tab[i][j]);
                 if(test>1)
                 {
                      tab[i][j]=rand()%15;
                 }
            }
        }


}

void afficher(int tab[4][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",tab[i][j]);
        }
        printf("\n");
    }


}

int verif_jeton(int tab[4][4])
{
    return 0;
}
int occurance(int tab[4][4],int aux)
{
    int i,j,nbr=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(tab[i][j]==aux)
            {
                nbr++;
            }
        }
    }
    return nbr;
}
