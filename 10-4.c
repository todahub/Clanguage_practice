#include <stdio.h>

void set_idx(int *v,int n){
    for(int i = 0; i < n; i++)
        v[i] = i;
}

int main(){
    int a[10];
    for(int i = 0; i < 10; i++)
        printf("a[%d]=%d\n",i,a[i]);

    set_idx(a,10);

    for(int i = 0; i < 10; i++)
        printf("a[%d]=%d\n",i,a[i]);

    return 0;
}