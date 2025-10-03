// Find the second largest element in an array.

#include <stdio.h>

int main() {
    int arr[100], n, i, largest, second_largest;

    // Input the number of elements in the array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second_largest
    largest = second_largest = -1;

    // Find the largest and second largest elements
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest != -1) {
        printf("The second largest element is: %d\n", second_largest);
    } else {
        printf("No second largest element found.\n");
    }

    return 0;
}