// Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int isRotation(char *str1, char *str2) {
    // Check if lengths are different
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Concatenate str1 with itself
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of the concatenated string
    return strstr(temp, str2) != NULL;
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    if (isRotation(str1, str2)) {
        printf("Strings are rotations of each other.\n");
    } else {
        printf("Strings are not rotations of each other.\n");
    }

    return 0;
}
