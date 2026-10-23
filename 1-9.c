#include<stdio.h>

int main(){
    int n1,n2,n3;

    printf("三つの整数を入力して下さい。\n");
    printf("整数n1:"); scanf("%d",&n1);
    printf("整数n2:"); scanf("%d",&n2);
    printf("整数n3:"); scanf("%d",&n3);

    printf("これらの和は%dです。",n1 + n2 + n3);

    return 0;

}