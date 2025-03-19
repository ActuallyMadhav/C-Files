#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int num;
    bool isPrime = true;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1){
        isPrime = false;
    }
    else{
        for(int i = 2 ; i < sqrt(num) ; i++){
            if(num % i == 0){
                isPrime = false;
                break;
            }
        }
    }

    isPrime ? printf("%d is Prime", num) : printf("%d is NOT Prime", num);


    return 0;
}