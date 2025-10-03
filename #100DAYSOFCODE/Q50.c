/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */


#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}