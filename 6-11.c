#include<stdio.h>


int search_idx(const int v[],int idx[],int n, int key){
    int m = 0;

    for(int i=0;i<n;i++){
        if(v[i] == key){
            idx[m] = i;
            m++;
        }
    }
    return m;
}

int main(){
    int array1[10]={1,2,6,1,3,4,6,7,3,1,};
    int array2[10]={0};

    printf("等しい要素は%d個",search_idx(array1,array2,10,1));
    for(int i=0;i<10;i++)
        printf("%d ",array2[i]);
    putchar('\n');

    return 0;
}