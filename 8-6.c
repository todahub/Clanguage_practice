#include <stdio.h>

int factorial(int n){
    int no = n;
    for(int i = n-1;i > 0; i--)
        no *= i;

    return no;
}

int main(){
    int num;

    printf("自然数を入力してください："); scanf("%d",&num);

    printf("%dの階上は%dです。\n",num,factorial(num));

    return 0;
}