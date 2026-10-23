#include<stdio.h>

int main(){
    int len;

    puts("右上直角二等辺三角形を表示します。");
    printf("短辺");
    scanf("%d",&len);

    for(int i = 0; i < len;i++){
        for(int j = 0; j < len - i; j++)
            putchar('*');
        for(int j = 0; j <= i; j++)
            putchar(' ');
        putchar('\n');
    }

    return 0;
}