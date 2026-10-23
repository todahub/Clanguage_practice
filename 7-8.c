#include<stdio.h>

int main(){
    float fl;
    double dou;
    long double ldou;

    printf("%lu",sizeof(fl));
    putchar('\n');
    printf("%lu",sizeof(dou));
    putchar('\n');
    printf("%lu",sizeof(ldou));
    putchar('\n');
}