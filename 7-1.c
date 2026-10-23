#include<stdio.h>

int main(){
    int n;

    printf("sizeof1:%zu",sizeof 1);
    putchar('\n');
    printf("sizeof+1:%zu",sizeof +1);
    putchar('\n');
    printf("sizeof-1:%zu",sizeof -1);
    putchar('\n');
    printf("型指定せずに定義された変数はint型になる。\nint型は4ビットの記憶領域を持つ");
    putchar('\n');
    putchar('\n');
    printf("sizeof(unsigned)-1:%zu",sizeof (unsigned)-1);
    putchar('\n');
    printf("sizeof(double)-1:%zu",sizeof (double)-1);
    putchar('\n');
    printf("sizeof((double)-1):%zu",sizeof ((double)-1));
    putchar('\n');
    printf("unsigndはunsignd intのことになるため４ビットそこから-1がされている。\ndoubulは8ビットの記憶領域を持つ。");
    putchar('\n');
    putchar('\n');
    printf("sizeofn+2:%zu",sizeof n+2);
    putchar('\n');
    printf("sizeof(n+2):%zu",sizeof (n+2));
    putchar('\n');
    printf("sizeof(n+2.0):%zu",sizeof (n+2.0));
    putchar('\n');
    printf("n+2.0nが暗黙の型変換でdoubleに変わるため８ビットとなる。");
    putchar('\n');

    return 0;
}