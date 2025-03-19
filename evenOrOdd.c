// #include <stdio.h>
// int main(){

//     int num;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     if(num % 2 == 0){
//         printf("%d is even", num);
//     }
//     else{
//         printf("%d is odd", num);
//     }

//     return 0;
// }

#include <stdio.h>

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is even", num) : printf("%d is odd", num); // ternary operator --> (condition) ? <if true> : <if false> ;

    return 0;
}