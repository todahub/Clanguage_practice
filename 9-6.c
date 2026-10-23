#include <stdio.h>
#define NUMBER 128

int str_chnum(const char s[],int n){
    int count = 0;
    int i = 0;
    while(s[i]){
        if(s[i++] == n) count++;
    }

    return count;
}

int main(){
    char s[NUMBER];
    char n;

    printf("文字列を入力してください：");
    scanf("%s",s);
    getchar();
    printf("文字列に含まれている個数を知りたい文字を入力してください:");
    scanf("%c",&n);

    printf("文字列\"%s\"内に%cは%d個含まれています。\n",s,n,str_chnum(s,n));

    return 0;

}