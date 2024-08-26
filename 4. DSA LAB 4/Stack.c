/*
Karthik Krishnan
S3 CSE B - 45
EXPERIMENT - 5 (a)
STACK
14-08-2024
*/

#include <stdio.h>

int main()
{
    int n,value,top=-1;
    printf("Enter the Size of the Stack: ");
    scanf("%d", &n);
    
    int stack[n],option;
    
    do
    {
        printf("\nStack Operations Menu:\n");
        printf("1. POP\n");
        printf("2. PUSH\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        
        printf("Enter Your Option: ");
        scanf("%d", &option);
        
        switch(option)
        {
            case 1: if(top==n-1)
            {
                printf("Stack is Overflow");
                
            }
            else
            {
                printf("Enter the Element: ");
                scanf("%d", &value);
                stack[++top]=value;
                
            }
            break;
            
            case 2:if(top==-1)
            {
                printf("Stack is Underflow");
                
            }
            else
            {
                value=stack[top--];
                
            }
            break;
            
            case 3:if(top==-1)
            {
                printf("Stack is Empty\n");
                
            }
            else
            {
                for(int i=top; i>=0; i--)
                {
                    printf("%d\n", stack[i]);
                    
                }
                
            }
            break;
            
            case 4: printf("Exiting...");
            break;
            
            default: printf("Invalid Option");
            
        }
        
    }
    
    while(option!=4);
    
    return 0;
}





