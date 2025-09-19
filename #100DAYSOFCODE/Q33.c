// A number is called an Armstrong number (or narcissistic number) if the sum of its digits raised to the power of the number of digits equals the number itself.
// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Compute sum of each digit raised to power n
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    // Check Armstrong condition
    if ((int)result == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
