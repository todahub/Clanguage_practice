#include<stdio.h>

int main(){
    int n1, n2;

    printf("二つの整数を入力してください。\n");
    printf("整数n1:"); scanf("%d",&n1);
    printf("整数n2:"); scanf("%d",&n2);

    printf("それらの積は%dです。",n1 * n2);

    return 0;
}