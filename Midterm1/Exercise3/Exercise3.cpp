#include <iostream>

void myCompare(int arr1[5], int arr2[5]) {
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << (*ptr1 == *ptr2 ? "Equal\n" : "Unequal\n");
            ptr2++;
        }
        ptr1++;
        ptr2 -= 5;
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 0, 4, 5};

    myCompare(arr1, arr2);

    return 0;
}