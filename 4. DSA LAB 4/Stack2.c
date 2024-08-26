#include <stdio.h>
int main()
{
    int n, value, top=-1;
    printf("Enter the size of the stack: ");
    scanf("%d", &n);
    
    int stack[n], option;
    do
    {
        printf("\nStack Operations Menu:\n");
        printf("1. POP\n");
        printf("2. PUSH\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("Enter you Option: ");
        scanf("%d", &option);
        
        switch(option)
        {
            case 1: if(top==n-1)
            {
                printf("Stack is Overflow\n");
            }
            else
            {
                printf("Enter the element: ");
                scanf("%d", &value);
                stack[++top]=value;
            }
            break;
            
            case 2: if(top==-1)
            {
                printf("Stack is Underflow");
            }
            else
            {
                value=stack[top--];
            }
            break;
            
            case 3: if(top==-1)
            {
                printf("Stack have %d Elements\n");
            }
            else
            {
                for(int i=top; i>=0; i--)
                {
                    printf("%d ", stack[i]);
                }
            }
            break;
            
            case 4: printf("4. Exitinng...");
            break;
            
            default: printf("Invalid Option");
            
        }
    }
    
    while(option!=4);
    return 0;
    
    

}