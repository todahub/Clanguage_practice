#include<stdio.h>

int main(){
    int n;

    printf("整数を入力せよ。\n");
    scanf("%d",&n);

    switch(n%2){
        case 1 : printf("その数は奇数です。"); break;
        default : printf("その数は偶数です。"); break;
    }

    return 0;
}