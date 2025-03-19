#include <stdio.h>

int findMax(int num1, int num2){
    
    /*
    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
    */

   // alternative:

    return (num1 > num2)? num1 : num2;
}

int main(){

    int max = findMax(90, 500);

    printf("%d", max);

    return 0;
}