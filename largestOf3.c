#include <stdio.h>

int main(){

    int a, b, c;
    int largest;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;
    if(b > a){
        largest = b;
    }
    else if(c > b){
        largest = c;
    }

    printf("The largest number is: %d", largest);

    return 0;
}