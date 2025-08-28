// Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main(){
    printf("enter the year:\n");
    int year;
    scanf("%d" , &year);
    if (year% 400 == 0){
      printf("this is a leap year ");}
      else if (year% 100 == 0)
      {
        printf("this is not a leap year");
      }
       else if (year% 4 == 0)
       {
        printf("this is a leap year");
       }
        else 
        {
           printf("this is not a leap year"); 
        }
        
    return 0;
}