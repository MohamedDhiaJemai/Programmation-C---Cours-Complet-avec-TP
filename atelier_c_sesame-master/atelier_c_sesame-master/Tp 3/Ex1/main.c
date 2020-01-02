#include <stdio.h>

int main()
{

    int  res1 , res2 ,res3,n,p;

    do
    {
        printf("Donner un nombre 1 \n");
        scanf("%d",&n);
        printf("Donner un nombre 2 \n");
        scanf("%d",&p);

    }while(n>p);

    res1=0;

    for (int i=n;i<p;i++)
    {
       res1+=i;
    }
    printf("La somme de res1 est %d \n",res1);
    int j=n;
    res2=0;
    while(j<p)
    {
       res2+=j;
       j++;
    }
    printf("La somme de res2 est %d \n",res2);
    int k=n;
    res3=0;
    do
    {
        res3+=k;
        k++;
    }while(k<p);
    printf("La somme de res3 est %d",res3);
    return 0;
}
