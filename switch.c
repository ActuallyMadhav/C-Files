#include <stdio.h>

int main(){

    char grade;

    do{
        printf("\nEnter your grade: ");
        scanf(" %c", &grade);

        switch(grade){
            case 'A':
                printf("Perfect!");
                break;
            case 'B':
                printf("Well done!");
                break;
            case 'C':
                printf("Room for improvement!");
                break;
            case 'D':
                printf("Study harder!");
                break;
            case 'F':
                printf("You failed!");
                break;
            default:
                printf("Invalid grade!");
                break;
        }
    }while(1==1);

    return 0;
}