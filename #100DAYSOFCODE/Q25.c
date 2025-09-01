// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main(){
    float a,b,sum,difference,product,division,remainder;
    char op;
    printf("enter your no.\n");
    scanf("%f %f",&a,&b);
    printf("select your operator\n");
    printf("+,-,*,/,%%\n");
    scanf(" %c", &op );
    switch (op)
    {
    case '+' :
        sum=a+b;
        printf("sum is %f",sum);
        break;
    case  '-' :
        difference=a-b;
        printf("difference is %f",difference);
        break;
    case '*' :
        product=a*b;
        printf("product is %f",product);
        break;
    case  '/' :
        division=a/b;
        printf("division is %f",division);
        break;
    case '%':
            if ((int)b != 0)
                remainder = (int)a % (int)b, printf("Remainder = %d\n", remainder);
            else
                printf("Error: Modulus by zero\n");
            break;   
               
    default:
        break;
    }
    return 0;
}