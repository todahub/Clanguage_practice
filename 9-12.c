#include <stdio.h>
#define PISCES 8
#define CHARACTERS 128

int scan_char(char s[][128],int n){
    printf("文字列を入力してください。\n");
    for(int i = 0; i < n; i++){
        printf("s[%d] = ",i);
        scanf("%127s",s[i]);
        if(s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$' && s[i][5] == '\0' )
            return i;
    }
    return n;
}

int str_length(const char s[][128],int n){
    int len = 0;
    while(s[n][len])
        len++;
    return len;
}

void rev_strings(char s[][128], int n){
    for(int i = 0; i < n; i++){
        int len = str_length(s,i);
        int j = len - 1;
        for(int k = 0; k < (len / 2); k++){
            char num = s[i][k];
            s[i][k] = s[i][j];
            s[i][j] = num;
            j--;
        }
    }
}

void put_strary(const char s[][CHARACTERS],int n){
    for(int i = 0; i < n; i++)
        printf("s[%d] = \"%s\"\n",i,s[i]);
}

int main(){
    char s[PISCES][CHARACTERS];
    int num = scan_char(s, PISCES);
    
    rev_strings(s,num);
    put_strary(s, num);

    return 0;    
}