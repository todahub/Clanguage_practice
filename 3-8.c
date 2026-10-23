#include<stdio.h>

int main(){
    int n1, n2;

    puts("二つの整数を入力せよ。");
    printf("整数1："); scanf("%d",&n1);
    printf("整数2："); scanf("%d",&n2);
    
    int dif;

    if(n1 > n2)
        dif = n1 - n2;
    else
        dif = n2 - n1;

    printf("それらの差は%dです。",dif);

    return 0;
        
}