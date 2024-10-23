#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* link;
} *temp, *head, *ptr, *ptr1;
void main() {
    int ch, item, k;
    do {
        printf("\n1. Insertion at beginning\n2. Insertion at end\n3. Insertion at specific position\n4. Deletion at beginning\n");
        printf("5. Deletion at end\n6. Deletion at specific position\n7. Display\n8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                // Insertion at beginning
                printf("Enter the item: ");
                scanf("%d", &item);
                temp = (struct node*) malloc(sizeof(struct node));
                if (temp == NULL) {
                    printf("Underflow");
                } else if (head == NULL) {
                    temp->data = item;
                    temp->link = NULL;
                    head = temp;
                } else {
                    temp->data = item;
                    temp->link = head;
                    head = temp;
                }
                break;
            case 2:
                // Insertion at end
                printf("Enter the item: ");
                scanf("%d", &item);
                temp = (struct node*) malloc(sizeof(struct node));
                if (temp == NULL) {
                    printf("Underflow");
                } else if (head == NULL) {
                    temp->data = item;
                    temp->link = NULL;
                    head = temp;
                } else {
                    ptr = head;
                    while (ptr->link != NULL) {
                        ptr = ptr->link;
                    }
                    ptr->link = temp;
                    temp->link = NULL;
                    temp->data = item;
                }
                break;
            case 3:
                // Insertion at specific position
                printf("Enter the item: ");
                scanf("%d", &item);
                printf("Enter the item after which the value is to be placed: ");
                scanf("%d", &k);
                temp = (struct node*) malloc(sizeof(struct node));
                if (temp == NULL) {
                    printf("Underflow");
                } else if (head == NULL) {
                    printf("Insertion not possible");
                } else {
                    ptr = head;
                    while (ptr->data != k && ptr->link != NULL) {
                        ptr = ptr->link;
                    }
                    if (ptr->link == NULL) {
                        printf("\nSearch failed");
                    } else {
                        temp->link = ptr->link;
                        ptr->link = temp;
                        temp->data = item;
                    } }
                break;
            case 4:
                // Deletion at beginning
                if (head == NULL) {
                    printf("Underflow");
                } else {
                    ptr = head;
                    if (ptr->link == NULL) {
                        head = NULL;
                        free(ptr);
                    } else {
                        head = ptr->link;
                        free(ptr); }
                    printf("\nNode deleted");
                }
                break;
                 case 5:
                // Deletion at end
                if (head == NULL) {
                    printf("\nUnderflow");
                } else {
                    ptr = head;
                    ptr1 = ptr->link;
                    while (ptr1->link != NULL) {
                        ptr = ptr->link;
                        ptr1 = ptr1->link;
                    }
                    ptr->link = NULL;
                    free(ptr1);
                    printf("Node deleted from end");
                }
                break;
            case 6:
                // Deletion at specific position
                if (head == NULL) {
                    printf("\nUnderflow");
                } else {
                    ptr = head;
                    printf("Enter the item after which the node has to be deleted: ");
                    scanf("%d", &k);
                    if (ptr->link == NULL && ptr->data == k) {
                        printf("There is no node to delete");
                    } else {
                        ptr1 = ptr->link;
                        while (ptr->link != NULL && ptr->data != k) {
                            ptr = ptr->link;
                            ptr1 = ptr1->link;
                        }
                        if (ptr->link == NULL) {
                            printf("\nElement not found");
                        } else {
                            ptr->link = ptr1->link;
                            free(ptr1);
                            printf("Node deleted");
                        } } }
                break;
            case 7:
                // Display the list
                ptr = head;
                if (ptr == NULL) {
                    printf("List is empty");
                } else {
                    while (ptr->link != NULL) {
                        printf("%d ", ptr->data);
                        ptr = ptr->link;
                    }
                    printf("%d ", ptr->data);
                }
                break;
            case 8:
                // Exit
                printf("Exiting...\n");break;
            default:
                printf("\nInvalid option");
                break;
        }   } 
while (ch != 8);
}
