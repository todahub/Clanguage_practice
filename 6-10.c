#include<stdio.h>

void reverse_array2(const int v[],int w[],int n){
    for(int i=0;i<n;i++)
        w[i]=v[(n-1)-i];
}

int main(){
    int array1[10] = {1,2,3,4,5,6,7,8,9,10};
    int array2[10];
    
    reverse_array2(array1,array2,10);

    for(int i=0;i<10;i++)
        printf("%d ",array1[i]);
    putchar('\n');

    for(int i=0;i<10;i++)
        printf("%d ",array2[i]);
    putchar('\n');

    return 0;
}