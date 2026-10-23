#include <stdio.h>

int str_char(const char s[],unsigned char c){
    int i = 0;
    while(s[i]){
        if(s[i] == c) return i;
        i++;
    }

    return -1;
}

int main(){
    char s[128];
    unsigned char c;
    int an;

        printf("文字列を入力してください:");
        scanf("%s",s);
        getchar();
        printf("添字を返す文字を入力してください:");
        scanf("%c",&c);

        printf("%cのASCII:%d\n",c,c);



    an = str_char(s,c);
    printf("%cのASCII:%d\n",c,c);
    if(an != -1)
    printf("%cの一番最初の添字は%dです。",c,an);
    else
    printf("%cは文字列内にありません。",c);
    putchar('\n');

    return 0;
}