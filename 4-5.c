#include<stdio.h>

int main(){
    int no;

    printf("正の整数を入力せよ。");
    scanf("%d",&no);

    int i = 1;

    if(no > 0){
        while(i <= no)
            printf("%d ", i++);
        printf("\n");
    }

    return 0;
}