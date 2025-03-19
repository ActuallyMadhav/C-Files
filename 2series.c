#include <stdio.h>

int main() {

// Function to calculate factorial
    double factorial(int n) {
        double fact = 1.0;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }

    double x; 
    double result = 0.0;
    printf("Enter a number: \n");
    scanf("%lf", &x);

    for (int i = 0; i <= 20; i++) {
        double term = 1.0;
        for (int j = 0; j < i; j++) {
            term *= x; // Compute x^i
        }
        term /= factorial(i); // Divide by i!
        
        if (i % 2 == 0) // Alternating signs
            result += term;
        else
            result -= term;
    }

    printf("Result = %.2f\n", result);
    return 0;
}