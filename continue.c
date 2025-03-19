#include <stdio.h>

int main(){

    for (int i = 0; i<= 15; i++){
        if(i == 13){
            continue;
        }
        else{
            printf("\n%d\n", i);
        }
    }
    return 0;
}
