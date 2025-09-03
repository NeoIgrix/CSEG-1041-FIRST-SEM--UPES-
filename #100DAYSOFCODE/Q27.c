// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main(){
int n,i,sum;
sum=0;
printf("Enter value of n: ");
scanf("%d",&n);
for ( i = 1; i <=n; i+=2)
{
    sum = sum + (2*i - 1);
}
    printf("the sum of the first n odd no.\n%d",sum);
    return 0;
}