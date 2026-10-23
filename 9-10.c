#include <stdio.h>
#include <ctype.h>
#define NUMBER 128

void del_digit(char s[]){
    int j = 0;
    int i = 0;
    while(s[i]){
        if(isdigit(s[i])){}
        else
            s[j++] = s[i];
        i++;
    }
    s[j] = '\0';
}

int main(){
    char s[NUMBER];

    printf("文字列を入力してください：");
    scanf("%s",s);
    
    del_digit(s);

    printf("数字を削除しました：%s\n",s);

    return 0;    
}