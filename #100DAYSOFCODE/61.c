// Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index: %d\n", i);
            return 0;
        }
    }

    printf("Element not found\n");
    return 0;
}