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

unsigned addition(unsigned x,unsigned y){
    return x + y;
}

int main(){
    unsigned x,y;

    printf("unsigned型は%dビットの領域を持ちます。",int_bit());

    printf("正の整数を2つ入力してください\n");
    printf("xつ目："); scanf("%u",&x);
    printf("yつ目："); scanf("%u",&y);

    printf("x + y = ");
    printf("%u",(x+y));
    putchar('\n');
    print_bit(addition(x,y));


}