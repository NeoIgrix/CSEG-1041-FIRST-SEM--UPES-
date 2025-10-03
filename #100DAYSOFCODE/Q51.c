/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345*/

#include <stdio.h>

int main() {
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= 5; j++) {
            if (j >= i) {
                printf("%d", j);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}