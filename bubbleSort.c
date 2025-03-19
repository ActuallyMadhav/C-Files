#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    printf("\nSorted Array: ");

    for(int k = 0; k < size; k++){
        printf("%d ", array[k]);
    }
}

int main(){
    srand(time(0));

    const int SIZE = 20;
    int array[SIZE];

    for(int m = 0; m < SIZE; m++){
        int array_elements = rand() % 101;
        array[m] = array_elements;
    }

    printf("Unsorted Array: ");

    for(int n = 0; n < SIZE; n++){
        printf("%d ", array[n]);
    }

    int lenArray = sizeof(array)/sizeof(array[0]);

    bubbleSort(array, lenArray);
}