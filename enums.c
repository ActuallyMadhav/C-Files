#include <stdio.h>

enum Day{Sun = 1, Mon, Tue, Wed, Thu, Fri, Sat};

int main(){

    //enum = enumeration
    //User defined type of named integer identifiers to make program more readable

    enum Day today = Sun;

    // printf("%d", today);

    if(today == Sun || today == Sat){
        printf("\nIt's the weekend");
    }
    else{
        printf("\nIts a weekday");
    }

    return 0;
}