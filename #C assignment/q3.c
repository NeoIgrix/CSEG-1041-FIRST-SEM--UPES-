// Question 3: Write a program to input 10 integers (range 0–9). Store them in an array. Then, using a
//             switch-case, print the frequency of each digit.[5 marks]

#include <stdio.h>

int main() {
    int digits[10];
    int i;
    
    printf("Enter 10 integers (0-9):\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &digits[i]);
    }
    
    // Initializing the  frequency counters
    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    int count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
    
    // Counts frequency using switch-case
    for(i = 0; i < 10; i++) {
        switch(digits[i]) {
            case 0:
                count0++;
                break;
            case 1:
                count1++;
                break;
            case 2:
                count2++;
                break;
            case 3:
                count3++;
                break;
            case 4:
                count4++;
                break;
            case 5:
                count5++;
                break;
            case 6:
                count6++;
                break;
            case 7:
                count7++;
                break;
            case 8:
                count8++;
                break;
            case 9:
                count9++;
                break;
            default:
                printf("Invalid digit: %d (should be 0-9)\n", digits[i]);
                break;
        }
    }
    
    // Display frequencies of each digit
    printf("\nFrequency of digits:\n");
    printf("Digit 0: %d times\n", count0);
    printf("Digit 1: %d times\n", count1);
    printf("Digit 2: %d times\n", count2);
    printf("Digit 3: %d times\n", count3);
    printf("Digit 4: %d times\n", count4);
    printf("Digit 5: %d times\n", count5);
    printf("Digit 6: %d times\n", count6);
    printf("Digit 7: %d times\n", count7);
    printf("Digit 8: %d times\n", count8);
    printf("Digit 9: %d times\n", count9);
    
    return 0;
}