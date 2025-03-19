#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c;

    printf("\nEnter side A: ");
    scanf("%lf", &a);
    printf("\nEnter side B: ");
    scanf("%lf", &b);

    c = sqrt((a*a)+(b*b));

    printf("\nHypotenuse C: %lf", c);

    return 0;
}
