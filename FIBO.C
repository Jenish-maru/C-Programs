#include<stdio.h>
#include<conio.h>
int fibo( int i)
{
  if(i==0)return 0;

  else if(i==1) return 1;

  return fibo(i-1)+fibo(i-2);
  }
void main()
{
  int i,n;
  clrscr();

  printf("Enter limit of fibonacci series: ");
  scanf("%d",&n);

  printf("Fibonacci series:");

  for(i=0;i<n;i++)
  {
    printf("%d ",fibo(i));
    }

    getch();
    }