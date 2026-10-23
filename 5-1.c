#include<stdio.h>

int main(){
    int array[5];

    for(int i=0;i<5;i++)
        array[i] = i;

    for(int i=0;i<5;i++)
        printf("a[%d] = %d\n", i, array[i]);

    return 0;
}