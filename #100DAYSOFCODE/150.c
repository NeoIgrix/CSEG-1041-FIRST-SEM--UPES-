#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    printf("Student pointer modifying values: ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
