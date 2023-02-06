#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * pNext;
    struct node * pPrev;
}; struct node * head , * pNewNode, * tail, *pTemp;

void insert_beg()
{
  int value;
  pNewNode = ( struct node *) malloc (sizeof(struct node));
  pNewNode -> pNext=0;
  pNewNode -> pPrev=0;
  printf("Enter yor value\n");
  scanf("%d",&value);
  pNewNode -> data = value;
  if(head==0)
   head = pNewNode;
  else
  {
    pNewNode -> pNext = head;
    head -> pPrev = pNewNode;
    head = pNewNode;
  }
}
 void insert_end()
{
  pNewNode = ( struct node *) malloc (sizeof(struct node));
  int value;
  pNewNode -> pNext=0;
  pNewNode -> pPrev=0;
  printf("Enter yor value\n");
  scanf("%d",&value);
  pNewNode -> data = value;
  tail = head;
  while(tail->pNext!=0)
  {
    tail = tail->pNext;
  }
  pNewNode -> pPrev = tail;
  tail -> pNext = pNewNode;
  tail = pNewNode;
 }
 
void insert_pos()
{
  int i;
  pNewNode = ( struct node *) malloc (sizeof(struct node));
  int value,pos;
  pNewNode -> pNext=0;
  pNewNode -> pPrev=0;
  printf("Enter yor value\n");
  scanf("%d",&value);
  pNewNode -> data = value;
  if(tail==0)
  {
      tail == head;
  }
  while(tail!=0)
  {
    tail = tail->pNext;
  }
  printf("Enter the postion at which the node is to be inserted.\n");
  scanf("%d",&pos);
  if(pTemp==0)
   pTemp = head;
  while(i<pos-1)
  {
      pTemp = pTemp->pNext;
  }
  pNewNode -> pPrev = pTemp;
  pNewNode -> pNext = pTemp->pNext;
  pTemp->pNext = pNewNode;
  pNewNode -> pNext -> pPrev = pNewNode;
}
 
void delete_beg()
{
    pNewNode = ( struct node *) malloc (sizeof(struct node));
    struct node * pTemp;
    pTemp = head;
    head = head -> pNext;
    head -> pPrev = 0;
    free(pTemp);
}
void delete_end()
{
 struct node * pTemp;
 tail = head;
 while(tail->pNext!=0)
  {
    tail = tail->pNext;
  }
  pTemp = tail;
  tail = pTemp->pPrev;
  tail -> pNext = 0;
  free(pTemp);
}
void delete_pos()
{
  int i=1,pos;
  printf("Enter the postion at which the node is to be deleted.\n");
  scanf("%d",&pos);
  pTemp = head;
  while(i<pos)
  {
      pTemp = pTemp->pNext;
      i++;
  } 
  pTemp ->pNext->pPrev = pTemp ->pPrev;
  pTemp -> pPrev -> pNext =  pTemp ->pNext;
  free(pTemp);
}
void display()
{
    pTemp = head;
    while(pTemp!=0)
    {
        printf("%d\t",pTemp->data);
        pTemp = pTemp->pNext;
    }
}
 int main()
 {
     int ch,n=1;
     while(n==1)
     {
      printf(" Enter any of the following choices\n");
      printf("1.insert at begining \n2.insert at end\n3.insert at position\n4.delete at begining\n5.delete at end\n6.delete at position\n7.display");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1: insert_beg();
         break;
         case 2: insert_end();
         break;
         case 3: insert_pos();
         break;
         case 4: delete_beg();
         break;
         case 5: delete_end();
         break;
         case 6: delete_pos();
         break;
         case 7: display();
         break;
         default: exit(0);
      }
     printf("Do you wanna continue?\nPress 0 to exit\nPress 1 to continue");
     scanf("%d",&n);
     }
 }
