// Question 2: Write a program to input n integers in an array. Ask the user for a number and check if
//             it exists in the array using the ternary operator. Print "Found" or "Not Found".[4 marks]


#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int arr[n];
    int i;

    printf("Enter %d numbers:\n",n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int num;   
    printf("Enter number to search:\n");
    scanf("%d", &num);

    int found = 0;

    // Search using ternary operator
    for(i = 0; i < n; i++) {
        found = (arr[i] == num) ? 1 : found;
    }

    //  result
    printf("%s\n", (found == 1) ? "Found" : "Not Found");

    return 0;
}
