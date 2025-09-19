 // Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2); // Recursive call
    }
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
    } else {
        printf("Binary: ");
        printBinary(num);
        printf("\n");
    }

    return 0;
}
