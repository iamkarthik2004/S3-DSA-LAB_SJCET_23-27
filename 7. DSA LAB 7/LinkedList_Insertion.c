/*
LINKED LIST
INSERTION
1. Insertion at Beginning
2. Insertion at end
3. Insertion at any position
4. Display
*/


#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node*link;
}
 *head,*temp,*ptr,*ptr1,*temp1;
 void main()
 {
   int ch,item,k;
 
   do
   {
     printf("\n1. Insertion at beginning\n");
     printf("2. Insertion at end\n");
     printf("3. Insertion at any position\n");
     printf("4. Display\n");
     printf("5. Exit\n");
     printf("Enter your choice: ");
     scanf("%d", &ch);
     
     switch(ch)
     {
      case 1:
      //Insertion at Beginning
     
      temp=(struct node*)malloc(sizeof(struct node));
      printf("Enter the item: ");
      scanf("%d", &item);
      if(temp==NULL)
      {
       printf("Memory underflow, no insertion");
      }
      else
      {
        temp->data=item;
        temp->link=head;
        head=temp;
      }
      break;

      case 2:
      //Insertion at end
      int item;
      temp=(struct node*)malloc(sizeof(struct node));
      printf("Enter the value:");
      scanf("%d", &item);
      //ptr->data=item;
      if(head==NULL)
      {
        temp->data=item;
        temp->link=NULL;
        head=temp;
      }
      else
      {
        ptr=head;
        while(ptr->link!=NULL)
        {
        ptr=ptr->link;
        }
        ptr->link=temp;
        temp->link=NULL;
        temp->data=item;
       
      }
      break;
     
      case 3:
      //Insertion at any position
      printf("Enter the item:");
      scanf("%d", &item);
     
      temp =(struct node*)malloc(sizeof(struct node));
     
      if(temp==NULL)
      {
        printf("Underflow");
      }
      else if(head==NULL)
      {
        printf("Insertion Not Possible");
        //ptr=head;
      }
      else
      {
      printf("Enter the value after which new element is to be inserted: ");
      scanf("%d", &k);

      ptr=head;
      while(ptr->data!=k && ptr->link!=NULL)
      {
        ptr=ptr->link;
      }
      if(ptr->link==NULL)
      {
       printf("\nSearch fails\n");
       }
      else
      {
       temp->link=ptr->link;
       ptr->link=temp;
       temp->data=item;
      }
      }
      break;
     
      case 4:
      //Display
      ptr=head;
      while(ptr->link != NULL)
      {
      printf("%d\t",ptr->data);
      ptr=ptr->link;
      }
      printf("%d",ptr->data);
     
      break;
       
       
      case 5:
      //Exit
      printf("Exit");
      break;
      default:
      {
      printf("Invalid Choice");
      }
     }
   }
while(ch!=5);
}