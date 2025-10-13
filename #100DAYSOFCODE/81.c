// Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Counting characters
    while (str[count] != '\0') {
        count++;
    }

    // Exclude the newline character if present
    if (count > 0 && str[count - 1] == '\n') {
        count--;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}
