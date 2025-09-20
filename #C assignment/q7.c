/*Question 7: Assume a class of 5 students, each having marks in 3 subjects. Store the marks in a
              2D array where each row represents a student and each column represents a subject.
              Perform the following:
Calculate the total and average marks of each student. [4 Marks]
Find the highest scorer (student with maximum total marks). [3 Marks]
Find the subject in which the class performed worst (lowest average marks). [4 marks]
Use sizeof() operator to display the total memory consumed by the array. [4 marks]*/


#include <stdio.h>

int main() {
    int marks[5][3];  // 5 students, 3 subjects
    int i, j;
    
    char subjects[3][20] = {"Math", "Physics", "Chemistry"};
    
    // Input marks for each student
    printf("Enter marks for 5 students in 3 subjects (Math, Physics, Chemistry):\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i+1);
        for(j = 0; j < 3; j++) {
            printf("Enter marks in %s:\n",subjects[j]);
            scanf("%d", &marks[i][j]);
        }
    }
    
    // Calculate total and average for each student
    printf("\n--- Student Analysis ---\n");
    int studenttotal[5];
    float studentaverage[5];
    
    for(i = 0; i < 5; i++) {
        int total = 0;
        for(j = 0; j < 3; j++) {
            total = total + marks[i][j];
        }
        studenttotal[i] = total;
        studentaverage[i] = (float)total / 3;
        
        printf("Student %d - Total: %d, Average: %.2f\n", 
               i+1, studenttotal[i], studentaverage[i]);
    }
    
    // Find highest scorer
    int highesttotal = studenttotal[0];
    int beststudent = 0;
    
    for(i = 1; i < 5; i++) {
        if(studenttotal[i] > highesttotal) {
            highesttotal = studenttotal[i];
            beststudent = i;
        }
    }
    
    printf("\nHighest scorer: Student %d with total marks %d\n", 
           beststudent+1, highesttotal);
    
    // Find subject with lowest average marks
    printf("\n--- Subject Analysis ---\n");
    float subjectaverage[3];
    
    for(j = 0; j < 3; j++) {
        int subjecttotal = 0;
        for(i = 0; i < 5; i++) {
            subjecttotal = subjecttotal + marks[i][j];
        }
        subjectaverage[j] = (float)subjecttotal / 5;
        printf("%s average: %.2f\n", subjects[j], subjectaverage[j]);
    }
    
    // Find lowest average subject
    float lowestavg = subjectaverage[0];
    int lowestsubject = 0;
    
    for(j = 1; j < 3; j++) {
        if(subjectaverage[j] < lowestavg) {
            lowestavg = subjectaverage[j];
            lowestsubject = j;
        }
    }
    
    printf("Subject with lowest average: %s (%.2f)\n", 
           subjects[lowestsubject], lowestavg);
    
    // Display memory consumed using sizeof()
    printf("\n--- Memory Analysis ---\n");
    printf("Memory consumed by marks array: %zu bytes\n", sizeof(marks));
    printf("Memory per element: %zu bytes\n", sizeof(marks[0][0]));
    printf("Total elements: %d\n", 5*3);
    
    return 0;
}