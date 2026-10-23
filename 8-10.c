#include <stdio.h>

void count_num(int ch,int count[]){
    printf("数を入力してください：");
    while((ch = getchar()) != EOF){
        for(int i = 0; i < 10; i++){
            if(ch == '0' + i)
                count[i]++;
        }
    }
}

void print_graph(int count[]){
    for(int i = 9; i >= 0; i--){
        printf("%d :",i);
        for(int j = count[i]; j > 0; j--)
            putchar('*');
        putchar('\n');
    }
}

int main(){
    int ch;
    int count[10] = {0};

    count_num(ch,count);
    print_graph(count);

    return 0;
}