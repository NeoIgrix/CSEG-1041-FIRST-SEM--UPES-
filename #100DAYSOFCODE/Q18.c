// Write a program to assign grades based on a percentage input.

#include <stdio.h>

const char* grade(int marks) {
    if (marks > 100 || marks < 0) return "Invalid";
    if (marks >= 90) return "A";
    if (marks >= 80) return "B";
    if (marks >= 70) return "C";
    if (marks >= 60) return "D";
    if (marks >= 30) return "E";
    return "F (Fail)";
}

int main() {
    char subjects[5][20] = {"Maths", "Science", "English", "Social Studies", "Hindi"};
    int marks[5], total = 0, i;

    printf("This program will tell you your grades according to school system\n");

    for (i = 0; i < 5; i++) {
        printf("Enter your marks in %s: ", subjects[i]);
        scanf("%d", &marks[i]);
        printf("Your grade is: %s\n", grade(marks[i]));
        total += marks[i];
    }

    int avg = total / 5;
    printf("\nAverage of all subjects: %d\n", avg);
    printf("Total marks obtained: %d\n", total);
    printf("Average Grade: %s\n", grade(avg));

    return 0;
}
