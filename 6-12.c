#include<stdio.h>

void matrix_mul(const int m1[4][3],const int m2[3][4],int p[4][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<3;k++){
                p[i][j] +=  m1[i][k] * m2[k][j];   
            }
        }
    }
}

void print_array3(const int array[][3],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            printf(" %d ",array[i][j]);
        }
        putchar('\n');
    }
}

void print_array4(const int array[][4],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            printf(" %d ",array[i][j]);
        }
        putchar('\n');
    }
}

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
    print_array3(matrix1,4);

    puts("2つ目の行列");
    print_array4(matrix2,3);

    matrix_mul(matrix1,matrix2,product);

    puts("行列の積");
    print_array4(product,4);
}