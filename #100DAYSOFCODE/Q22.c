// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main(){
    int cp,sp,profit,loss;
    float profitpercentage,losspercentage;
    printf("enter the cost price:");
    scanf("%d",&cp);
    printf("enter the selling price:");
    scanf("%d",&sp);
    if (sp==cp)
    {
      printf("no profit no loss\n");  
    }
    else if (sp>cp)
    {
      profit=sp-cp;
      profitpercentage=(profit*100.0)/cp;
      printf("profit of %d\n",profit);
      printf("profit percentage of %.2f%%\n",profitpercentage);   
    }
    else if (cp>sp)
    {
      loss=cp-sp;
      losspercentage=(loss*100.0)/cp;  
      printf("loss of %d\n",loss);
      printf("loss percentage of %.2f%%\n",losspercentage);   
    }
    
    
    return 0;
}