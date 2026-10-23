#include<stdio.h>

int main(){
    int no;

    printf("整数を入力せよ。:"); scanf("%d",&no);

    int av = no;
    if(no < 0)
        av = -no;

    printf("絶対値は%dです。",av);

    return 0;
}