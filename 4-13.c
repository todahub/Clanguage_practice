#include<stdio.h>

int main(){
    int no;

    printf("整数を入力せよ：");
    scanf("%d",&no);

    int sum = 0;

    if(no > 0)
        for(int i = 1;i <= no; i++)
            sum += i;
    else
        for(int i = 1; i >= no; i--)
            sum += i;
    
    printf("1から%dまでの全整数の和は%dです。\n", no, sum);

}