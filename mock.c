#include <stdio.h>

int main(){

    int r0 = 0;
    int r1 = -5;

    while(r1 <= 1){
        r0 = r0 + r1;
        r1 = r1 + 2;
    }
    r0 = r0 + r1;

    printf("%d", r0);

    return 0;
}