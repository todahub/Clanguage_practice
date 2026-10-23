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
    for(int i = int_bit(); i >= 0; i--){
        putchar((x>>i)&1U ? '1' : '0');
    }
    putchar('\n');
}

unsigned suraid_bit(unsigned x,unsigned i){
    return x>>i;  
}

unsigned suraid_bit2(unsigned x,unsigned i){
    int k=1;
    for(int j=0;j<i;j++)k*=2;
        return x/k;
}

int main(){
    
    int x;
    int i;

    printf ("元の整数を入力してください。");scanf("%d",&x);
    printf("シフトする回数を入れてください");scanf("%d",&i);

    print_bit(x);
    print_bit(suraid_bit(x,i));
    print_bit(suraid_bit2(x,i));

    return 0;
}