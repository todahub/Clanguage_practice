#include<stdio.h>

void alert(int n){
    for(int i=0;i<n;i++){
        putchar('\a');
        putchar('\n');
    }
}

int main(){
    int n;
    printf("n:"); scanf("%d",&n);

    alert(n);
    
    return 0;
}