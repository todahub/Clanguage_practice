#include <stdio.h>
#define NUMBER 128

int str_length(const char s[]){
    int len = 0;
    while(s[len])
        len++;
    return len;
}

void rev_string(char s[]){
    int len = str_length(s);
    int j = len - 1;
    for(int i = 0; i < (len / 2); i++){
        char num = s[i];
        s[i] = s[j];
        s[j] = num;
        j--;
    }
}

int main(){
    char s[NUMBER];

    printf("文字列を入力してください：");
    scanf("%s",s);
    
    rev_string(s);

    printf("文字列が格納された配列を反転しました：%s\n",s);

    return 0;    
}