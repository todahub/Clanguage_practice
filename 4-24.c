#include<stdio.h>

int main(){
    int len;

    puts("ピラミッドを作ります。");
    printf("何段ですか");
    scanf("%d",&len);

    for(int i = 0; i < len;i++){
        for(int j = 0; j < len - i; j++)
            putchar(' ');
        for(int j = 0; j < (i * 2) + 1; j++)
            putchar('*');
        putchar('\n');
    }


    return 0;
}