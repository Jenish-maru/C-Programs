#include<stdio.h>
#include<conio.h>
void merge(int arr[],int low,int mid,int high);
void mergesort(int arr[],int low,int high)
{
 int mid;
 if(low<high)
 {
   mid=(low+high)/2;
   mergesort(arr,low,mid);
   mergesort(arr,mid+1,high);
   merge(arr,low,mid,high);
 }

}
void merge(int arr[],int low,int mid,int high)
{
 int i=low;
 int j=mid+1;
 int k=0;

 int temp[100];

 while(i<=mid && j<=high)
 {
   if(arr[i]<arr[j])
   {
     temp[k++]=arr[i++];
     }
  else
  {
    temp[k++]=arr[j++];
    }
  }

  while(i<=mid)
  {
   temp[k++]=arr[i++];
   }
   while(j<=high)
   {
     temp[k++]=arr[j++];
     }

     for(i=low,k=0;i<=high;i++,k++)
     {
      arr[i]=temp[k];
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

   mergesort(arr,0,n-1);

   printf("\nSorted Array: ");

   for(i=0;i<n;i++)
   {
     printf("%d ",arr[i]);
     }
   getch();
   }