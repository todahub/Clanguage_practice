#include<stdio.h>

int main(){

    int no;

    do{
        printf("正の整数を入力せよ:");
        scanf("%d",&no);
        
        if(no <= 0)
            puts("\a正でない数を入力しないでください。");   
    }while(no <= 0);

    printf("%dは",no);

    int i = 0;

    while(no > 0){
        no /= 10;
        i++;
    }

    printf("%d桁です。\n",i);

    return 0;
}