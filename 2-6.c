#include<stdio.h>

int main(){
    double no;

    printf("身長を入力せよ："); scanf("%lf",&no);

    printf("標準体重は%.1fです。",(no - 100) * 0.9);

    return 0;
}