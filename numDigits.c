#include <stdio.h>

// Function to return the number of digits
int numDigits1(int num) {
    if (num == 0) return 1; // Special case: 0 has 1 digit

    int count = 0;
    while (num > 0) {
        count++;
        num /= 10; // Remove the last digit
    }
    return count;
}

// Function to return the number of digits using a pointer
void numDigits2(int num, int *result) {
    if (num == 0) {
        *result = 1;
        return;
    }

    int count = 0;
    while (num > 0) {
        count++;
        num /= 10; // Remove the last digit
    }
    *result = count;
}

int main() {
    int number, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);

    printf("numDigits1(): %d\n", numDigits1(number));

    numDigits2(number, &result);
    printf("numDigits2(): %d\n", result);

    return 0;
}
