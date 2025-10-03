// Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[100], n, i, element, position;

    // Input the number of elements in the array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    // Input the position at which to insert the element
    printf("Enter the position to insert the element (0 to %d): ", n);
    scanf("%d", &position);

    // Validate position
    if (position < 0 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
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
