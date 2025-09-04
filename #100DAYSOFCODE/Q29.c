// Write a program to calculate the factorial of a number

#include <stdio.h>
int main(){
    int n,i;
    long long factorial=1;   // pehlle hume initai value assign karni padegi
    printf("enter your no.\n");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
      factorial=factorial*i;   // n*n-1*n-2.... ki jagah ese karenge.
    }
    printf("the factorial of given no is %lld",factorial);
    return 0;
}