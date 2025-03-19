#include <stdio.h>

// Function to compute GCD and return it
int gcd1(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

// Function to compute GCD and store the result in a pointer
void gcd2(int num1, int num2, int *result) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    *result = num1;
}

int main() {
    int x, y, result = -1;

    printf("Enter 2 numbers: \n");
    scanf("%d %d", &x, &y);

    printf("gcd1(): %d\n", gcd1(x, y));

    gcd2(x, y, &result);
    printf("gcd2(): %d\n", result);

    return 0;
}
