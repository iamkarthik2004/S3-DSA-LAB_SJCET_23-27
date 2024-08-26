/*LAB 1
24-07-2024
EXPERIMENT 1
1(a) 
PROGRAM FOR LINEAR SEARCH

Find Space & Time Complexity
*/

#include <stdio.h>

int main() {
    int n, key, found = 0, count = 0, c=0;

    printf("Enter the Size of the Array: ");
    scanf("%d", &n);
    c++;
    int Array[n];
    c++;
    printf("Enter the Elements of the Array: \n");
    c++;
    
    for (int i = 0; i < n; i++) {
        c++;
        scanf("%d", &Array[i]);
        c++;
    }

    printf("\nEnter the Element to be Searched: ");
    scanf("%d", &key);
    c++;

    for (int i = 0; i < n; i++) {
        c++;
        if (Array[i] == key) {
            if (found == 0) {
                printf("The element is found at position %d\n", i + 1);
                c++;
                printf("The Index of the Element is %d\n", i);
                c++;
            }
            c++;
            count++;
            found = 1;
        }
    }
    
    c++;
    if (found == 1) {
        printf("Element is Found %d Times", count);
        c++;
    } else {
        printf("The element is not found in the array.\n");
        c++;
    }
    
    printf("\n");
    
    printf("\nThe space complexity is %d", 25 + (n * 4)); 
    c++;
    printf("\nThe time complexity is %d\n", c + 1);

    return 0;
}
