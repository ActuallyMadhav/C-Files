#include <stdio.h>
#include <string.h>

void reverse(char *str){
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;

    while (start < end){
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main(){

    char str[100];
    printf("Original string:");
    fgets(str, 100, stdin);
    reverse(str);
    printf("\nReversed string: %s", str);

    return 0;
}