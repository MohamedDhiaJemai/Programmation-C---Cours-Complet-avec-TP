#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j1,j2,m1,m2,a1,a2;
    int j3=0,m3=0,a3=0;
    printf("donner la 1ere date\n");
    scanf("%d %d %d",&j1,&m1,&a1);
    printf("donner la 2eme date\n");
    scanf("%d %d %d",&j2,&m2,&a2);
    switch(m1){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        j3=31-j1+j2;
        if(j3>30){
            j3=j3-30;
            m3++;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        j3=30-j1+j2;
        if(j3>30){
            j3=j3-30;
            m3++;
        }
        break;
    case 2:
        if((((a1%4)==0)&&((a1%100)!=0))||((a1%400)==0)){
            j3=29-j1+j2;
            if(j3>30){
                j3=j3-30;
                m3++;
            }
        }
        else {
            j3=28-j1+j2;
            if(j3>30){
                j3=j3-30;
                m3++;
            }
        }
        break;
    }
    if(m1<m2){
        m3+=m2-m1;
    }
    else{
        m3+=12-m1+m2;
    }
    if(m3>12){
        a3++;
        m3=m3-12;
    }
    a3+=a2-a1;
    printf("la difference est %d jours, %d mois et %d ans",j3,m3,a3);
    return 0;
}
