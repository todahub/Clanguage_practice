#include <stdio.h>
#define PISCES 8
#define CHARACTERS 128

int scan_char(char s[][CHARACTERS],int n){
    printf("文字列を入力してください。\n");
    for(int i = 0; i < n; i++){
        printf("s[%d] = ",i);
        scanf("%127s",s[i]);
        if(s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$' && s[i][5] == '\0' )
            return i;
    }
    return n;
}

void put_strary(const char s[][CHARACTERS],int n){
    for(int i = 0; i < n; i++)
        printf("s[%d] = \"%s\"\n",i,s[i]);
}

int main(){
    char s[PISCES][CHARACTERS];
    int num = scan_char(s, PISCES);
    
    put_strary(s, num);

    return 0;    
}