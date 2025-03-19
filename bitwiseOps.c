#include <stdio.h>

int main(){

    // & = AND
    // | = OR
    // ^ = XOR
    // << = Left Shift
    // >> = Right Shift

    int x = 6;   // 6 = 00000110
    int y = 12;  //12 = 00001100
    int z = 0;   // 0 = 00000000

    z = x & y; // z = 00000100 => 4
    printf("\nAND = %d", z);

    z = x | y; // z = 00001110 => 14
    printf("\nOR = %d", z);

    z = x ^ y; // z = 00001010 => 10
    printf("\nXOR = %d", z);

    z = x << 1; // z = 00001100 => 12
    printf("\nLeft Shift = %d", z);

    z = x >> 1; // z = 00000011 => 3
    printf("\nRight Shift = %d", z); 

    return 0;
}