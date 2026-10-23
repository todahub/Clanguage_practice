#include<stdio.h>

int main(){
    int no1, no2,high, wide;

    printf("横長の長方形を作ります。\n");
    printf("一辺（その１）："); scanf("%d",&no1);
    printf("一辺（その２）："); scanf("%d",&no2);

    high = no1 < no2 ? no1 : no2;
    wide = no1 < no2 ? no2 : no1;

    for(int i = 0; i < high; i++){
        for(int f = 0;f < wide; f++)
            printf("*");
        putchar('\n');
    }
}