#include <stdio.h>

int main(){

    double a, b, sum;

    printf("Enter 2 numbers: \n");
    scanf("%lf %lf", &a, &b);

    sum = a + b;

    printf("The sum is: %lf", sum);

    return 0;
}