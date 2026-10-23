#include <stdio.h>

float float_add(){
    float result = 0.0;
    for(float i = 0.0; i<=1.0; i+=0.01)
        result += i;
    return result;
}

float int_add(){
    float result = 0;
    for(int i = 0; i<=100; i++)
        result += (i / 100.0);
    return result;
}

int main(){
    printf("float:%f\n",float_add());
    printf("int:%f\n",int_add());
    
    return 0;
}