#include<stdio.h>

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort3(int *n1,int *n2, int *n3){
    if(*n1 > *n2)
        swap(n1,n2);
    if(*n2 > *n3)
        swap(n2,n3);
    if(*n1 > *n2)
        swap(n1,n2);
}

int main(){
    int a,b,c;

    printf("三つの整数を入力せよ。\n");
    printf("整数1：");scanf("%d",&a);
    printf("整数2：");scanf("%d",&b);
    printf("整数3：");scanf("%d",&c);

    sort3(&a,&b,&c);

    printf("昇順にソートしました。\n");
    printf("整数1：%d ",a);
    printf("整数2：%d ",b);
    printf("整数3：%d\n",c);

    return 0;
}