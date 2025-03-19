#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Madhav";
    char string2[] = "Madhav";

    //strrev(string1);
    //int result = strlen(string1);
    int result = strcmp(string1, string2);

    printf("%d", result);


    //printf("\n%s", string1);
    //printf("\n%s", string2);

    return 0;
}