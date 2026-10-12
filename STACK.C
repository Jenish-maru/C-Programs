#include<stdio.h>
#include<conio.h>

# define n 5
int top=-1,i;
int stack[n];

void push()
{
  int x;
  if(top==n-1)
  {
    printf("\nStack overflow !");
   }
   else
   {
  printf("\nEnter value to push: ");
  scanf("%d",&x);
  top++;
  stack[top]=x;
  printf("\nValue inserted !");
  }
 }
void pop()
{
  if(top==-1)
  {
    printf("\nStack underflow !");
    }
    else{
     top--;
     printf("\nValue poped !");
     }
}
void peek()
{
 if(top==-1)
 {
  printf("\nStack underflow !");
  }
  else
  {
   printf("\nTOP element => %d",stack[top]);
   }
 }
void display()
{
  if(top==-1)
  {
    printf("\nStack is empty !");
    }
    else
    {
     for(i=top;i>=0;i--)
     {
      printf("%d\n",stack[i]);
      }
    }
 }
void main()
{
  int choice;
  clrscr();

  do
  {
    printf("\n\n========MANU========\n");
    printf("1: Push\n");
    printf("2: Pop\n");
    printf("3: peek\n");
    printf("4: display");
    printf("5: Exit");
    printf("==========END=============\n");
    printf("\nEnter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
     case 1:  push(); break;

     case 2:  pop(); break;

     case 3: peek(); break;

     case 4: display(); break;

     case 5: printf("\nThank you for using me %c",1);
	       break;
	       default: printf("\nEnter valid choice !");
	       break;
    }

  }while(choice !=5);
  getch();
  }