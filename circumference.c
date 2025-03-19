#include <stdio.h>
#include <math.h>

int main(){

    double radius;
    double pi = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    double area = pi * pow(radius, 2);
    double circumference = 2 * pi * radius;

    printf("The circumference is: %lf\n", circumference);
    printf("The area is: %lf", area);

    return 0;
}