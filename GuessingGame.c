#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int answer, guess, tries;

    answer = rand() % 101;
    tries = 0;

    printf("\n*************NUMBER GUESSING GAME*************\n");



    do{
        printf("Enter a number from 0-100: \n");
        scanf("%d", &guess);
        tries++;

        if(guess > answer){
            printf("\nToo high! Try again\n");
        }
        else if(guess < answer){
            printf("\nToo low! Try again\n");         
        }
        else{
            printf("\nWell done! The number was %d! You took %d tries!\n", answer, tries);
            break;
        }
    }while(guess != answer);

    return 0;
}