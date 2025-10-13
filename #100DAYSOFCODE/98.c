// Print initials of a name with the surname displayed in full.

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

    // Print surname
    printf("Surname: ");
    char *last_name = strrchr(name, ' ');
    if (last_name != NULL) {
        printf("%s\n", last_name + 1);
    }

    return 0;
}
