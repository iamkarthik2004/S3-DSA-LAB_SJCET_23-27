/*LAB 1
24-07-2024
EXPERIMENT 1
1(b) 
PROGRAM FOR BINARTY SEARCH (NORMAL CODE)
*/
#include <stdio.h>

int main() 
{
    int a[30], n, x, i, left, right, flag, mid;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements in ascending order: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &x);

    left = 0;
    flag = 0;
    right = n - 1;

    while (left <= right) 
    {
        mid = (left + right) / 2;

        if (x == a[mid]) 
        {
            printf("Element is present at index %d\n", mid);
            flag = 1;  // Set flag to 1 if element is found
            break;
        }

        else if (x > a[mid]) 
        {
            left = mid + 1;  // Increment left if the element is greater
        }
         
        else 
        {
            right = mid - 1;  // Decrement right if the element is smaller
        }
    }

    if (flag == 0) 
    {
        printf("Element is not found\n");
    } else 
    {
        printf("Element is found\n");
    }

    return 0;
}