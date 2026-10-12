#include<stdio.h>
#include<conio.h>
void main()
{
 int arr1[50][50];
  int arr2[50][50];
  int mul[50][50];
  int r1,c1,r2,c2,i,j,k;
   clrscr();

  printf("First Matrix: \n");
  printf("Total number of Rows: ");
  scanf("%d",&r1);
  printf("Total number of Columns: ");
  scanf("%d",&c1);

  printf("Second Matrix: \n");
  printf("Total number of Rows: ");
  scanf("%d",&r2);
  printf("Total number of Columns: ");
  scanf("%d",&c2);

  if(c1!=r2)
  {
   printf("This Multiplication is not possible!!");
   goto endproc;
   }
   printf("Enter values in first matrix: \n");
   for(i=0;i<r1;i++)
   {
     for(j=0;j<c1;j++)
     {
      printf("Value at arr[%d][%d]= ",i,j);
      scanf("%d",&arr1[i][j]);
      }
    }

     printf("\n\nEnter values in second matrix: \n");
   for(i=0;i<r1;i++)
   {
     for(j=0;j<c1;j++)
     {
      printf("Value at arr[%d][%d]= ",i,j);
      scanf("%d",&arr2[i][j]);
      }
    }

   for(i=0;i<r1;i++)
   {
     for(j=0;j<c1;j++)
     {
      mul[i][j]=0;
      }
    }

    //multiplication matrix
    for(i=0;i<r1;i++)
    {
     for(j=0;j<c2;j++)
     {
       for(k=0;k<c1;k++)
       {
	 mul[i][j]=mul[i][j]+(arr1[i][k])*(arr2[k][j]);
	 }
       }
     }
     for(i=0;i<r1;i++)
     {
      for(j=0;j<c2;j++)
      {
       printf("%d ",mul[i][j]);
       }
       printf("\n");
     }

  endproc:
  getch();
 }
