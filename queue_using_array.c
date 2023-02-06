#include<stdio.h>
#include<stdlib.h>
# define N 5
int queue[N];
int front=-1,rear=-1;
void enqueue()
{
    int nNum;
    printf("Enter the element to be pushed\n");
    scanf("%d",&nNum);
    if(rear==N-1)
    {
        printf("Overflow!\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=nNum;
    }
    else
    {
        rear++;
        queue[rear]=nNum;
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("Underflow!\n");
    }
    else if(front==rear)
    {
       front=rear=-1;
    }
    else
    {
        front++;
    }
}
void peek()
{
    if(front==-1)
    {
        printf("The stack is empty\n");
    }
    else
    {
      printf("The topmost element in the stack is %d\n",queue[front]);
        
    }
    
}

void display()
{
    int i=0;
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
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

