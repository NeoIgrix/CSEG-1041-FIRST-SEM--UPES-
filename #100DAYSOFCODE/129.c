/*A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.*/

#include <stdio.h>

int main() {
    FILE *file;
    int num, sum = 0, count = 0;

    
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    
    fclose(file);

    if (count > 0) {
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", (float)sum / count);
    } else {
        printf("No valid numbers found.\n");
    }

    return 0;

}
