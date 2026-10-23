#include<stdio.h>

int main(){
    int month;

    printf("何月ですか:");
    scanf("%d",&month);

    switch(month){
        case 12:
        case 1:
        case 2: printf("%dは冬です。",month); break;
        case 3:
        case 4:
        case 5: printf("%dは春です。",month); break;
        case 6:
        case 7:
        case 8: printf("%dは夏です。",month); break;
        case 9:
        case 10:
        case 11: printf("%dは秋です。",month); break;
    }

    return 0;
    
}