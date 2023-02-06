#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};struct node * head,* newnode, * temp;

void insert_at_begining()
{
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode -> next = head;
    head = newnode;
    printf("Enter the data\n");
    scanf("%d",&newnode -> data);
}

void insert_at_end()
{
    newnode = (struct node *) malloc(sizeof(struct node));
    temp = head;
    while(temp -> next!=0)
    {
        temp = temp -> next;
    }
    temp -> next = newnode;
    printf("Enter the data\n");
    scanf("%d",&newnode -> data);
}

void insert_at_pos()
{
    int i=1,pos;
    newnode = (struct node *) malloc(sizeof(struct node));
    printf("Enter the position at which node is to be entered\n");
    scanf("%d",&pos);
    temp = head;
    while(i<pos)
    {
        temp = temp -> next;
        i++;
    }
    newnode -> next = temp -> next;
    temp -> next = newnode;
    printf("Enter the data");
    scanf("%d",&newnode -> data);
}
void delete_begining()
{
  temp = head;
  head = head -> next;
  free(temp);
}
void delete_end()
{
  struct node * prevnode;
  temp = head;
  while(temp -> next!=0)
  {
      prevnode = temp;
      temp = temp -> next;
  }
  if(temp == head)
  {
      head = 0;
  }
  else
  {
    prevnode -> next = 0;
    free(temp);
  }
}

void delete_pos()
{
    struct node * nextnode;
    int i=1,pos;
    printf("Enter the position to be deleted\n");
    scanf("%d",&pos);
    temp = head;
    while(i<pos-1)
    {
        temp = temp -> next;
        i=i+1;
    }
    nextnode = temp -> next;
    temp -> next = nextnode -> next;
    free(nextnode);
}
void display()
{
    if(head==NULL)
    {
        printf("Empty list");
    }
    else
    {
        temp = head;
        printf("List:\n");
        while(temp!=0)
        {
            printf("%d",temp -> data);
            temp = temp ->next;
        }
    }
}
int main()
{
    int i;
    while(1)
    {
        printf("\n 1.Insert begining\n 2.Insert end\n 3.Insert at pos\n 4.delete begining\n 5.delete end\n 6.delete at pos\n 7.display\nselect choice:");
        scanf("%d",&i);
        switch(i)
        {
            case 1 : insert_at_begining();
            break;
            case 2 : insert_at_end();
            break;
            case 3 : insert_at_end();
            break;
            case 4 : delete_begining();
            break;
            case 5 : delete_end();
            break;
            case 6 : delete_pos();
            break;
            case 7 : display();
            break;
            default : exit(0);
            
        }
    }
}