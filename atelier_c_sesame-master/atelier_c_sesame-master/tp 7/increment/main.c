#include <stdio.h>

int main()
{
    int i=5;
    int n1=++i;
    printf("%d \n",n1);
    //*****************
    int j=5;
    int n2=j++;
    printf("%d \n",n2);
    //*****************
    printf("\n");
    i=12;
    printf("i =%d \n",++i);
    j=12;
    printf("j = %d \n",j++);
    return 0;
}
