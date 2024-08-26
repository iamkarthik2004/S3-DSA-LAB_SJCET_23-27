/*LAB 1
24-07-2024
EXPERIMENT 1
1(a) 
PROGRAM FOR LINEAR SEARCH (NORMAL CODE)
*/

#include <stdio.h>

int main() 
{
    int n, key, found = 0, count = 0;

    printf("Enter the Size of the Array: ");
    scanf("%d", &n);
    
    int Array[n];
    
    printf("Enter the Elements of the Array: \n");
    
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &Array[i]);
    }

    printf("\nEnter the Element to be Searched: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) 
    {
        if (Array[i] == key) 
        {
            if (found == 0) 
            {
                printf("The element is found at position %d\n", i + 1);
                printf("The Index of the Element is %d\n", i);
            }
            count++;
            found = 1;
        }
    }
    
    if (found == 1) 
    {
        printf("Element is Found %d Times", count);
    } 
    else 
    {
        printf("The element is not found in the array.\n");
    }
   
    return 0;
}
