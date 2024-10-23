#include <stdio.h>
#include <stdlib.h>
int main()
{
int n, temp;
printf("Enter the number of elements of the array:");
scanf("%d", &n);

int arr[n];
printf("Enter the elements of the array: ");
for(int i=0; i<n; i++)
{
scanf("%d", &arr[i]);
}
for(int i=1; i<n; i++)
{
temp=arr[i];
for(int j=i-1; j>=0 && temp<arr[j];  j--)
{
arr[j+1]=arr[j];
arr[j]=temp;
}
}

printf("Sorted Array: ");

for(int i=0;i<n;i++)
{
printf("%d\t", arr[i]);

}
return 0;
}