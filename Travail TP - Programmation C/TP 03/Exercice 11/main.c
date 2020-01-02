#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int b=1,x=2,i,m=1;

    while(m<100){

        for(i=2;i<x;i++){
            if(x%i==0){
                b=0;
                break;
            }
            else b=1;
        }
        if (b==1){
            m=(pow(2,x)-1);
            if (m<100) printf("%d est un entier premier de Mersenne. \n",m);
        }
        x++;
    }

    return 0;
}
