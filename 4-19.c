#include<stdio.h>

int main(){
    int no;

    printf("整数を入力せよ：");
    scanf("%d",&no);

    int f = 0;

    for(int i = 1; i <= no; i++)
        if(no%i==0){
            printf("%d\n", i);
            f++;
        }  

    printf("約数は%d個です。\n", f);

    return 0;
}