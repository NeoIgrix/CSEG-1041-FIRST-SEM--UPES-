// Write a program to calculate a library fine based on late days

#include <stdio.h>
int main(){
    int day,fine;
    printf("enter your date of submission of book:\n");
    scanf("%d",&day);
    if (day<=3)
    {
      printf("no fine"); 
    }
    else if (day>3 && day<=8)
    {
      fine=day*2;
      printf("the fine is:rupees %d",fine);  
    }
    else if (day>8 && day<=15)
    {
        fine=day*4;
        printf("the fine is:rupees %d",fine);
    }
    else if (day>15 && day<=30)
    {
        fine=day*6;
        printf("the fine is:rupees %d",fine);
    }
    else if (day>30)
    {
        fine=day*10;
        printf("the fine is:rupees %d\n",fine);
        printf("the membership is also cancelled.Kindly pay fine to renew it.");
    }
    return 0;
}