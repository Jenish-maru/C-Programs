#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[100],i,temp,j,n,min;

 clrscr();
 printf("\nEnter total elements: ");
 scanf("%d",&n);

 printf("\nEnter values: \n");
 for(i=0;i<n;i++)
 {
   printf("Value at arr[%d]: ",i);
   scanf("%d",&arr[i]);
   }
   for(i=0;i<n-1;i++)
   {
      min=i;
      for(j=i+1;j<n;j++)
      {
	if(arr[j]<arr[min])
	{
	  min=j;
	  }
	}
	if(min!=i)
	{
	  temp=arr[min];
	  arr[min]=arr[i];
	  arr[i]=temp;
	 }
 }
 printf("\nSorted Array: ");

 for(i=0;i<n;i++)
 {
   printf("%d ",arr[i]);
   }

   getch();
   }