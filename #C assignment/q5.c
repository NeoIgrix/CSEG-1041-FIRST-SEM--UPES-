// Question 5: Write a program to find the transpose of a given 3 × 3 matrix.[4 marks]
#include <stdio.h>

int main() {
    int matrix[3][3];
    int transpose[3][3];
    int i, j;
    
    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]:\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate transpose
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    // Display original matrix
    printf("\nOriginal Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Display transpose matrix
    printf("\nTranspose Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}