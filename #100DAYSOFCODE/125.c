/*Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.*/

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char new_line[256];

    // Get the filename from the user
    printf("Enter the filename to append to: ");
    scanf("%s", filename);

    // Open the file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Get the new line of text from the user
    printf("Enter a new line of text: ");
    getchar();  // Consume the newline character left by scanf
    fgets(new_line, sizeof(new_line), stdin);

    // Append the new line to the file
    fputs(new_line, file);

    // Close the file
    fclose(file);

    printf("Text appended successfully.\n");
    return 0;
}