#include<stdio.h>
#include<conio.h>
void main()
{
   int arr1[10][10],arr2[10][10],i,j,k,sum[10][10];
   int r1,c1,r2,c2;

   clrscr();

   printf("Enter number of rows for arr1: ");
   scanf("%d",&r1);

   printf("Enter number of column for arr1: ");
   scanf("%d",&c1);


   printf("Enter number of rows for arr2: ");
   scanf("%d",&r2);

   printf("Enter number of columns for arr2: ");
   scanf("%d",&c2);
   if(c1!=r2)
   {
     printf("Matrix multiplication is not possible !");
     goto endpro;
     }

   printf("Enter valus in arr1:\n");
   for(i=0;i<r1;i++)
   {
     for(j=0;j<c1;j++)
     {
	printf("Value at arr[%d][%d]: ",i,j);
	scanf("%d",&arr1[i][j]);
	}
     }


   printf("\nEnter valus in arr2:\n");
   for(i=0;i<r2;i++)
   {
     for(j=0;j<c2;j++)
     {
	printf("Value at arr[%d][%d]: ",i,j);
	scanf("%d",&arr2[i][j]);
	}
     }

     for(i=0;i<r1;i++)
     {
       for(j=0;j<c1;j++)
       {
                 	printf("%d ",arr1[i][j]);
        	}
        	printf("\n");
      }

     printf("\n");

     for(i=0;i<r2;i++)
     {
       for(j=0;j<c2;j++)
       {
          	printf("%d ",arr2[i][j]);
	      }
	        printf("\n");
      }

     //multiplication logic
     printf("\n");

     for(i=0;i<r1;i++)
     {
       for(j=0;j<c2;j++)
       {
	  sum[i][j]=0;
	  for(k=0;k<c1;k++)
	  {
	  sum[i][j]=sum[i][j]+arr1[i][k]*arr2[k][j];
	  }
       }
     }

     for(i=0;i<r1;i++)
     {
       for(j=0;j<c2;j++)
       {
	 printf("%d",sum[i][j]);
	 }
       printf("\n");
     }

    endpro:
     getch();
     }