// Write a program to find the product of odd digits of a number

#include <stdio.h>

int main() {
    int n, digit, product = 1;
    int Odd = 0;  // flag to check if odd digit exists

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;   // extract last digit
        if (digit % 2 == 1) {
            product *= digit;
            Odd = 1;     // mark that odd digit exists
        }
        n /= 10;          // remove last digit
    }

    if (Odd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found in the number.\n");

    return 0;
}
