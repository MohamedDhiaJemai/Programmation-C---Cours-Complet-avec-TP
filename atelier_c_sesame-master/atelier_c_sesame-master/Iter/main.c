#include <stdio.h>

int main(void)
{
    int i;
    for(i=0 ;i<5;i++)
    {
        printf("i = %d \n",i);
        if(i==3)
        {
           continue;
        }

    }
    printf("valeur de i a sortie de la boucle = %d \n ",i);
    return 0;
}
