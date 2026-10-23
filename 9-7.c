#include <stdio.h>
#define NUMBER 128

int str_length(const char s[]){
    int len = 0;
    while(s[len])
        len++;
    return len;
}

void put_stringn(const char s[],int n){
    for(int i = 0; i < n; i++)
        printf("%s",s);
    putchar('\n');
}

int main(){
    char s[NUMBER];
    int n;

    printf("文字列を入力してください：");
    scanf("%s",s);
    getchar();
    printf("表示回数を入力してください：");
    scanf("%d",&n);
    
    put_stringn(s,n);

    return 0;
}