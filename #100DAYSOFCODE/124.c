/*Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().*/

#include <stdio.h>

int main() {
    FILE *source, *dest;
    char source_filename[100], dest_filename[100];
    int ch;

   
    printf("Enter source file name: ");
    scanf("%s", source_filename);
    printf("Enter destination file name: ");
    scanf("%s", dest_filename);

   
    source = fopen(source_filename, "r");
    if (source == NULL) {
        perror("Error opening source file");
        return 1;
    }

    
    dest = fopen(dest_filename, "w");
    if (dest == NULL) {
        perror("Error opening destination file");
        fclose(source);
        return 1;
    }

   
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    
    fclose(source);
    fclose(dest);

    printf("File copied successfully.\n");
    return 0;

}
