/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    for (i = 3; i >= 1; i--) {
        for (k = 1; k <= i; k++) {
            printf("*\n");
        }
        if (i != 1) { // Avoid extra newline after the last group
            printf("\n");
        }
    }
    return 0;
}
