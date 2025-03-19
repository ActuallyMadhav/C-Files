#include <stdio.h>
#include <string.h>

int main(){
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    int len_cars = sizeof(cars)/sizeof(cars[0]);

    for(int i = 0; i < len_cars; i++){
        printf("%s\n", cars[i]);
    }

    printf("\n\n\n");

    // to change cars[0] = "Tesla", use strcpy() from <string.h>

    strcpy(cars[0], "Tesla");

    for(int i = 0; i < len_cars; i++){
        printf("%s\n", cars[i]);
    }
}