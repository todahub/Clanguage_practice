#include<stdio.h>

int power3(int a){
    return a * a * a;
}

int power4(int a){
    return a * power3(a);
}

int main(){
    int x;
    printf("x:"); scanf("%d",&x);

    printf("%dの4乗は%dです。\n",x,power4(x));

    return 0;
}