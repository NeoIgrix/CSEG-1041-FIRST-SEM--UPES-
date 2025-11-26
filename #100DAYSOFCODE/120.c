/*Write a program to take a string input. Change it to sentence case.*/

#include <stdio.h>
#include <ctype.h>

void toSentenceCase(char str[]) {
    int i = 0;
   
    str[i] = toupper(str[i]);
    i++;

   
    while (str[i] != '\0') {
        if (str[i - 1] == '.') {
            str[i] = toupper(str[i]);
        }
        i++;
    }
}

int main() {
    char str[100];

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toSentenceCase(str);
    printf("String in sentence case: %s\n", str);

    return 0;
}

