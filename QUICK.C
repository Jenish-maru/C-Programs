#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
 int temp=*a;
 *a=*b;
 *b=temp;
}
//void partition(int arr[],int low,int high);

int partition(int arr[],int low,int high)
{
 int pivot=arr[high];
  int i=low-1;
  int j;
  for(j=low;j<high;j++)
  {
    if(arr[j]<pivot)
    {
      i++;
      swap(&arr[i],&arr[j]);
      }
     }
     swap(&arr[i+1],&arr[high]);
     return i+1;
}
void quicksort(int arr[],int low,int high)
{
 int pi;
 if(low<high)
 {
   pi=partition(arr,low,high);

   quicksort(arr,low,pi-1);
   quicksort(arr,pi+1,high);

  }
}
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

   quicksort(arr,0,n-1);

   printf("\nSorted Array: ");
   for(i=0;i<n;i++)
   {
     printf("%d ",arr[i]);
     }

   getch();
   }