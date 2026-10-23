#include<stdio.h>

int main(){
    int no;

    printf("整数を入力してくださ：");

    scanf("%d",&no);

    printf("%dに13を加えると%dです。", no, no + 13);

    return 0;

}