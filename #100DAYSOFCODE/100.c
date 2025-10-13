// Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    int len = strlen(str);
    printf("Sub-strings of the string are:\n");
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j <= len; j++) {
            char sub[100];
            strncpy(sub, str + i, j - i);
            sub[j - i] = '\0';
            printf("%s\n", sub);
        }
    }

    return 0;
}
