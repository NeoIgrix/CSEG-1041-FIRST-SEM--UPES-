/*Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved*/

#include <stdio.h>

int main() {
    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char name[100];
    int age;

    // Input user data
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data to file
    fprintf(file, "Name: %s", name);
    fprintf(file, "Age: %d\n", age);

    fclose(file);
    printf("Data successfully saved to info.txt\n");

    return 0;
}
