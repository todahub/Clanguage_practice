#include<stdio.h>

int main(){
    float fl;
    double dou;
    long double ldou;

    printf("数値を入力してください.\n");
    printf("float型："); scanf("%f",&fl);
    printf("double型："); scanf("%lf",&dou);
    printf("long double型："); scanf("%Lf",&ldou);

    printf("float型："); printf("%f",fl);
    putchar('\n');
    printf("double型："); printf("%f",dou);
    putchar('\n');
    printf("long double型："); printf("%Lf",ldou);
    putchar('\n');

    return 0;
}