#include <stdio.h>

int main(){
    float j = 0;
    printf("    int型     ");
    printf("   float型    ");
    putchar('\n');
    for(int i=0;i<=100;i++){
        printf(" x = %f ",(i / 100.0));
        printf(" x = %f ",j);
        putchar('\n');
        j+=0.01;
    }

    
}