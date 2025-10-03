// Delete an element from an array

#include <stdio.h>

int main() {
    int arr[100], n, i, element;

    // Input the number of elements in the array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to be deleted
    printf("Enter the element to be deleted: ");
    scanf("%d", &element);

    // Find the element and shift elements to the left
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            // Shift elements to the left
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--; // Decrease the size of the array
            i--; // Check the same index again
        }
    }

    // Output the updated array
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}