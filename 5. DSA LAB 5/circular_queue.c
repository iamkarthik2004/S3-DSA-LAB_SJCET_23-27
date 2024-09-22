#include <stdio.h>
#define MAXSIZE 100

int main() 
{
    int queue[MAXSIZE], n, front = -1, rear = -1, item, option;

    printf("Enter the Size of the Circular Queue: ");
    scanf("%d", &n);

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
                if ((rear + 1) % n == front) 
                {
                    printf("Queue Overflow\n");
                } 
                else 
                {
                    printf("Enter the element: ");
                    scanf("%d", &item);
                    if (front == -1 && rear == -1) 
                    {
                        front = 0;
                        rear = 0;
                    } 
                    else 
                    {
                        rear = (rear + 1) % n;
                    }
                    queue[rear] = item;
                }
                break;

            case 2: // DEQUEUE
                if (front == -1 && rear == -1) 
                {
                    printf("Queue Underflow\n");
                } 
                else if (front == rear) 
                {
                    printf("Deleted element is %d\n", queue[front]);
                    front = rear = -1;
                } 
                else 
                {
                    item = queue[front];
                    front = (front + 1) % n;
                    printf("Deleted element is %d\n", item);
                }
                break;

            case 3: // DISPLAY
                if (front == -1 && rear == -1) 
                {
                    printf("Queue is Empty\n");
                } 
                else 
                {
                    printf("Queue elements are: ");
                    int i = front;
                    while (1) 
                    {
                        printf("%d ", queue[i]);
                        if (i == rear) break;
                        i = (i + 1) % n;
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
    }
    while(option != 4);

    return 0;
}
