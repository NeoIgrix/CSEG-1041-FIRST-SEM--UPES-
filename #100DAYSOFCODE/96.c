// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    // Reverse the entire string
    reverseWord(str, str + strlen(str) - 1);

    // Reverse each word in the reversed string
    char *word_start = NULL;
    char *word_end = NULL;
    for (char *ptr = str; *ptr != '\0'; ptr++) {
        if (*ptr == ' ') {
            word_end = ptr - 1;
            if (word_start != NULL) {
                reverseWord(word_start, word_end);
            }
            word_start = NULL;
        } else if (word_start == NULL) {
            word_start = ptr;
        }
    }
    // Reverse the last word
    if (word_start != NULL) {
        reverseWord(word_start, str + strlen(str) - 1);
    }

    printf("Reversed sentence: %s\n", str);
    return 0;
}
