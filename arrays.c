#include <stdio.h>

// int main(){

//     double prices[6] = {5.0 , 10.0 , 15.0 , 20.0 , 25.0}; 

//     //printf("%lf %lf %lf", prices[0], prices[2], prices[4]);
//     printf("$%.2lf", prices[1]);

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////

// ARRAY ITERATION

int main(){

    double prices[] = {5, 10, 30, 234, 322, 1234, 34};
    int lenPrices = sizeof(prices)/sizeof(prices[0]);

    for(int i = 0; i < lenPrices; i++){
        printf("\n$%.2lf", prices[i]);
    }

    return 0;
}

