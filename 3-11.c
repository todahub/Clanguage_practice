#include<stdio.h>

int main(){
    int n1, n2;

    printf("二つの整数を入力せよ。\n");
    printf("整数１："); scanf("%d",&n1);
    printf("整数２："); scanf("%d",&n2);

    int dif;

    if(n1 > n2)
        dif = n1 - n2;
    else
        dif = n2 - n1;

    printf("%s",dif > 10 ? "それらの数の差は１１以上です。" : "それらの数の差は１０以下です。");
}