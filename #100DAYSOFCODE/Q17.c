// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 0;
    }

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct:\n");
        printf("Root1 = %.2f, Root2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        // Real and equal roots
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        // Imaginary (complex) roots
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are imaginary (complex conjugates):\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
