#include <stdio.h>
int main()
{
    int n,i,r,test;
    printf("Donner un entier\n");
    scanf("%d",&n);
    test=1; //initialiser un test égale vrai = 1
    for(i=2;i<n/2;i++)
    {
       if(n%i==0)
       {
          printf("Ce nombre est non premier \n");
          test=0; //test égale faux et il affiche un message "Ce nombre est non premier" w yo5roj directement mel boucle
          break;
       }
    }
    if(test==1) //fait un test si le test est vrai donc il affiche un message "Ce nombre est premier"
    {
         printf("Ce nombre est premier \n");
    }
    return 0;
}
//zayneb.layouni@sesame.com.tn
