#include<stdio.h>

int main(){
    int x , y;

    printf("二つの整数を入力せよ。\n");
    printf("整数x:"); scanf("%d",&x);
    printf("整数y:"); scanf("%d",&y);

    printf("xの値はyの値の%f％です。",((double)x/y)*100);

    return 0;

}