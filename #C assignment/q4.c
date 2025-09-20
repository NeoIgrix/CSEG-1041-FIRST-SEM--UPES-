// Question 4: Write a program to input two 3 × 3 matrices. Perform and display:
//Matrix addition [2 Marks]
//Matrix subtraction [2 Marks]
//Matrix multiplication [4 Marks]


#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3];
    int add[3][3], sub[3][3], multiply[3][3];
    int i, j, k;
    
    // Inputs for first matrix
    printf("Enter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]:\n", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // Inputs for second matrix
    printf("\nEnter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]:\n", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Addition
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
           add[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Subtraction
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sub[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    
    // Multiplication
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            multiply[i][j] = 0;
            for(k = 0; k < 3; k++) {
                multiply[i][j] = multiply[i][j] + (matrix1[i][k] * matrix2[k][j]);
            }
        }
    }
    
    // Displays first matrix
    printf("\nFirst Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    
    // Displays second matrix
    printf("\nSecond Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    
    // Displays addition 
    printf("\nMatrix Addition:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
    
    // Displays subtraction 
    printf("\nMatrix Subtraction:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t",sub[i][j]);
        }
        printf("\n");
    }
    
    // Displays multiplication 
    printf("\nMatrix Multiplication:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t",multiply[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}