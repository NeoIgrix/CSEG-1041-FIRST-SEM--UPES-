// Merge two arrays.

#include <stdio.h>

int main() {
    int n1, n2, n3, i, j;

    // Input sizes
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    n3 = n1 + n2; // merged array size
    int arr1[n1], arr2[n2], merged[n3];

    // Input first array
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Copy first array to merged
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array to merged
    for (j = 0; j < n2; j++) {
        merged[i] = arr2[j];
        i++;
    }

    // Output merged array
    printf("Merged array:\n");
    for (i = 0; i < n3; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
