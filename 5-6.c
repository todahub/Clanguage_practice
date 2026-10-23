#include<stdio.h>

#define NUMBER 50

int main(){
    int number;
    int array[NUMBER];

    do{
        printf("データ数："); scanf("%d",&number);

        if(number<1||number>NUMBER)
            printf("\a1~%dで入力せよ。\n",NUMBER);
    }while(number<1||number>NUMBER);

    for(int i=0;i<number;i++){
        printf("%2d番：",i+1); scanf("%d",&array[i]);
    }

    printf("{");
    for(int i=0;i<number-1;i++)
        printf("%d,",array[i]);
    printf("%d}\n",array[number-1]);

    return 0;
}