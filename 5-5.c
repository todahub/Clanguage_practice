#include<stdio.h>

int main(){
    printf("変数aがdouble型で、変数bがint型だとする。次の代入によって、それぞれの変数の値はどうなるか説明せよ。\n a = b = 1.5;\n");
    printf("式の評価は右から順に行われる。そのためまずb = 1.5の評価が行われる。bはint型のため整数部分のみ代入され、少数部分は切り捨てられる。そのため、この式の評価はint b = 1となる。\n次にa = bに注目する。double型のaにint型の1を代入するため、この式の評価はdouble a = 1.0となる。");

    printf("実際に実行する。\n");
    int b;
    double a;
    a = b = 1;
    printf("a =%f : b = %d",a,b);
    putchar('\n');

    return 0;
}