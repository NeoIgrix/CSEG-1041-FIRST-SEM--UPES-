/* Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    int ch, prev_char;
    long char_count = 0, word_count = 0, line_count = 0;
    int in_word = 0;

    file = fopen("input.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        char_count++;

        if (ch == '\n') {
            line_count++;
        }

        if (isspace(ch)) {
            if (in_word) {
                in_word = 0;
                word_count++;
            }
        } else {
            in_word = 1;
        }

        prev_char = ch;
    }

    // Count the last word if the file doesn't end with a newline
    if (in_word) {
        word_count++;
    }

    fclose(file);

    printf("Total characters: %ld\n", char_count);
    printf("Total words: %ld\n", word_count);
    printf("Total lines: %ld\n", line_count);

    return 0;
}