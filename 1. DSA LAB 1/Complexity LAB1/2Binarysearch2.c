/*
LAB 1
24-07-2024
EXPERIMENT 1
1(b) 

PROGRAM FOR BINARY SEARCH

Find Space & Time Complexity
*/
#include<stdio.h>
int main()
{
 int n,x,a[20],flag,i,C=0;
 printf("Enter the size of the Array:");
 scanf("%d",&n);
 C++;
 int left=0,right=n-1;C++;
 C++;
 printf("enter the array elements in Ascending order:");
   for(int i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   C++;
   }
 printf("Enter the element to be Found:");
 scanf("%d",&x);
 C++;
  while(left<=right)
  {
  int mid= (left+right)/2;
  C++;
  C++;
    if(x==a[mid])
    {
      C++;
      flag=1;
      break;
    }
   
    else if(x>a[mid])
    {
       C++;
       left= mid+1;
    }
    else if(x<a[mid])
    { C++;
      right= mid-1;
    }
  }
  if (flag==0)
  {
   printf("Element not Found");C++;
  }
  else if(flag==1)
  { printf("\nElement is Found");
    C++;
  }

printf("\n");

printf("\nSpace Complexity is %d",24+(4*n));
printf("\nTime Complexity is %d\n",C+2);
return 0;
}
