#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student topStudent(struct Student s[], int n) {
    int maxIndex = 0;

    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];   // return the topper's structure
}

int main() {
    struct Student s[3];

    // sample input
    // Riya 101 89
    // Karan 102 96
    // Meena 103 92

    for(int i = 0; i < 3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    struct Student topper = topStudent(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           topper.name, topper.roll, topper.marks);

    return 0;
}
