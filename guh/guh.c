#include <stdio.h>

int main() {
    int numMatrices = 3; // Fixed number of matrices
    int matrixSize;

    printf("Enter the size of the matrices (e.g., 2 for 2x2): ");
    scanf("%d", &matrixSize);

    int matrices[3][matrixSize][matrixSize];
    int product[matrixSize][matrixSize];

    // Input the matrices
    for (int m = 0; m < numMatrices; m++) {
        printf("Enter elements for Matrix %d (%dx%d):\n", m + 1, matrixSize, matrixSize);
        for (int row = 0; row < matrixSize; row++) {
            for (int col = 0; col < matrixSize; col++) {
                scanf("%d", &matrices[m][row][col]);
            }
        }
    }

    // Initialize the product matrix with the first matrix
    for (int row = 0; row < matrixSize; row++) {
        for (int col = 0; col < matrixSize; col++) {
            product[row][col] = matrices[0][row][col];
        }
    }

    // Perform matrix multiplication for the remaining matrices
    for (int m = 1; m < numMatrices; m++) {
        int updatedProduct[matrixSize][matrixSize]; // Initialize matrix for this iteration

        for (int i = 0; i < matrixSize; i++) {
            for (int j = 0; j < matrixSize; j++) {
                updatedProduct[i][j] = 0; // Initialize the element to zero
                for (int k = 0; k < matrixSize; k++) {
                    updatedProduct[i][j] += product[i][k] * matrices[m][k][j];
                }
            }
        }

        // Update the product matrix with the result of the current multiplication
        for (int i = 0; i < matrixSize; i++) {
            for (int j = 0; j < matrixSize; j++) {
                product[i][j] = updatedProduct[i][j];
            }
        }
    }

    // Print the result (product matrix)
    printf("Resultant Matrix (Product):\n");
    for (int row = 0; row < matrixSize; row++) {
        for (int col = 0; col < matrixSize; col++) {
            printf("%d ", product[row][col]);
        }
        printf("\n");
    }

    return 0;
}
