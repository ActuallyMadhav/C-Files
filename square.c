#include <stdio.h>

// Function to return the square using sum of odd numbers
int square1(int num) {
    int sum = 0;
    int odd = 1; // First odd number

    for (int i = 0; i < num; i++) {
        sum += odd;
        odd += 2; // Move to the next odd number
    }

    return sum;
    // or we can just return num * num ?!?!
}

// Function to return the square using a pointer
void square2(int num, int *result) {
    int sum = 0;
    int odd = 1; // First odd number

    for (int i = 0; i < num; i++) {
        sum += odd;
        odd += 2; // Move to the next odd number
    }

    *result = sum;
}

int main() {
    int number, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);

    printf("square1(): %d\n", square1(number));

    square2(number, &result);
    printf("square2(): %d\n", result);

    return 0;
}
