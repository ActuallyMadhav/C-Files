#include <stdio.h>

double pow (double num1, double num2){
    double result = 1;
    for(int i = 1; i <= num2; i++){
        result = result * num1;
    }
    return result;
}

int main(){

    double value = pow(3.14159,4);
    printf("%lf", value);

    return 0;
}