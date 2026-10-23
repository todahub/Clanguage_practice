#include <stdio.h>

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

unsigned set (unsigned x,int pos ){
    int set = 1U;
    set <<= (pos-1);
    return x | set;
}

unsigned reset (unsigned x ,int pos ){
    int set = ~1U;
    set <<= (pos-1);
    return x & set;
}

unsigned inverse (unsigned x,int pos ){
    int set = 1U;
    set <<= (pos-1);
    return x ^ set;
}

int main (){
    unsigned x,pos;
    printf("符号なし整数Xを入力してください:"); scanf("%u",&x);
    printf("第posビットを入力してください:"); scanf("%d",&pos);

    printf("元の値のビット配列:"); print_bit(x);
    printf("任意ビットのセット"); print_bit(set(x,pos));
    printf("任意ビットのリセット"); print_bit(reset(x,pos));
    printf("任意ビットの反転"); print_bit(inverse(x,pos));


}