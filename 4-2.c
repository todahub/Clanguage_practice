#include<stdio.h>

int main(){

    int n1, n2, add, high;

    puts("二つの整数を入力せよ。");
    printf("整数１:"); scanf("%d",&n1);
    printf("整数２:"); scanf("%d",&n2);

    if(n1 > n2){
        high = n1;
        add = n2;
    }
    else{
        high = n2;
        add = n1;
    }

    int low = add;

    int sum = 0;
    do{
        sum += add;

        add++;
    }while(!(add > high));

    printf("%d以上%d以下の全整数の和は%dです。", low, high, sum);

    return 0;
}