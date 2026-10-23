#include<stdio.h>

int main(){
    int low, high, span;

    do{
        printf("何センチから:");
        scanf("%d",&low);

        printf("何センチまで:");
        scanf("%d",&high);

        printf("何センチごと:");
        scanf("%d",&span);
        
        if(low <= 0 || high <= 0 || span <= 0)
            puts("\a正でない数を入力しないでください。");   
    }while(low <= 0 || high <= 0 || span <= 0);

    while(low <= high){
        printf("%3dcm",low); printf(" %3.2fkg",((double)low - 100) * 0.9);
        putchar('\n');
        low += span;
    }

    return 0;

}