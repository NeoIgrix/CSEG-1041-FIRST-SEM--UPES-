/*Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.*/

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

    int maxSum = 0;
    for (int i = 0; i <= n - k; i++) {
        int currentSum = 0;
        for (int j = i; j < i + k; j++) {
            currentSum += arr[j];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);
    return 0;
}
