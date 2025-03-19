#include <stdio.h>

int main(){

    int num;
    int temp;
    int new = 0;

    printf("Enter a number: ");
    scanf("%d" , &num);

    while(num > 0){
        temp = num % 10;
        new = new*10 + temp;
        num = num / 10;
    }

    printf("Reversed number: %d" , new);

    return 0;
}