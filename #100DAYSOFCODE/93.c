// Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    // Check if lengths are different
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams\n");
        return 0;
    }

    // Sort both strings
    char temp;
    for (int i = 0; i < strlen(str1) - 1; i++) {
        for (int j = i + 1; j < strlen(str1); j++) {
            if (str1[i] > str1[j]) {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }
    for (int i = 0; i < strlen(str2) - 1; i++) {
        for (int j = i + 1; j < strlen(str2); j++) {
            if (str2[i] > str2[j]) {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    // Compare sorted strings
    if (strcmp(str1, str2) == 0) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
