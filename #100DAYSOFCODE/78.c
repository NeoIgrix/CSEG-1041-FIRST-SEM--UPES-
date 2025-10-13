// Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Matrix is not square.\n");
        return 0;
    }

    int matrix[rows][cols];  // Declaring a 2D array
    int sum = 0;              // Variable to store the sum of diagonal elements

    // Reading matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating the sum of main diagonal elements
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}
