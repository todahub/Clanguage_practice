#include<stdio.h>

void reverse_araay(int v[],int n){
    int ar;
    for(int i=0;i<n/2;i++){
        ar = v[i];
        v[i] = v[(n-1)-i];
        v[(n-1)-i] = ar;
    }
}

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
        printf("%d ",array[i]);
    putchar('\n');

    reverse_araay(array,10);

    for(int i=0;i<10;i++)
        printf("%d ",array[i]);
    putchar('\n');

    return 0;
}