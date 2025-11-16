/*A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.*/

#include <stdio.h>

int main() {
    FILE *file;
    int num, sum = 0, count = 0;

    // Open the file for reading
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read integers from the file
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // Close the file
    fclose(file);

    // Compute and print the average
    if (count > 0) {
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", (float)sum / count);
    } else {
        printf("No valid numbers found.\n");
    }

    return 0;
}