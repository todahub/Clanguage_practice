#include <stdio.h>

#define LineBreak() putchar('\n')

int gcd(int x,int y){
    if(x == 0 || y == 0){
        return 0;
    }
    else if(x > y){
        return x % y == 0 ? y : gcd(y,(x%y));
    }
    else if(x < y){
        return y % x == 0 ? x : gcd(x,(y%x));
    }
}

int main(){
    int x,y;
    printf("二つの自然数を入力してください。"); LineBreak();
    printf("1個目:"); scanf("%d",&x);
    printf("2個目:"); scanf("%d",&y);

    if(gcd(x,y)!=0){
        printf("%dと%dの最大公約数は%dです。",x,y,gcd(x,y));LineBreak();
    }
    else{
        printf("公約数がありません。");LineBreak();
    }

    return 0;
}