/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
*/

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the size of the subarray: ");
    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {
        int maxElement = arr[i];
        for (int j = i; j < i + k; j++) {
            if (arr[j] > maxElement) {
                maxElement = arr[j];
            }
        }
        printf("%d", maxElement);
        if (i < n - k) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}
