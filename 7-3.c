#include<stdio.h>

int count_bit(unsigned x){
    int bit = 0;
    
    while(x){
        if(x&1U)bit++;
        x >>= 1;
    }

    return bit;
}

int int_bit(){
    return count_bit(~0U);
}

void print_bit(unsigned x){
    for(int i = int_bit()-1; i >= 0; i--){
        putchar(((x>>i)&1U) ? '1' : '0');
    }
    putchar('\n');
}

unsigned rrotate(int n,unsigned x){
    int i = int_bit();
    return ((x >> n) | (x << (i - n)));   
}

unsigned lrotate(int n,unsigned x){
    int i = int_bit();
    return ((x << n) | (x >> (i - n)));   
}

int main(){
    unsigned x ;
    int no;
    printf("回転させる数を入力してください:"); scanf("%u",&x);
    printf("回転回数を入力してください:"); scanf("%d",&no);

    print_bit(x);
    print_bit(rrotate(no,x));
    print_bit(lrotate(no,x));

    return 0;
}


