// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;                  // extract last digit
    digits = (int)log10(n);         // number of digits - 1
    first = n / pow(10, digits);    // extract first digit

    // remove first and last digits, then rebuild number
    swapped = last * pow(10, digits) + (n % (int)pow(10, digits)) / 10 * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
