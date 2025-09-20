// Question 1: Basic Practise[6 marks]
// Write a program to input n integers into an array and perform the following using loops:
// Find the largest and smallest number. [2 Marks]
//  Calculate the average of all numbers. [2 Marks]
// Count how many numbers are even and how many are odd. [2 Marks]
#include <stdio.h>

int main() {
    int n;
    printf("Enter number for elements\n");
    scanf("%d", &n);
    
    int arr[n];
    int i;
    
    // now we will give input for array elements
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // initializing the largest,smallest,etc variables
    int largest = arr[0];
    int smallest = arr[0];
    int sum = 0;
    int even = 0;
    int odd = 0;
    
    // Find largest and smallest
    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
        // sum ke liye
        sum = sum + arr[i];
        
        // for even and odd
        if(arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    // for average
    float average = (float)sum / n;
    
    //  results
    printf("\nResults:\n");
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    printf("Average: %.2f\n", average);
    printf("Total no. of even numbers: %d\n", even);
    printf("Total no. of odd numbers: %d\n", odd);
    
    return 0;
}
