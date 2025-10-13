// Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];  // Declaring a 2D array

    // Reading matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating the sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}
