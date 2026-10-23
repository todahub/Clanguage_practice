#include <stdio.h>

int factorial(int n){
    int no = n;
    for(int i = n-1;i > 0; i--)
        no *= i;

    return no;
}

int combination(int n,int r){
    if(r == 0 || n == r){
        return 1;
    }
    else if(r == 1){
        return n;
    }
    else{
        return combination(n-1,r-1) + combination(n-1,r);
    }
}

int main(){
    int n,r;
    printf("元となる整数の数をを入力せよ："); scanf("%d",&n);
    printf("取り出す整数の数をを入力せよ："); scanf("%d",&r);

    printf("%d個の整数から%d個の整数を取り出すときの組み合わせの数は%d個です。\n",n,r,combination(n,r));

    return 0;
}