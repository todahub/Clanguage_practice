#include<stdio.h>

int main(){
    int len;

    puts("下向き数字ピラミッドを作ります。");
    printf("何段ですか");
    scanf("%d",&len);

    for(int i = 1; i <= len;i++){
        for(int j = 0; j < i; j++)
            putchar(' ');
        for(int j = 0; j < ((len - i) * 2) + 1; j++)
            printf("%d",i);
        putchar('\n');
    }

    return 0;
}