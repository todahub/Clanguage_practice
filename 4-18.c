#include<stdio.h>

int main(){
    int no;

    do{
        printf("正の整数を入力せよ:");
        scanf("%d",&no);
        
        if(no <= 0)
            puts("\a正でない数を入力しないでください。");   
    }while(no <= 0);

    for(int i = 1; i <= no / 5; i++){
        printf("*****");
        putchar('\n');
    }
    for(int i = 1; i <= no % 5; i++)
        putchar('*');
    putchar('\n');

    return 0;
}
    
    