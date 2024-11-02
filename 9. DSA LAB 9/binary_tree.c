/*
BINARY TREE
23-10-2024
 */

#include <stdio.h>

void main() {
    int i = 0, n, p;
    int arr[50];

    // Input number of nodes
    printf("Enter the Number of Nodes : ");
    scanf("%d", &n);

    // Input nodes
    printf("Enter the nodes: \n");
    for (i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display nodes
    printf("The Nodes are : \n\n");
    printf("Root Node = %d\n\n", arr[1]);
    for (i = 1; i <= n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    // Loop for selecting nodes
    while (1) {
        printf("Enter the position of the node which you want to select (0 to exit): \n");
        scanf("%d", &p);

        // Exit condition
        if (p == 0) {
            printf("Exiting...\n");
            break;
        }

        // Validate input
        if (p < 1 || p > n) {
            printf("Invalid position! Please enter a position between 1 and %d.\n", n);
            continue;
        }

        // Display selected node information
        if (p == 1) {
            printf("%d is the root node\n", arr[p]);
        } else {
            printf("Parent Node: %d\n", arr[p / 2]);
        }

        if (2 * p > n) {
            printf("No Left Child\n");
        } else {
            printf("Left Child: %d\n", arr[2 * p]);
        }

        if (2 * p + 1 > n) {
            printf("No Right Child\n");
        } else {
            printf("Right Child: %d\n", arr[2 * p + 1]);
        }
    }
}
