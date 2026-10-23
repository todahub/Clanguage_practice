#include <stdio.h>

int main(){
    int ch;
    int count = 0;
    
    while((ch = getchar()) != EOF){
        if(ch == '\n')
            count++;
        putchar(ch);
    }

    printf("改行回数は%dです。\n",count);
    
    return 0;
}