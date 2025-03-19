
// this algorithm works for all data types. make sure to change the format specified accordingly!

#include <stdio.h>

void printArray(char array[], int size){
    for(int i = 0; i < size; i++){
        printf("%c ", array[i]);
    }
}

void sort(char array[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            if(array[j] > array[j+1]){
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main(){
    //int array[] = {8,6,4,32,4,5,7,8,8,5,4,3,3,5,7,9,8,6,4,3,32,4,6,544,3,5,6,543,3,5,6};
    char array[] = {'f', 'F', 'a' , 'B' , 'R' , 'd'};
    int len_array = sizeof(array)/sizeof(array[0]);

    sort(array, len_array);
    printArray(array, len_array);

    return 0;
}