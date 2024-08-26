#include <stdio.h>
/*
LAB 2
31-07-2024
EXPERIMENT 2
2(b) 
PROGRAM FOR SELECTION SORT (NORMAL CODE)
*/

int main() {
    int n, i = 0, j, s, temp;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for(i=0; i<n;i++) {
        scanf("%d", &a[i]);
    }
    printf("Original Array:\n");
    for(i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
    i = 0;
    while (i < n-1) {
        s = i;
        j = i + 1;
        while (j < n) {
            if (a[s] > a[j]) {
                s = j;
            }
            j++;
        }
        if (i != s) {
            temp = a[i];
            a[i] = a[s];
            a[s] = temp;
        }
        i++;
    }
    printf("\nSorted Array:\n");
    for (i=0; i<n;i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}