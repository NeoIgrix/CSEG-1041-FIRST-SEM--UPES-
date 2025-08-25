//Q9:Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest formula: SI = (P * R * T) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest formula: CI = P * ( (1 + R/100)^T - 1 )
    compoundInterest = principal * (pow((1 + rate / 100), time) - 1);

    printf("\nSimple Interest = %f", simpleInterest);
    printf("\nCompound Interest = %f", compoundInterest);

    return 0;
}

