/*
QUICK SORT
23-10-2024
 */

#include <stdio.h>

void quick_sort(int arr[], int first, int last) {
    if (first < last) {
        int pivot = arr[last];
        int i = first - 1;

        for (int j = first; j < last; j++) {
            if (arr[j] <= pivot) {
                i++;
               
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
       
        int temp = arr[i + 1];
        arr[i + 1] = arr[last];
        arr[last] = temp;

     
        quick_sort(arr, first, i);
        quick_sort(arr, i + 2, last);
    }
}

int main() {
    int i, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    quick_sort(arr, 0, n - 1);

    printf("\nSorted Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}



