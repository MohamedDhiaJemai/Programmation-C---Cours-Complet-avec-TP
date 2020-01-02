#include <stdio.h>

int main()
{
    int u;
    printf("Donner un terme\n");
    scanf("%d",&u);
    int i=1;
    while(i!=10)
    {

       if(u%2==0)
       {
           u=u/2;
           printf("le terme %d est %d \n",i,u);
       }
       else
       {
           u=3*u+1;
           printf("le terme %d est %d \n",i,u);
       }
       i++;
    }
    return 0;
}
