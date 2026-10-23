#include <stdio.h>

enum season {Spring,Summer,Autumm,Winter,Invalid};

void spring(){
    puts("春");
}

void summer(){
    puts("夏");
}

void autumm(){
    puts("秋");
}

void winter(){
    puts("冬");
}

enum season japanese(){
    int tep;

    do{
        printf("0=>春　　1=>夏　　2=>秋　　3=>冬　　4=>終了");
        scanf("%d",&tep);
    }while(tep < Spring || Invalid < tep);

    return tep;
}
int main(){
    enum season selected;

    do{
        switch(selected = japanese()){
            case Spring : spring(); break;
            case Summer : summer();break;
            case Autumm : autumm();break;
            case Winter : winter();break;
            case Invalid : ; break;
        }
    }while(selected != Invalid);

    return 0;

}