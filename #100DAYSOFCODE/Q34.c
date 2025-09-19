// Write a program to check if a number is prime.


#include <stdio.h>

int main() {
    int num, i, Prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            Prime = 0;
            break;
        }
    }
    if (Prime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
