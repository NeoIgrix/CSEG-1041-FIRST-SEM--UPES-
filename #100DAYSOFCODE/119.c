/*Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.*/

#include <stdio.h>

int findRepeatedElement(int arr[], int n) {
    int seen[n];
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]]) {
            return arr[i];
        }
        seen[arr[i]] = 1;
    }
    return -1;  // Should never reach here if input is valid
}

int main() {
    int n;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array (one repeated): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int repeated = findRepeatedElement(arr, n);
    printf("Repeated element: %d\n", repeated);

    return 0;
}
