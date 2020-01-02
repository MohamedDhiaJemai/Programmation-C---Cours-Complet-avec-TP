#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Donner Un nombre \n");
    scanf("%d",&n);
    int s=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    if(s==n)
    {
       printf("Ce nombre est parfait \n");
    }
    else
    {
       printf("Ce nombre est non parfait \n");
    }
    return 0;
}
