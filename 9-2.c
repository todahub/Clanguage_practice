#include <stdio.h>

int main(){
    char s[] = "ABC";
    printf("sの初期化子は\"%s\"です。\n",s);

    for(int i = 0; i < (sizeof(s)/sizeof(int));i++)
        s[i] = '\0';
    printf("sは空文字列\"%s\"です。\n",s);

    return 0;
}