#include<stdio.h>

int min_array(const int v[],int n){
    int max = v[0];
    for(int i=0;i<n;i++)
        max = max > v[i] ? v[i] : max;

    return max;
}

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",min_array(array,10));
    return 0;
}