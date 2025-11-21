#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[3], topper;
    
    // Input for 3 students
    for(int i = 0; i < 3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    topper = s[0];

    // Finding highest marks
    for(int i = 1; i < 3; i++) {
        if (s[i].marks > topper.marks) {
            topper = s[i];
        }
    }

    printf("Topper: %s (Marks: %d)\n", topper.name, topper.marks);

    return 0;
}
