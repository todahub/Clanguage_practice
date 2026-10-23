#include<stdio.h>

int main(){
    int no;

    printf("nの値：");
    scanf("%d",&no);

    if(no >= 1){
        for(int i = 1; i <= no; i++){
            printf("%dの2乗は%d", i, i * i );
            putchar('\n');
        }
    }
    else{
        for(int i = 0; i <= -no + 1; i++){
            printf("%dの2乗は%d", no + i, (no + i)*(no + i));
            putchar('\n');
        }
    }
}