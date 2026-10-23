#include <stdio.h>

void null_string(char s[]){

    int len = 0;
    
    while(s[len]){
        s[len] = '\0';
        len++;
    }
}

int main(){
    char word[128];

    printf("文字を入力してください。\n");
    scanf("%s",word);

    printf("入力した文字 : \n%s\n",word);

    null_string(word);

    printf("空文字列にしました : \n%s",word);

    return 0;
    
}