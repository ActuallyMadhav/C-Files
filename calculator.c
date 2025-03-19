#include <stdio.h>
#include <math.h>

int main(){

    char operation;
    double num1, num2, output;

    printf("\nEnter the first number: ");
    scanf(" %lf", &num1);

    printf("\nEnter the operation (+), (-), (*), (/), (^): ");
    scanf(" %c", &operation);

    printf("\nEnter the second number: ");
    scanf(" %lf", &num2);

    switch(operation){
        case '+':
            output = num1 + num2;
            printf("\nResult = %lf", output);
            break;
        case '-':
            output = num1 - num2;
            printf("\nResult = %lf", output);
            break;
        case '*':
            output = num1 * num2;
            printf("\nResult = %lf", output);
            break;
        case '/':
            output = num1 / num2 ;
            printf("\nResult = %lf", output);
            break;
        case '^':
            output = pow(num1, num2);
            printf("\nResult = %lf", output);
            break;
        default:
            printf("Please enter one of the specified operations.");
    }

    return 0;
}