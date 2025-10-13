// Multiply two matrices.

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter number of rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter number of rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Incompatible matrix dimensions.\n");
        return 0;
    }

    int matrix1[rows1][cols1];  // First matrix
    int matrix2[rows2][cols2];  // Second matrix
    int product[rows1][cols2];  // Product matrix

    // Reading elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Reading elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initializing product matrix
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }

    // Calculating the product of the two matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Printing the product matrix
    printf("The product of the two matrices is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
