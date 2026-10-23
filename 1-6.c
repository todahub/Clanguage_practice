#include<stdio.h>

int main(){
    int no;

    printf("整数を入力してください：");
    scanf("%d",&no);

    printf("%dから7を減じると%dです。", no, no - 7);

    return 0;
}