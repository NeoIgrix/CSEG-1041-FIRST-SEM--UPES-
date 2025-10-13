// Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    char *token = strtok(str, " ");
    char *longest = token;

    while (token != NULL) {
        if (strlen(token) > strlen(longest)) {
            longest = token;
        }
        token = strtok(NULL, " ");
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
