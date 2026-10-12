#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[20][20],i,j,r,c,k,sparse[20][20];
 int count=0;
 clrscr();

 printf("Enter row: ");
 scanf("%d",&r);

 printf("Enter columns: ");
 scanf("%d",&c);

 printf("\nEnter data: \n");
 k=1;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
    printf("Enter values at arr[%d][%d]: ",i,j);
    scanf("%d",&arr[i][j]);
	if(arr[i][j]!=0)
    {
      count++;
      sparse[k][0]=i;
      sparse[k][1]=j;
      sparse[k][2]=arr[i][j];
      k++;
      }
    }
  }
sparse[0][0]=r;
sparse[0][1]=c;
sparse[0][2]=count;

printf("\nSparse matrix:\n");
  for(i=0;i<count+1;i++)
 {
  for(j=0;j<3;j++)
  {
    printf("%d ",sparse[i][j]);

    }
    printf("\n");
  }


  getch();
  }