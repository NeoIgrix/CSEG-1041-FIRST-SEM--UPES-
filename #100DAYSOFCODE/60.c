// Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int positive_count = 0, negative_count = 0, zero_count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("Positive numbers count: %d\n", positive_count);
    printf("Negative numbers count: %d\n", negative_count);
    printf("Zero count: %d\n", zero_count);

    return 0;
}