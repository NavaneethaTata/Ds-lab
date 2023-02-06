#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};struct node * newnode , * top=0 ,* temp;

void push()
{
    newnode = (struct node *) malloc (sizeof(struct node));
    printf("Enter the element to be pushed\n");
    scanf("%d",& newnode -> data);
    newnode -> next = top;
    top = newnode;
}
void pop()
{
    temp = top;
    top = top -> next;
    free(temp);
}
void peek()
{
    printf("The top most element is %d\n",top -> data);
}

void display()
{
    temp = top;
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
       printf("Enter any choice \n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n");
       scanf("%d",&nNum);
       switch(nNum)
       {
           case 1:
           push();
           break;
           
           case 2:
           pop();
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






