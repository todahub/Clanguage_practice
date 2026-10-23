#include<stdio.h>

int compare(int a,int b){
    return a < b ? b : a;
}

int main(){
    int a, b;

    printf("a:"); scanf("%d",&a);
    printf("b:"); scanf("%d",&b);

    printf("大きいのは%dです\n",compare(a,b));

    return 0;
}