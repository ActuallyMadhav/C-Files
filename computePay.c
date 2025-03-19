#include <stdio.h>

// Function to return gross pay
double computePay1(int noOfHours, int payRate) {
    double grossPay;
    if (noOfHours <= 160) {
        grossPay = noOfHours * payRate;
    } else {
        grossPay = (160 * payRate) + ((noOfHours - 160) * payRate * 1.5);
    }
    return grossPay;
}

// Function to return gross pay using a pointer
void computePay2(int noOfHours, int payRate, double *grossPay) {
    if (noOfHours <= 160) {
        *grossPay = noOfHours * payRate;
    } else {
        *grossPay = (160 * payRate) + ((noOfHours - 160) * payRate * 1.5);
    }
}

int main() {
    int noOfHours, payRate;
    double grossPay;

    printf("Enter number of hours: \n");
    scanf("%d", &noOfHours);
    printf("Enter hourly pay rate: \n");
    scanf("%d", &payRate);

    printf("computePay1(): %.2f\n", computePay1(noOfHours, payRate));

    computePay2(noOfHours, payRate, &grossPay);
    printf("computePay2(): %.2f\n", grossPay);

    return 0;
}