#include <stdio.h>

#define NUMBER 5

void bsort(int a[], int n){
    for(int i = 0;i < n-1; i++)
        for(int j = 0; j < n-1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
}

int main(){
    int student[NUMBER];

    printf("%d人の身長を入力してください。\n",NUMBER);
    for(int i = 0; i < NUMBER; i++){
        printf("%2d人目：",i+1);
        scanf("%d",&student[i]);
    }
    
    bsort(student,NUMBER);
    puts("昇順にソートしました。");
    for(int i = 0; i < NUMBER; i++){
        printf("%2d番目：%d\n",i+1,student[i]);
    }

    return 0;
}