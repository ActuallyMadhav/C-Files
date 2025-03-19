#include <stdio.h>
#include <math.h>

int main(){
    int times;
    double x1, x2, y1, y2;
    double distance;

    printf("Enter the number of times: \n");
    scanf("%d", &times);

    for(int i = 0; i < times; i++){
        printf("Enter first point x1 y1: \n");
        scanf("%lf %lf", &x1, &y1);

        printf("Enter second point x2 y2: \n");
        scanf("%lf %lf", &x2, &y2);

        distance = pow( ( pow( (x1-x2) , 2 ) + pow( (y1-y2) , 2 ) ) , 0.5 );
        printf("The distance is %.2f\n", distance);
    }
    return 0;
}