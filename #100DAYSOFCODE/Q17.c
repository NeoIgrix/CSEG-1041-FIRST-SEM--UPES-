// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2, real, imaginary;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 0;
    }

     d = b*b - 4*a*c;

    if (d > 0) {
        
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and distinct:\n");
        printf("Root1 = %f, Root2 = %f\n", r1, r2);
    }
    else if (d == 0) {
        
        r1 = r2 = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %f\n", r1);
    }
    else {
        
        real = -b / (2*a);
        imaginary = sqrt(-d) / (2*a);
        printf("Roots are imaginary \n");
        printf("Root1 = %f + %f\n", real, imaginary);
        printf("Root2 = %f - %f\n", real, imaginary);
    }

    return 0;
}


