/*
LAB 2
31-07-2024
EXPERIMENT 2
2(a) 
PROGRAM FOR BUBBLE SORT

Find Space & Time Complexity
*/
#include <stdio.h>
int main()
{
    int A[100], i, n, pass, temp, c=0;
    
    printf("Enter the Size of the Array: ");
    scanf("%d",&n);
    c++;
    
    printf("Enter the elements of the Array:\n");
    for(i=0; i<n; i++, c++)
    {
        scanf("%d",&A[i]);
        c++;
    }
    
    printf("\n");
    
    for(pass=0; pass<n-1; pass++)
    {
        for(i=0; i<n-pass-1; i++, c++)
        {
            if(A[i] > A[i+1])
            {
                //Swap Elements
                c++;
                temp = A[i];
                c++;
                A[i] = A[i+1];
                c++;
                A[i+1] = temp;
                c++;
            }
        }
    }
    printf("Sorted Array is:\n");
    for(i=0; i<n; i++, c++)
    {
        printf("%d ", A[i]);
        c++;
    }
    
    printf("\nThe space complexity is %d", 25 + (n * 4)); 
    c++;
    printf("\nThe time complexity is %d\n", c + 1);
    


return 0;
}


