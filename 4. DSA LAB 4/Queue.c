#include <stdio.h>
#define MAXSIZE 100

int main() {
    int queue[MAXSIZE], n, item, rear = -1, front = -1;

    printf("Enter the Size of the Queue: ");
    scanf("%d", &n);

    int option;
    
    do {
        printf("\nQUEUE OPERATIONS MENU:\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("Enter your Option: ");
        scanf("%d", &option);

        switch(option) {
            case 1: // ENQUEUE
                if(rear == n - 1) {
                    printf("Queue is Overflow\n");
                } else {
                    printf("Enter the element: ");
                    scanf("%d", &item);
                    if(front == -1 && rear == -1) {
                        front = 0;
                    }
                    rear = rear + 1;
                    queue[rear] = item;
                }
                break;

            case 2: // DEQUEUE
                if(front == -1) {
                    printf("Queue is Underflow\n");
                } else {
                    printf("Deleted element is %d\n", queue[front]);
                    if(front == rear) {
                        front = rear = -1;
                    } else {
                        front = front + 1;
                    }
                }
                break;

            case 3: // DISPLAY
                if(front == -1) {
                    printf("Queue is Empty\n");
                } else {
                    printf("Queue elements are: ");
                    for(int i = front; i <= rear; i++) {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }
                break;

            case 4: // EXIT
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Option\n");
        }
    } while(option != 4);

    return 0;
}





