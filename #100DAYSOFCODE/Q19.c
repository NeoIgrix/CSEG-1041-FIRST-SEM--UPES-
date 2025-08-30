// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main(){
    printf("enter the sides length in cm\n");
    int a,b,c;
    scanf("%d %d %d" ,&a , &b ,&c);
    if (a==b && b==c)
    {
      printf("The triangle is Equilateral as given all sides are equal\n");  
    }
    else if (a==b || b==c || a==c) {
       printf("The triangle is  Isoceles as given two sides are equal\n");   
    }
    else {
        printf("The triangle is scalene as given all sides are not equal\n");  
    }
    return 0;
}