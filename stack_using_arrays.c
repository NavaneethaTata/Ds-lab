#include<stdio.h>
#include<stdlib.h>
# define N 5
int stack[N];
int top=-1;
void push()
{
    int nNum;
    printf("Enter the element to be pushed\n");
    scanf("%d",&nNum);
    if(top==N-1)
    {
        printf("Overflow!\n");
    }
    else
    {
        top++;
        stack[top]=nNum;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Underflow!\n");
    }
    else
    {
        int nNum;
        nNum = stack[top];
        top--;
        printf("%d element is deleted\n",nNum);
    }
}
void peek()
{
    if(top==-1)
    {
        printf("The stack is empty\n");
    }
    else
    {
      printf("The topmost element in the stack is %d\n",stack[top]);
        
    }
    
}

void display()
{
    int i=0;
    for(i=top;i>=0;i--)
    {
        printf("%d\t",stack[i]);
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







