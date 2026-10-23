#include<stdio.h>

int main(){
    int a, b ,c ,d;

    puts("三つの整数を入力せよ。");
    printf("整数A:"); scanf("%d",&a);
    printf("整数B:"); scanf("%d",&b);
    printf("整数C:"); scanf("%d",&c);
    
    if(a > b) 
        d = b;
        if(b > c)
            d = c;
    else if(c > a)
             d = a;
    else if(a > c)
             d = c;
        
    if (a == b && b == c && c == a)    
        printf("それらは等しいです。");
    else
        printf("最小値は%dです。", d);

    return 0;
}