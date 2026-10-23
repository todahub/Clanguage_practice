#include <stdio.h>

#define NUMBER 5

int main(){
    char s[NUMBER][128];

    for(int i = 0; i < NUMBER; i++){
        printf("s[%d]:",i);
        scanf("%s",s[i]);
        if(s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$')
        break; 
    }

    for(int i = 0; i < NUMBER; i++){
        if(s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$')
        break;
        else
        printf("s[%d] = \"%s\"\n",i,s[i]);
        
    }

    return 0;
}