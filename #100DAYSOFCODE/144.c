#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void printData(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;
    scanf("%s %d %d", s.name, &s.roll, &s.marks);

    printData(s);

    return 0;
}
