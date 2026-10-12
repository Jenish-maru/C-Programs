#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,mid,low,high,key,arr[20],n,found=0;
  int temp;

  clrscr();

  printf("\nEnter total number of aaray elements: ");
  scanf("%d",&n);

  printf("Enter values in array: \n");
  for(i=0;i<n;i++)
  {
    printf("Enter value at [%d]: ",i);
    scanf("%d",&arr[i]);
    }

    printf("\nEnter value to search: ");
    scanf("%d",&key);

    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {
	 if(arr[i]>arr[j])
	 {
	   temp=arr[i];
	   arr[i]=arr[j];
	   arr[j]=temp;
	   }
	 }
       }
       printf("\nNow your array is sorted : ");
       for(i=0;i<n;i++)
       {
	 printf("%d ",arr[i]);
	 }

	 low=0;
	 high=n-1;


	 while(low<=high)
	 {
	      mid=(low+high)/2;
	      if(arr[mid]==key)
	      {
		printf("\n%d is found at %d",key,i);
		found=1;
		break;
		}
		else if(arr[mid]>key)
		{
		  high=mid-1;
		  }
		  else
		  {
		    low=mid+1;
		    }
	      }
	      if(!found)
	      {
		printf("\n%d is not available in this array !",key);
		}

	 getch();
	 }