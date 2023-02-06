#include<stdio.h>

void linear_search(int a[],int n)
{
    int i=0,flag=0;
   for(i=0;i<5;i++)
   {
       if(a[i]==n)
       {
           flag=1;
           break;
       }
   }
   if(flag==1)
   {
       printf("The element %d is found at %d position",a[i],i+1);
   }
   else
   {
       printf("Element not found");
   }
}

void main()
{
    int a[5];
    int nValue,i;
    printf("Enter the array of size 5\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key to be searched\n");
    scanf("%d",&nValue);
    linear_search(a,nValue);
}