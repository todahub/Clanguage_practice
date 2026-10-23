#include <stdio.h>

#define max(x,y) ((x > y) ? (x):(y))

int main(){
    int a,b,c,d;

    printf("値a：");
    scanf("%d",&a);

    printf("値b：");
    scanf("%d",&b);

    printf("値c：");
    scanf("%d",&c);

    printf("値d：");
    scanf("%d",&d);

    printf("%d",max(max(a,b),max(c,d)));
    printf("%d",max(max(max(a,b),c),d));

    return 0;
}