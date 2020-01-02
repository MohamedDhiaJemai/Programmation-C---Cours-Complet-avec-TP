#include <stdio.h>
#include <stdlib.h>
//
int main()
{
    int x,y;
    printf("Donner x \n");
    scanf("%d",&x);
    printf("Donner y \n");
    scanf("%d",&y);
    if(x>=y)
    {
        printf("x>=y  \n \a");
    }
    else
    {
        if(x<y)
        {
            printf("x<y \n \a");
        }
    }
    sleep(1);
    return 0;
}
