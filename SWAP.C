#include<stdio.h>
#include<conio.h>
void main()
{
  int n1,n2,*num1,*num2;
  int ans;
  num1=&n1;
  num2=&n2;


  clrscr();

  printf("\nEnter number 1: ");
  scanf("%d",&n1);


  printf("\nEnter number 2: ");
  scanf("%d",&n2);

  //*a -->value at address a
  // &a --> address of a
  // &*a --> address of value at a
  // *&a  --> value at address at a


    ans=*num2;
    *num2=*num1;
    *num1=ans;

    printf("\n %d || %d",*num1,*num2);

    getch();
    }