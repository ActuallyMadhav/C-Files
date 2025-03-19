#include <stdio.h>

int main(){

    int x = 1;
    int y = 2;

    printf("x: %d\n", x);
    printf("y: %d\n", y);

    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}