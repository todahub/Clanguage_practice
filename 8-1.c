#include <stdio.h>

#define diff(x,y) (x < y ? (y - x) : (x - y))

int main(){
    int x,y;

    printf("値x：");
    scanf("%d",&x);

    printf("値y：");
    scanf("%d",&y);
    
    printf("xとyの差は%dです\n",diff(x,y));

    return 0;
}