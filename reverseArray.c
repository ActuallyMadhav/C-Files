#include <stdio.h>

void reverse1D (int arr[], int size);

int main(){

    int arr[] = { 1, 2, 3, 4, 5};
    int lenArray = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < lenArray; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverse1D(arr, lenArray);
    for(int i = 0; i < lenArray; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

// THIS ONE USES XOR TO SWAP

// void reverse1D(int arr[], int size){
//     for(int i = 0; i < size/2 ; i++){
//         arr[i] = arr[i] ^ arr[size-i-1];
//         arr[size-i-1] = arr[i] ^ arr[size-i-1];
//         arr[i] = arr[i] ^ arr[size-i-1];
//     }
// }

// THIS ONE USES TEMP VAR TO SWAP

void reverse1D(int arr[], int size){
    for(int i = 0; i < size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}