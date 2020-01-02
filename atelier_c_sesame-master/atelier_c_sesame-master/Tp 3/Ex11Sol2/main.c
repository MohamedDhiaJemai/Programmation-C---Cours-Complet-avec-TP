#include <stdio.h>
void main()
{
    int p,j,test,x;
    p=pow(2,2); //initialiser un produit 2²
    while(p-1!=63) // jusqu'à p-1=63
    {
        x=p-1; // x est un variable qui reçoit la valeur 2 puissance p -1
        for(j=2;j<x;j++) //bech na3mlou parcours 3al x inchoufouh premier wala lé les valeurs possibles de x sont x=3 x=7 x=15 x=31 et x=31
        {
           if(x%j!=0)
           {
               test=1; //ken vrai test=1 x est premier w bech ikamil el boucle jusqu'à test=1
           }
           else
           {
               test=0; // sinon bech yo5roj mel boucle ken x est non premier bel break;
               break;
           }
        }
        if(test)
        {
            printf("%d \n",x); //si test est vrai bech yaffichi juste les nombre x=3 x=7 et x=31 Mersenne
        }
        p=p*2; //2²*2 jusqu'a el boucle yé9if fi 63
    }
}
/*
résumé
Le principe houwa bech in5arijou tous les nombres ili a9al mén 100 ili yétkétbou sous forme 2 puissance p -1
kima
3=2*2-1
7=2*2*2-1
15=2*2*2*2-1
31=2*2*2*2*2-1
63=2*2*2*2*2*2-1

W ba3d bech na3mlou test 3ala les nombre hakom w
Si ce nombre est premier test=1 ya3ni vrai sinon test=0 faux
W ba3d na3mlou condition 3al test inchoufoha vrai wala faux
Ken vrai bech t'affichi juste les nombre premier
*/
