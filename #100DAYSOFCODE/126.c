/*Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.*/

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    int ch;

    
    printf("Enter the filename to read: ");
    scanf("%s", filename);

   
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

   
    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

   
    fclose(file);
    return 0;

}
