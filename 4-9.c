#include<stdio.h>

int main(){
    int no;

    printf("正の整数を入力せよ。");
    scanf("%d",&no);

    if(no > 0){
        int i = 0;
        while(++i <= no)
            printf("%s",i % 2 != 0 ? "+" : "-");
        putchar('\n');
    }

    return 0;
}