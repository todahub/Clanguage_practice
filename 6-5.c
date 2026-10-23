#include<stdio.h>

int sum(int n){
    int add = 0;
    for(int i=1; i<=n;i++)
        add +=i;
    return add;       
}

int main(){
    int n;
    printf("n:"); scanf("%d",&n);

    printf("1~%dまでの全整数の和%dです。\n",n,sum(n));
    
    return 0;
}