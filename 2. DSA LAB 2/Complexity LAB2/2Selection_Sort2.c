/*
LAB 2
31-07-2024
EXPERIMENT 2
2(b) 
PROGRAM FOR SELECTION SORT

Find Space & Time Complexity
*/

#include <stdio.h>

int main() 
{
    int n, i = 0, j, s, temp,c = 0;
    
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    c++;
    
    int a[n];
    printf("Enter the elements:\n");
    c++;
    
    for(i=0; i<n;i++) 
    {
        scanf("%d", &a[i]);
        c++;
    }
    
    printf("Original Array:\n");
    c++;
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
        c++;
    }
    c++;
    
    i = 0;
    c++;
    while (i < n-1) 
    {
        s = i;
        j = i + 1;
        while (j < n) 
        {
            c++;
            if (a[s] > a[j]) 
            {
                s = j;
                c++;
            }
            j++;
            c++;
        }
        if (i != s) 
        {
            temp = a[i];
            a[i] = a[s];
            a[s] = temp;
            c++;
        }
        i++;
        c++;
    }
    
    printf("\nSorted Array:\n");
    c++;
    for (i=0; i<n;i++) 
    {
        printf("%d\t", a[i]);
        c++;
    }
    
    printf("\n");
    
    printf("\nThe space complexity is %d", 25 + (n * 4)); 
    c++;
    printf("\nThe time complexity is %d\n", c + 1);
    printf("\n");
    
    
    return 0;
}
