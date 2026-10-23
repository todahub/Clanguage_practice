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

unsigned lrotate(unsigned x,int pos,int n){
    return (x<<(pos-1)) & (x >> (int_bit()-(pos + n -1)));
}
unsigned set_n(unsigned x,int pos,int n){
    return x | lrotate(~0U,pos,n);
}

unsigned reset_n(unsigned x,int pos,int n){
    return x & ~(lrotate(~0U,pos,n));
}

unsigned inverse_n(unsigned x,int pos, int n){
    return x ^ lrotate(~0U,pos,n);
}
int main (){
    unsigned x,pos,n;
    printf("符号なし整数Xを入力してください:"); scanf("%u",&x);
    printf("第posビットを入力してください:"); scanf("%d",&pos);
    printf("何ビットか入力してください:"); scanf("%d",&n);


    printf("元の値のビット配列:"); print_bit(x);
    printf("任意ビットのセット"); print_bit(set_n(x,pos,n));
    printf("任意ビットのリセット"); print_bit(reset_n(x,pos,n));
    printf("任意ビットの反転"); print_bit(inverse_n(x,pos,n));


}