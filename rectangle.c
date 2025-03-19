#include <stdio.h>

int main(){
    int rows, cols;
    char symbol;

    printf("\nEnter number of rows: ");
    scanf("%d", &rows);
    printf("\nEnter number of columns: ");
    scanf("%d", &cols);
    printf("\nEnter your special character: ");
    scanf(" %c", &symbol);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }
    return 0;
}