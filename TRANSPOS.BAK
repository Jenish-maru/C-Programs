#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,arr[20][20],r,c,tra[20][20];
  clrscr();

  printf("Enter total number of Rows: ");
  scanf("%d",&r);

  printf("Enter total number of columns: ");
  scanf("%d",&c);

  printf("Enter values: \n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("Enter value at arr[%d][%d]: ",i,j);
      scanf("%d",&arr[i][j]);
      }
    }

    for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d ",arr[i][j]);

      }
      printf("\n");
    }


    for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       tra[j][i]=arr[i][j];
      }
    }

    printf("Transpose of the matrix:..\n");
    for(i=0;i<c;i++)
  {
    for(j=0;j<r;j++)
    {
      printf("%d ",tra[i][j]);
      }
      printf("\n");


    }

    getch();
    }

