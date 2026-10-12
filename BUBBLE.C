#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[100],i,temp,j,n;

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
   for(j=0;j<n-1-i;j++)
   {
     if(arr[j]>arr[j+1])
     {
       temp=arr[j+1];
       arr[j+1]=arr[j];
       arr[j]=temp;
       }
     }
   }
     printf("\nSorted array: ");
   for(i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
    }

 getch();
}
