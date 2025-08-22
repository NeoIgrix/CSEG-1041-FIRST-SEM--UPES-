// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(){
    int a, b, sum, difference, product;
    float quotient;
    scanf("%d %d", &a, &b);
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = (float)a / b;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %f\n", quotient);
    return 0;
}