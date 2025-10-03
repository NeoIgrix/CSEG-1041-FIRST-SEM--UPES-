// Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int arr[100], n, k, i;

    // Input the number of elements in the array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of positions to rotate
    printf("Enter the number of positions to rotate (k): ");
    scanf("%d", &k);

    // Normalize k to avoid unnecessary rotations
    k = k % n;

    // Rotate the array to the right by k positions
    int temp[100];
    for (i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Copy the rotated array back to the original array
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    // Output the rotated array
    printf("Array after rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
