#include <stdio.h>

int main(){
    char *p = "ABC";

    printf("p = \"%s\"\n",p);

    p = "DEF" + 1;

    printf("p = \"%s\"\n",p);

    return 0;

}