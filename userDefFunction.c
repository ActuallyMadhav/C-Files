#include <stdio.h>

void hbd();

int main(){

    char name[] = "Madhav";
    int age = 20;

    hbd(name, age);

    return 0;
}

void hbd(char name[], int age){
    printf("\nHappy birthday %s!", name);
    printf("\nYou are %d years old!", age);
}