#include <stdio.h>
#include <string.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    // 2. Declare an array of 5 Student structures
    struct Student students[5];
    int i;

    
    printf("Enter details for 5 students:\n");

    
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

    
        printf("Enter Roll Number: ");
        if (scanf("%d", &students[i].roll_number) != 1) {
    
            printf("Invalid input for roll number. Exiting.\n");
            return 1;
        }

    
        printf("Enter Name (max 49 chars): ");
    
        while (getchar() != '\n');
    
        if (fgets(students[i].name, sizeof(students[i].name), stdin) == NULL) {
             printf("Error reading name. Exiting.\n");
             return 1;
        }
    
        students[i].name[strcspn(students[i].name, "\n")] = 0;

    
        printf("Enter Marks: ");
        if (scanf("%f", &students[i].marks) != 1) {
            // Error handling for scanf
            printf("Invalid input for marks. Exiting.\n");
            return 1;
        }
    }

    
    printf("\n\n--- Stored Student Details ---\n");
    printf("| %-12s | %-20s | %-8s |\n", "Roll Number", "Name", "Marks");
    printf("-------------------------------------------------\n");

    
    for (i = 0; i < 5; i++) {
        printf("| %-12d | %-20s | %-8.2f |\n", 
               students[i].roll_number, 
               students[i].name, 
               students[i].marks);
    }
    printf("-------------------------------------------------\n");

    return 0;
}
