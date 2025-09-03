// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main(){
    int n,i,product;
    product=1;
    printf("enter your no\n");
    scanf("%d",&n);
    for ( i = 2; i <=n; i+=2)
    {
     product=(product*i);
    }
    printf("the product is\n%d",product);
    return 0;
}