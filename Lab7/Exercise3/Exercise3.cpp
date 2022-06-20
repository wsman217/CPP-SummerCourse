#include <iostream>

#define ARR_SIZE 5

int* myFunction(int arr[ARR_SIZE]) {
    int* arrPointer = arr;

    for (int i = 0; i < ARR_SIZE; i++) {
        *arrPointer = 10 + i;
        arrPointer++;
    }

    arrPointer = &arr[ARR_SIZE / 2];

    return arrPointer;
}

int main() {
    int arr[ARR_SIZE] = {};

    int* arrPointer = myFunction(arr);

    for (int i = 0; i < 3; i++) {
        std::cout << *arrPointer << " ";
        arrPointer++;
    }

    return 0;
}