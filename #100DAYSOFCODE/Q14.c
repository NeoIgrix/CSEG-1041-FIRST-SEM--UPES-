// Write a program to input a character and check whether it is a vowel or consonant using if–else

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if ((ch >='a' && ch <= 'z') || (ch>='A' && ch <='Z')){
       if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
       {
        printf("%c is a vowel \n" ,ch);
       }
       else {
       printf("%c is a consonant\n",ch);}
       }
       else {
       printf("%c is not a alphabet",ch);
       }
    
    return 0;
}
