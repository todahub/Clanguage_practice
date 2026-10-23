#include<stdio.h>

int power3(int a){
    return a * a * a;
}

int main(){
    int x;
    printf("x:"); scanf("%d",&x);

    printf("%dの3乗は%dです。\n",x,power3(x));

    return 0;
}