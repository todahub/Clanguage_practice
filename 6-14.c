#include<stdio.h>

double a[10];

void print_array(const double ar[],int n){
    for(int i=0;i<n;i++)
        printf("%f ",ar[i]);
    putchar('\n');
}

int main(){
    static double b[10];

    print_array(a,10);
    print_array(b,10);

    return 0;
}