/* Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt. */

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input_file, *output_file;
    int ch;

    
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        perror("Error opening input file");
        return 1;
    }

    
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        perror("Error opening output file");
        fclose(input_file);
        return 1;
    }

    
    while ((ch = fgetc(input_file)) != EOF) {
        fputc(toupper(ch), output_file);
    }

   
    fclose(input_file);
    fclose(output_file);

    printf("Text converted to uppercase and written to output.txt\n");
    return 0;

}
