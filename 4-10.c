#include<stdio.h>

int main(){
    int no;

    printf("正の整数を入力せよ。");
    scanf("%d",&no);

    if(no > 0){
        while(no-- > 0){
            putchar('*');
            putchar('\n');
        }
        putchar('\n');
    }

    return 0;
}