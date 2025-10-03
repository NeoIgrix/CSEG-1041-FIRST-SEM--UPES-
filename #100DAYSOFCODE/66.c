// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int arr[100], n, i, element, position;

    // Input the number of elements in the array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input the sorted array elements
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    // Find the position to insert the new element
    position = n; // Default position is at the end
    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            position = i;
            break;
        }
    }

    // Shift elements to the right to make space for the new element
    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the found position
    arr[position] = element;
    n++; // Increase the size of the array

    // Output the updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}