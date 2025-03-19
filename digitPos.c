#include <stdio.h>

// Function to return the position of the first occurrence of a digit
int digitPos1(int num, int digit) {
    int position = 1; // Start counting from 1 (rightmost digit)
    
    while (num > 0) {
        if (num % 10 == digit) {
            return position; // Found the digit
        }
        num /= 10;
        position++;
    }
    
    return 0; // Digit not found
}

// Function to return the position through a pointer
void digitPos2(int num, int digit, int *result) {
    int position = 1; // Start counting from 1 (rightmost digit)
    
    while (num > 0) {
        if (num % 10 == digit) {
            *result = position;
            return;
        }
        num /= 10;
        position++;
    }
    
    *result = 0; // Digit not found
}

int main() {
    int number, digit, result = 0;
    
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("Enter the digit: \n");
    scanf("%d", &digit);
    
    printf("digitPos1(): %d\n", digitPos1(number, digit));
    
    digitPos2(number, digit, &result);
    printf("digitPos2(): %d\n", result);
    
    return 0;
}
