// Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    int num, digit, max_count = 0;
    int count[10] = {0}; // Array to store count of each digit

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Count occurrences of each digit
    while (num != 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum count
    for (int i = 0; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            digit = i;
        }
    }

    printf("Digit %d occurs the most times: %d\n", digit, max_count);

    return 0;
}