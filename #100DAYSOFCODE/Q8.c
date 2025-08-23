// Q8:Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, y;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    y = n * (n + 1) / 2;
    printf("The sum of the first %d natural numbers is %d\n", n, y);
    return 0;
}