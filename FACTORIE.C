#include<stdio.h>
#include<conio.h>
int facto(int n)
{
	if(n==1)
	return 1;
	else

	return n*facto(n-1);

}
void main()
{
  int value, i,n;
  clrscr();

  printf("Enter number: ");
  scanf("%d",&n);

 value= facto(n);

    printf("Factorial of a Numbe: %d is => %d",n,value);

    getch();
    }
