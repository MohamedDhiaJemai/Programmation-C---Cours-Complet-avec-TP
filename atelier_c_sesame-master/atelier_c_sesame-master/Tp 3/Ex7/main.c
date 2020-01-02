#include <stdio.h>
void main()
{
    int n,p,i,max,min;
    printf("Donner n \n");
    scanf("%d",&n);
    i=0;
    while(i!=n)
    {
        for(int j=0;j<=i;j++)
        {
          printf("+");
        }
        printf("\n");
        i++;
    }
    printf("\n \n");

    i=0;
    while(i!=n-1)
    {
        for(int j=0;j<n;j++)
        {
           printf("+");
        }
        printf("\n");
        i++;
    }

    do
    {
        printf("Donner un nombre impaire \n");
        scanf("%d",&p);
    }while(p%2==0);
    max=n/2+1;
    min=n/2+1;
    int h=0;
    while((max!=n+1) && (min!=-1) && (h!=n) )
    {
         for(int i=0;i<=max;i++)
         {
             if((i>=min)&&(i<=max))
             {
                printf("+");

             }
             else
             {
                printf(" ");
             }
         }
         printf("\n");
         h++;
         max++;
         min--;
    }

    max=n/2+1;
    min=n/2+1;
    h=0;
    while((max!=n) && (min!=0) && (h+1!=n) )
    {
         for(int i=0;i<=max;i++)
         {
             if((i>=min)&&(i<=max))
             {
                printf("+");
             }
             else
             {
                printf(" ");
             }
         }
         printf("\n");
         h++;
         max++;
         min--;
    }

    max=n+1;
    min=1;
    h=1;
    while((min!=max+2) && (h-1<n) && (min!=n/2+5))
    {
         for(int i=0;i<=max;i++)
         {
             if((i>=min)&&(i<=max))
             {
                printf("+");
             }
             else
             {
                printf(" ");
             }
         }
         printf("\n");
         h++;
         max--;
         min++;
    }
}
