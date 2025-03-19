#include <stdio.h>

int main(){
    int n;
    int a = 0;
    int b = 1;
    int next;
    int count = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonnaci Sequence: ");

    do{

        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
        count++;

    }while(count < n);

    return 0;
}