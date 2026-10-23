#include<stdio.h>

int main(){
    int matrix1[4][3],matrix2[3][4];
    int product[4][4] = {0};

    puts("1つ目の行列");
    for(int i=0;i<4;i++)
        for(int j=0;j<3;j++){
            printf("%d行%d列:",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
            putchar('\n');
    }

    puts("2つ目の行列");
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++){
            printf("%d行%d列:",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
            putchar('\n');
    }

    puts("1つ目の行列");
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            printf(" %d ",matrix1[i][j]);
        }
        putchar('\n');
    }

    puts("2つ目の行列");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf(" %d ",matrix2[i][j]);
        }
        putchar('\n');
    }
        
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<3;k++){
                product[i][j] +=  matrix1[i][k] * matrix2[k][j];   
            }
        }
    }

    puts("行列の積");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf(" %d ",product[i][j]);
        }
        putchar('\n');
    }
}