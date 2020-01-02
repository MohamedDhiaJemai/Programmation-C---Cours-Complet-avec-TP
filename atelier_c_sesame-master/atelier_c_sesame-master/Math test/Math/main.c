#include <stdio.h>

int main()
{
    const float  PI=4*atan(1);
    int n,i;
    float s;
    printf("Donner un valeur n \n");
    scanf("%d",&n);
    i=0;
    s=0;
    float p=pow(n,2);
    for (i=0;i<=n;i++)
    {
        s=s+1/(pow(i,2)+p);
    }
    printf("La valeur est %f \n",4*n*s);
    printf("la valeur de pi est %f \n",PI);
    return 0;
}

