// Print the initials of a name.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = 0;

    // Print initials
    printf("Initials: ");
    char *token = strtok(name, " ");
    while (token != NULL) {
        printf("%c. ", token[0]);
        token = strtok(NULL, " ");
    }
    printf("\n");

    return 0;
}
