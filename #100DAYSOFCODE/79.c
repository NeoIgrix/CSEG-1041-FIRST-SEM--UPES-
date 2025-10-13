// Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int rows, cols;

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

    printf("Diagonal traversal of the matrix is:\n");

    // Diagonal traversal
    for (int col = 0; col < cols; col++) {
        int startCol = col;
        int startRow = 0;

        while (startCol >= 0 && startRow < rows) {
            printf("%d ", matrix[startRow][startCol]);
            startCol--;
            startRow++;
        }
    }

    for (int row = 1; row < rows; row++) {
        int startCol = cols - 1;
        int startRow = row;

        while (startCol >= 0 && startRow < rows) {
            printf("%d ", matrix[startRow][startCol]);
            startCol--;
            startRow++;
        }
    }

    printf("\n");

    return 0;
}
