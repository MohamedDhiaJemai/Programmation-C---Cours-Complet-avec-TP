#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("donner les entiers a b et c \n");
    scanf("%d %d %d",&a,&b,&c);
    int test;
    if((a>3)&&(((a+b)/c)%4==0))
    {
        test=1;
    }
    else
    {
        if((a%b==0)&&(a%c==0))
        {
            test=1;
        }
        else
        {
             if((a%b==0))
             {
                  test=1;
             }
             else
             {
                 test=0;
             }
        }

    }

    if(test==1)
    {
        printf("Vrai \n");
    }
    else
    {
        printf("Faux \n");
    }
    return 0;

}
