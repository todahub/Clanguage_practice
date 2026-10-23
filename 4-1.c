#include<stdio.h>

int main(){

    int retry;

    do{
        int no;

        printf("整数を入力せよ。：");
        scanf("%d",&no);

        if(no == 0)
            puts("その数は0です。");
        else if(no > 0)
                puts("その数は正です。");
        else
            puts("その数は負です。");

        printf("繰り返しますか？\n");
        printf("yes---1,no---0:");
        scanf("%d",&retry);
    }while(retry);

    return 0;
}