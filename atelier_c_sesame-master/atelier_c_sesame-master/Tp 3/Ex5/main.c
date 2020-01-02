#include <stdio.h>

int main()
{
    int n;
    printf("Donner un valeur n\n");
    scanf("%d",&n);
    float estim=0;
    for(int i=1;i<n;i+=2)
    {
       estim=estim+(1/i);
    }
    printf("Le valeur aprocher est %f \n",estim);
    //partie N°2
    printf("La valeur est %f \n",estim/1000);
    return 0;
}
