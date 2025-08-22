//Q4:Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(){
    float area,circumference,radius;
    printf("enter the radii:\n");
    scanf("%f" ,&radius);
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("the area is %f\n",area);
    printf("the circumfernce is %f\n" ,circumference);
    return 0;
}