// Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter three no:\n");
    scanf("%d %d %d",&a ,&b ,&c);
    if (a > b && a>c)
    {
       printf("%d is the largest no.\n", a); 
       
    }
    else if (b > a && b>c)
    {
     printf("%d is the largest no.\n", b);  
    }
    else if (c > a && c>b)
    {
     printf("%d is the largest no.\n", c);  
    }
    else{
        printf("two or more no are equal");
    }
    return 0;
}