#include<stdio.h>



void put_count(void){
    static int i;
    printf("put_count:%d回目",i);
    putchar('\n');
    i++;
}



int main(){
    for(int j=0;j<5;j++)
        put_count();

    return 0;
}