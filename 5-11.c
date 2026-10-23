#include<stdio.h>

int main(){
    int point[6][2] = {0};
    int sum1 = 0, sum2 = 0;

    puts("点数を入力せよ。");
    for(int i=0;i<6;i++){
        printf("%d人目：国語：",i+1);
        do{
            scanf("%d",&point[i][0]);
            if(point[i][0]<0||point[i][0]>100)
                printf("\a0~100で入力でよ：");
        }while(point[i][0]<0||point[i][0]>100);

        printf("%d人目：数学：",i+1);
        do{
            scanf("%d",&point[i][1]);
            if(point[i][1]<0||point[i][1]>100)
                printf("\a0~100で入力でよ：");
        }while(point[i][1]<0||point[i][1]>100);
        
        putchar('\n');
    }
    for(int i=0;i<6;i++){
        sum1 += point[i][0];
        sum2 += point[i][1];
    }

    printf("国語の合計：%d\n",sum1);
    printf("数学の合計：%d\n",sum2);
    printf("国語の平均：%d\n",sum1/6);
    printf("数学の平均：%d\n",sum2/6);

    for(int i=0;i<6;i++){
        int sum = 0;
        for(int j=0;j<2;j++){
            sum += point[i][j];
        }
        printf("%d人目の合計：%d\n",i+1,sum);
        printf("%d人目の平均：%d\n",i+1,sum/2);
    }

    return 0;
}