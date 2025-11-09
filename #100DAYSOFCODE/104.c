/*Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.*/

#include <stdio.h>

int findPivot(int n) {
    int leftSum = 0;
    int rightSum = n * (n + 1) / 2;  // Total sum from 1 to n

    for (int x = 1; x <= n; x++) {
        leftSum += x - 1;  // Sum from 1 to x-1
        rightSum -= x;     // Sum from x to n

        if (leftSum == rightSum) {
            return x;
        }
    }

    return -1;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int pivot = findPivot(n);
    if (pivot != -1) {
        printf("Pivot integer is %d\n", pivot);
    } else {
        printf("No pivot integer found\n");
    }

    return 0;
}