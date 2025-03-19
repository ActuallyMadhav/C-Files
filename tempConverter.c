#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    double temp, output;

    printf("\nIs the temperature in (F) or (C): ");
    scanf(" %c", &unit);

    unit = toupper(unit);

    printf("\nEnter the temperature: ");
    scanf(" %lf", &temp);

    switch(unit){
        case 'C':
            output = (temp * 1.8) + 32;
            printf("\n%lf Fahrenheit", output);
            break;
        case 'F':
            output = (temp - 32) * (5.0/9.0);
            printf("\n%lf Celsius", output);
            break;
        default:
            printf("\nPlease enter valid temperature");
    }


    return 0;
}