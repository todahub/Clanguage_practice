#include<stdio.h>

int main(){
    int x , y;

    printf("二つの整数を入力せよ。\n");
    printf("整数x:"); scanf("%d",&x);
    printf("整数y:"); scanf("%d",&y);
    
    printf("それらの和は%dで積は%dです。", x + y, x * y );

    return 0;
}