#include<stdio.h>

int main(){
    int tensu1[4][3] = {{91,63,78},{67,72,46},{89,34,53},{32,54,34}};
    int tensu2[4][3] = {{97,67,82},{73,43,46},{97,56,21},{85,46,35}};
    int tensu[2][4][3];

    for(int j=0;j<4;j++){
        for(int k=0;k<3;k++){
            tensu[0][j][k] = tensu1[j][k];
        }
    }
    for(int j=0;j<4;j++){
        for(int k=0;k<3;k++){
            tensu[1][j][k] = tensu2[j][k];
        }
    }
    
    printf("1回目の点数\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++)
            printf(" %3d",tensu1[i][j]);
        putchar('\n');
    }

    printf("2回目の点数\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++)
            printf(" %3d",tensu2[i][j]);
        putchar('\n');
    }

    printf("格納した点数\n");
    for(int k=0;k<2;k++){
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++)
                printf(" %3d",tensu[k][i][j]);
            putchar('\n');
        }
        putchar('\n');
    }
    
}