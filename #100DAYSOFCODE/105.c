/*Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.*/

#include <stdio.h>

int findMajorityElement(int nums[], int size) {
    int count = 0;
    int candidate = -1;

    // Find candidate for majority element
    for (int i = 0; i < size; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        count += (nums[i] == candidate) ? 1 : -1;
    }

    // Verify if candidate is actually the majority element
    count = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    return (count > size / 2) ? candidate : -1;
}

int main() {
    int nums[] = {3, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);
    int majorityElement = findMajorityElement(nums, size);

    if (majorityElement != -1) {
        printf("Majority element is %d\n", majorityElement);
    } else {
        printf("No majority element found\n");
    }

    return 0;
}