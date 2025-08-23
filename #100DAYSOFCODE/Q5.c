//Q5:Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h> 

int main(){
float celcius;
float fahrenheit;
printf("Enter the temp.in celcius:");
scanf("%f" , &celcius);
fahrenheit= (1.8*celcius) + 32;
printf("The temp. in fahrenheit is %f \n",fahrenheit);

return 0 ;
}