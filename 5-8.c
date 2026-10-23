#include<stdio.h>

#define NUMBER 120

int main(){
    int number;
    int array[NUMBER];
    int bunpu[11] = {0};

    do{
        printf("人数を入力せよ："); scanf("%d",&number);

        if(number<1||number>NUMBER)
            printf("\a1~%dで入力せよ。\n",NUMBER);
    }while(number<1||number>NUMBER);

    printf("%d人の点数を入力せよ。\n",number);

    for(int i=0;i<number;i++){
        printf("%3d番：",i+1); 
        do{
            scanf("%d",&array[i]);
            if(array[i]<0||array[i]>100)
                printf("\a0~100で入力せよ：");
        }while(array[i]<0||array[i]>100);
        bunpu[array[i]/10]++;
    }

    int max = 0;
    for(int i=0;i<11;i++){
        if(max<bunpu[i])
            max = bunpu[i];
    }

    for(int i=0;i<=max;i++){
        for(int j=0;j<11;j++){
            if(bunpu[j]>max - i)
            printf(" * ");
            else   
                printf("   ");
        }
    putchar('\n');
    }
    for(int i=0;i<44;i++)
        putchar('-');
    putchar('\n');
    for(int i=0;i<11;i++)
        printf(" %d ",i * 10);
    putchar('\n');
    
    return 0;
}