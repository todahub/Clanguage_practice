#include<stdio.h>

int main(){
    printf("   | ");
    for(int i = 1; i < 10; i++)
        printf("%2d ",i);
    putchar('\n');
    
    printf("---+");
    for(int i = 0; i < 28; i++)
        printf("-");
    putchar('\n');

    for(int i = 1; i <= 9; i++){
        printf(" %d | ",i);
        int no = i;
        for(int f = 1; f <= 9; f++)
            printf("%2d ",no * f);
        putchar('\n');
    }

    return 0;
}