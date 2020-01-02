#include <stdio.h>

void permuter(int *x ,int *y);

void main()
{
    int a=5;
    int b=8;
    permuter(&a,&b);
    printf("<< a=%d \n",a);
    printf("b=%d >> \n",b);
    getchar();
}

void permuter(int *x ,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
