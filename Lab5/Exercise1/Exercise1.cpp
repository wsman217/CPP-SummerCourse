#include <iostream>

void transposeMatrix(int outputMatrix[4][2]) {
    int tempMatrix[2][4];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Enter matrix[%d][%d]: ", i, j);
            std::cin >> tempMatrix[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            outputMatrix[j][i] = tempMatrix[i][j];
        }
    }
}

void printMatrix(int matrix[4][2]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    int matrix[4][2];

    transposeMatrix(matrix);
    printMatrix(matrix);

    return 0;
}