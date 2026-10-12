#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j, arr1[20][20],arr2[20][20],r1,c1,r2,c2,sum1=0,sum2=0;

  clrscr();

  printf("Enter total number of rows : ");
  scanf("%d",&r1);

   printf("Enter total number of columns : ");
  scanf("%d",&c1);



  printf("\nEnter values in aar1: \n");
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    {
     printf("Value at arr[%d][%d]: ",i+1,j+1);
     scanf("%d",&arr1[i][j]);
     if(i==j)
     {
       sum1=sum1+arr1[i][j];
       }
     }
   }

     printf("\n\nEnter values in aar2: \n");
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    {
     printf("Value at arr[%d][%d]: ",i+1,j+1);
     scanf("%d",&arr2[i][j]);
       if(i==j)
     {
       sum2=sum2+arr2[i][j];
       }
     }
   }

     printf("\nSum of both array: \n");
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    {
     printf("%d ",arr1[i][j]+arr2[i][j]);
     }
     printf("\n");
   }


  printf("\nSum of dialgonal of arr1: %d",sum1);
  printf("\nSum of dialgonal of arr2: %d",sum2);

   getch();
   }