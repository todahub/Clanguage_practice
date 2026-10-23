#include <stdio.h>
#define NUMBER 128

int str_length(const char s[]){
    int len = 0;
    while(s[len])
        len++;
    return len;
}

void str_stringr(const char s[]){
    for(int i = str_length(s); i >= 0; i--)
        putchar(s[i]);
    putchar('\n');
}

int main(){
    char s[NUMBER];

    printf("文字列を入力してください：");
    scanf("%s",s);
    printf("文字列を後ろから表示します:");
    str_stringr(s);

    return 0;
}