/*Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number*/

#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int total = (n * (n + 1)) / 2;  // Sum of first n natural numbers
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    return total - sum;
}

int main() {
    int n;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter elements of array (0 to %d, one missing): ", n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int missing = findMissingNumber(arr, n);
    printf("Missing number: %d\n", missing);

    return 0;
}
