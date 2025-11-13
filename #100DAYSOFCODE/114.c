/*Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int max_length = 0;
    int start = 0;
    int char_index[256];
    for (int i = 0; i < 256; i++) {
        char_index[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        if (char_index[s[i]] >= start) {
            start = char_index[s[i]] + 1;
        }
        char_index[s[i]] = i;
        max_length = (i - start + 1 > max_length) ? i - start + 1 : max_length;
    }

    printf("Length of the longest substring without repeating characters is: %d\n", max_length);
    return 0;
}
