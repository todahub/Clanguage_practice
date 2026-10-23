#include<stdio.h>

int main(){
    int a, b;

    puts("二つの整数を入力せよ。");
    printf("整数A:"); scanf("%d",&a);
    printf("整数B:"); scanf("%d",&b);
    
    if(a == b)
        printf("%dと%dは等しいです。",a,b);
    else if(a > b)
        printf("%dは%dより大きいです。",a,b);
    else 
        printf("%dは%dより小さいです。",a,b);

    return 0;
}