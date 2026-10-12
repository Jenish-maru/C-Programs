#include<stdio.h>
#include<conio.h>
void main()
{

  int sum[10][10],arr1[10][10],arr2[10][10],i,j,r,c;

  clrscr();

  printf("Enter value of Row: ");
  scanf("%d",&r);

  printf("Enter value of colomns: ");
  scanf("%d",&c);

  printf("Enter values in arr1: ");
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   {
     printf("Enter value at arr[%d][%d]: ",i+1,j+1);
     scanf("%d",(*(arr1+i)+j));
     }
   }


  printf("Enter values in arr2: ");
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   {
     printf("Enter value at arr[%d][%d]: ",i+1,j+1);
     scanf("%d",(*(arr2+i)+j));
     }
   }

     for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   {

    (*(*(sum+i)+j))=*(*(arr1+i)+j)+ *(*(arr2+i)+j);
    }
  }

    for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   {
     printf("%d ",*(*(sum+i)+j));
     }
     printf("\n");
     }

     getch();
     }