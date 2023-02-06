#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};struct node * newnode , * front=0 ,* rear=0 ,* temp;

void enqueue()
{
    newnode = (struct node *) malloc (sizeof(struct node));
    printf("Enter the element to be pushed\n");
    scanf("%d",&newnode->data);
    newnode -> next = 0;
    if(front==0&&rear==0)
    {
        front=rear=newnode;
        rear->next=0;
    }
    else
    {
      rear->next =newnode;
      rear=newnode;
    }
}
void dequeue()
{
    if(front==0)
    {
      printf("Stack is empty"); 
    }
    else
    {
      temp=front; 
      front=front->next;
      free(temp);
    }
}
void peek()
{
    printf("The top most element is %d\n",front -> data);
}

void display()
{
    temp = front;
    while(temp -> next!=0)
    {
        printf("%d\t",temp->data);
        temp = temp ->next;
    }
}

void main()
{
    int choice=1,nNum;
    while(choice==1)
    {
       printf("Enter any choice \n1.enqueue\n2.dequeue\n3.peek\n4.display\n");
       scanf("%d",&nNum);
       switch(nNum)
       {
           case 1:
           enqueue();
           break;
           
           case 2:
           dequeue();
           break;
           
           case 3:
           peek();
           break;
           
           case 4:
           display();
           break;
           
           default : exit(0);
       }
       printf("Do u wanna continue? \nPress 1 to continue\nPress 0 to exit\n");
       scanf("%d",&choice);
    }
    
}
