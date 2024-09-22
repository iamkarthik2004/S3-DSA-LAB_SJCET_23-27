/*
Karthik Krishnan
S3 CSE B - 45
EXPERIMENT - 6 (A)

POLYNOMIAL REPRESENTATION

21-08-2024
*/

#include <stdio.h>

struct
{
 int coeff;
 int expo;
 }
 
 x[15];
 int main()
{
  int firstcount;
  printf("Enter the Number of terms: ");
  scanf("%d", &firstcount);
  for(int i=0; i<firstcount; i++)
  {
    printf("Enter the coefficient of the terms: ");
    scanf("%d", &x[i].coeff);
    printf("Ente the expo of the terms:");
    scanf("%d", &x[i].expo);
    }
    
    for(int i=0;i<firstcount; i++)
    {
      if(i==firstcount-1)
      {
        printf("%dx^%d", x[i].coeff,x[i].expo);
        break;
      }
      
      printf("%dx^%d+", x[i].coeff,x[i].expo);
    }

return 0;
}
