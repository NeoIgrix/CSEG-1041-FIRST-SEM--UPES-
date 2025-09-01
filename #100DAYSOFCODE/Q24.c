// Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>
int main(){
    int unit,bill;
    printf("enter your units shown in the meter:\n");
    scanf("%d",&unit);
    if (unit<=50)
    {
      printf("Due to provided subsidy for upto 50 units, Your bill is rupees 0"); 
    }
    else if (unit>50 && unit<=150)
    {
      bill=unit*5;
      printf("the bill for consumed units is:%d",bill);
    }
    else if (unit>150 && unit<=250)
    {
      bill=unit*7;
      printf("the bill for consumed units is:%d",bill);  
    }
    else if (unit>250 && unit<=350)
    {
      bill=unit*9;
      printf("the bill for consumed units is:%d",bill);  
    }
    else if (unit>350 && unit<=500)
    {
      bill=unit*10;
      printf("the bill for consumed units is:%d",bill);  
    }
    else if (unit>500)
    {
      bill=unit*13;
      printf("the bill for consumed units is:%d",bill);  
    }
    return 0;
}