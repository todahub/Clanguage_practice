#include<stdio.h>

int main(){
    int a, b, c, d;

    printf("四つの整数を入力せよ。\n");
    printf("整数１："); scanf("%d",&a);
    printf("整数２："); scanf("%d",&b);
    printf("整数３："); scanf("%d",&c);
    printf("整数４："); scanf("%d",&d);

    int max = a;
    
    if(max < b)
        max = b;
    if(max < c)
        max = c;
    if(max < d)
        max = d;

    printf("最大の整数は%dです。",max);

    return 0;

}