#include<stdio.h>

int compare3(int a,int b, int c){
    int min = a < b ? a : b;
    return c < min ? c : min;
    
}

int main(){
    int a, b, c;

    printf("a:"); scanf("%d",&a);
    printf("b:"); scanf("%d",&b);
    printf("c:"); scanf("%d",&c);

    printf("小さいのは%dです\n",compare3(a,b,c));

    return 0;
}