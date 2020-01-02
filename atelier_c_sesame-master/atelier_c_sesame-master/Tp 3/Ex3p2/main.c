#include <stdio.h>

int main()
{
    int n,s;
    printf("Donner n \n");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        s=1;
        int x=2;
        for(int j=x;j<=i/2;j++)
        {
             if(i%j==0)
             {
                s=s+j;
             }
        }

        if(s==i)
        {
            printf("%d est parfait \n",i);
        }
    }
    return 0;
}

//
