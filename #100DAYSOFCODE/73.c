// Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];  // Declaring a 2D array
    int rowSums[rows];        // Array to store sum of each row

    // Reading matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating the sum of each row
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0;  // Initialize sum for each row
        for (int j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }

    // Printing the sum of each row
    printf("The sum of each row is:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}
