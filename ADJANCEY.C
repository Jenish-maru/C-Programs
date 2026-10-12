#include<stdio.h>
#include<conio.h>
void main()
{
  int s,d,i,j; //s=source || d=destination
  int vertices,matrix[20][20];

  clrscr();

  printf("\nEnter number of vertices: ");
  scanf("%d",&vertices);

  for(i=1;i<=vertices;i++)
  {
    for(j=1;j<=vertices;j++)
    {
      matrix[i][j]=0;
      }
    }

     s=0;
     d=0;
    while(s!=-1 && d!=-1)
    { printf("\nEnter s=-1 AND d=-1 to stop:\n");
      printf("Enter source: ");
      scanf("%d",&s);
      printf("Enter destination: ");
      scanf("%d",&d);

      if(s==-1 && d==-1)
      {
	break;
	}
	matrix[s][d]=1;
	matrix[d][s]=1;

     }
	    printf("\nAdjancey Matrix: \n");
	    for(i=1;i<=vertices;i++)
	    {
	      for(j=1;j<=vertices;j++)
	      {
		printf("%d ",matrix[i][j]);
		}
		printf("\n");
	      }

	      getch();
	      }