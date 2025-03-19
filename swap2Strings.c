#include <stdio.h>
#include <string.h>

int main(){

    char x[15] = "water";
    char y[15] = "pee";

    printf("x = %s\n\n", x);
    printf("y = %s\n\n", y);

    char temp[15];

    strcpy(temp, x); 
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n\n", x);
    printf("y = %s\n\n", y);

    return 0;
}