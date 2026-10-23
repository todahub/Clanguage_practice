#include <stdio.h>

#define swap(type,a,b) {type x = a; a = b; b = x;}

int main(){
    int a,b;

    printf("値a：");
    scanf("%d",&a);

    printf("値b：");
    scanf("%d",&b);

    printf("a=%d,b=%d =>",a,b);
    swap(int,a,b);
    printf(" a=%d,b=%d\n",a,b);

    return 0;
}