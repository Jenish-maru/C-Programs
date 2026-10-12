#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[100],i,temp,j,n,key;

 clrscr();
 printf("\nEnter total elements: ");
 scanf("%d",&n);

 printf("\nEnter values: \n");
 for(i=0;i<n;i++)
 {
   printf("Value at arr[%d]: ",i);
   scanf("%d",&arr[i]);
   }
   for(i=1;i<n;i++)
   {
     key=arr[i];
     j=i-1;
     while(j>=0 &&arr[j]>key)
     {
       arr[j+1]=arr[j];
       j--;
       }
       arr[j+1]=key;
  }

  printf("\nSorted Array: ");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
    }

   getch();
   }