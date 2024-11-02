MERGE SORT - ALGORITHM
Algorithm: Binary Tree Node Selection

STEP 1: START

STEP 2: Declare integer variables i, n (number of nodes), p (position of selected node), and arr[50] (array to hold node values).

STEP 3: Print "Enter the number of nodes: ".

STEP 4: Read the number of nodes and store it in n.

STEP 5: Print "Enter the nodes: ".

STEP 6: For i from 1 to n:
    a. Read the value for arr[i].

STEP 7: Print "The Nodes are: ".
    a. Print "Root Node = arr[1]".
    b. For i from 1 to n:
        i. Print arr[i].

STEP 8: Initialize an infinite loop:
    a. Print "Enter the position of the node which you want to select (0 to exit): ".
    b. Read p (position of the node).

STEP 9: Check exit condition:
    a. If p == 0:
        i. Print "Exiting...".
        ii. Break the loop.

STEP 10: Validate user input:
    a. If p < 1 or p > n:
        i. Print "Invalid position! Please enter a position between 1 and n.".
        ii. Continue to the next iteration of the loop.

STEP 11: Display information for the selected node:
    a. If p == 1:
        i. Print "arr[p] is the root node".
    b. Else:
        i. Print "Parent Node: arr[p / 2]".

STEP 12: Check for left child:
    a. If 2 * p > n:
        i. Print "No Left Child".
    b. Else:
        i. Print "Left Child: arr[2 * p]".

STEP 13: Check for right child:
    a. If 2 * p + 1 > n:
        i. Print "No Right Child".
    b. Else:
        i. Print "Right Child: arr[2 * p + 1]".

STEP 14: Repeat from STEP 8.

STEP 15: STOP
