// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main(){
    int length ,breadth,area,perimeter;
    printf("enter the length and breadth\n");
    scanf("%d %d" ,&length ,&breadth);
    area = length * breadth;
    perimeter= 2*(length+breadth);
    printf("The Area is:%d\n" , area);
    printf("the perimeter is :%d\n",perimeter);

    return 0;
}