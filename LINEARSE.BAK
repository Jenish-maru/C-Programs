#include<stdio.h>
#include<conio.h>
void main()
{
   int i,arr[20],key,n;
   int found=0;
   clrscr();

   printf("Enter aaray limit: ");
   scanf("%d",&n);

   printf("\nEnter values:  \n");

   for(i=0;i<n;i++)
   {
    printf("Enter value at arr[%d]: ",i);
    scanf("%d",&arr[i]);
    }

    printf("Enter key value to search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
      if(arr[i]==key)
      {
	printf("\nValue found at position => %d",i);
	found=1;
	break;
	}
     }
     if(!found)
     {
       printf("\n%d is not available in this aaray !",key);
       }

       getch();
       }