// Question 6:Write a program that takes a 4 × 4 matrix and finds the maximum element in each
//            row and each column. (Row max: 4 Marks, Column max: 4 Marks).


#include <stdio.h>

int main() {
    int matrix[4][4];
    int i, j;
    
    printf("Enter elements of 4x4 matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Enter element [%d][%d]:\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Display the matrix
    printf("\nMatrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Find max element in each row
    printf("\nMaximum element in each row:\n");
    for(i = 0; i < 4; i++) {
        int maxrow = matrix[i][0];
        for(j = 1; j < 4; j++) {
            if(matrix[i][j] > maxrow) {
                maxrow = matrix[i][j];
            }
        }
        printf("Row %d: %d\n", i+1,maxrow);
    }
    
    // Find max element in each column
    printf("\nMaximum element in each column:\n");
    for(j = 0; j < 4; j++) {
        int maxcol = matrix[0][j];
        for(i = 1; i < 4; i++) {
            if(matrix[i][j] > maxcol) {
                maxcol = matrix[i][j];
            }
        }
        printf("Column %d: %d\n", j+1,maxcol);
    }
    
    return 0;
}