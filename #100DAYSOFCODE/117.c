/*Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.*/

#include <stdio.h>

void mergeSortedArrays(int arr1[], int m, int arr2[], int n) {
    int merged[m + n];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy any remaining elements from either array
    while (i < m) {
        merged[k++] = arr1[i++];
    }
    while (j < n) {
        merged[k++] = arr2[j++];
    }

    // Print the merged array
    printf("Merged array: ");
    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
}

int main() {
    int m, n;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter elements of first array (sorted): ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter elements of second array (sorted): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    mergeSortedArrays(arr1, m, arr2, n);

    return 0;
}
