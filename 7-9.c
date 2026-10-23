#include<stdio.h>
#include<math.h>

double side(double square){
    return sqrt(square);
}
int main(){
    double square;

    printf("実数を入力してください：");scanf("%lf",&square);
    printf("%0.2f㎡の面積を持つ正方形の一片の長さは%0.2fmです。\n",square,side(square));

    return 0;
}