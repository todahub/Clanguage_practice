#include <stdio.h>

void decrement_date(int *y,int *m,int *d){
    if(*d == 1){
        if(*m == 1){
            *y -= 1; 
            *m = 12; 
            *d = 31;
        }
        else if(*m == 2 || *m == 4 || *m == 6 || *m == 9 || *m == 11){
            *m -= 1; 
            *d = 31;
        }
        else if(*m == 5 || *m == 7 || *m == 8|| *m == 10|| *m == 12){
            *m -= 1; 
            *d = 31;
        }
        else if(*m == 3){
            if(*y % 4 == 0){
                *m -= 1; 
                *d = 29;
            }
            else{
                *m -= 1; 
                *d = 28;
            }
        }
        
    }
    else
        *d -= 1;
}

void increment_date(int *y,int *m,int *d){
    if(*d == 31){
        if(*m == 12){
            *y += 1; 
            *m = 1; 
            *d = 1;
        }
        else{ 
            *m += 1; 
            *d = 1;
        }
        
    }
    else if(*d == 30){
        if(*m == 4 || *m == 6 || *m == 9 || *m == 11){
            *m += 1; 
            *d = 1;
        }
    }

    else if(*m == 2){
        if(*y % 4 == 0)
            if(*d == 29){
                *m += 1; 
                *d = 1;
            }
            else
                *d += 1;
        else
            if(*d == 28){
                *m += 1; 
                *d = 1;
            }
            else
                *d += 1;

    }
    else
        *d += 1;
}

int main(){
    int y,m,d,no;
    printf("年を入力してください:");
    scanf("%d",&y);

    printf("月を入力してください:");
    scanf("%d",&m);

    printf("日を入力してください:");
    scanf("%d",&d);

    printf("%d年%d月%d日\n",y,m,d);

    while(1){
    printf("1日前=> 1 : 1日後=> 0 ::");
    scanf("%d",&no);
    if(no == 1 || no == 0)
        break;
    else
        printf("1か0で入力してください\n");
    }
    if(no == 1)
        decrement_date(&y,&m,&d);
    else
        increment_date(&y,&m,&d);

    printf("%d年%d月%d日\n",y,m,d);
}