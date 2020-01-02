#include <stdio.h>

int main()
{
    int n, reste2,reste8,reste16;
    do
    {
        printf("Donner un nombre decimal \n");
        scanf("%d",&n);
    }while(n<0);

    //binaire
    while(n!=0)
    {
       reste2=n%2;
       n=n/2;

       printf("%d \n",reste2);
    }
    //*************************************************
    do
    {
        printf("Donner un nombre decimal \n");
        scanf("%d",&n);
    }while(n<0);
    //octale
    while(n!=0)
    {
       reste8=n%8;
       n=n/8;

       printf("%d \n",reste8);
    }

    //*****************************************************
    do
    {
        printf("Donner un nombre decimal \n");
        scanf("%d",&n);
    }while(n<0);
    //hexadecimale
    while(n!=0)
    {
       reste16=n%16;
       n=n/16;
       switch(reste16)
       {
          case 10 : printf("A \n");
          break;
          case 11 : printf("B \n");
          break;
          case 12 : printf("C \n");
          break;
          case 13 : printf("D \n");
          break;
          case 14 : printf("E \n");
          break;
          case 15 : printf("F \n");
          break;
          default :

          printf("%d",reste16);
       }

    }

    return 0;
}
