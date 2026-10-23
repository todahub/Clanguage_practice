#include<stdio.h>

int main(){
    int no;

    printf("正方形を作ります。\n");
    printf("何段ですか："); scanf("%d",&no);

    for(int i = 0; i < no; i++){
        for(int f = 0;f < no; f++)
            printf("*");
        putchar('\n');
    }
}