#include<stdio.h>
#include<conio.h>
# define n 5
int front=-1,rear=-1;
int que[n];
void enq()
{
    int x;
    printf("\nEnter value: ");
    scanf("%d",&x);

    if(rear==n-1)
    {
      printf("\nQueue overflow !");
      }
      else if(front==-1 && rear==-1)
      {
       front=rear=0;
       que[rear]=x;
       printf("\nValue inserted %c",1);
       }
       else{
	rear++;
	que[rear]=x;
	printf("\nValue inserted %c",1);
	}

}
void deq()
{
  if(front==-1 && rear==-1)
  {
    printf("\nQueue underflow !");
    }
    else if(front==rear)
    {
    printf("\n%d deleted successfully %c",que[front],1);
     front=rear=-1;
     }
     else
     {
       printf("\n%d deleted successfully %c",que[front],1);
       front++;
       }

}
void peek()
{
  if(front==-1)
  {
   printf("\nQueue is empty !");
   }
   else
   {
     printf("\nTop most element id => %d",que[front]);
     }

}
void display()
{  int i;
 if(front==-1 && rear==-1)
 {
   printf("\nQueue is empty !");
   }
   else
   {
     for(i=front;i<=rear;i++)
     {
       printf("%d ",que[i]);
       }
     }
}
void main()
{
  int choice;

  clrscr();

  do
  {
    printf("\n========MANU=========\n");
    printf("1: Enqueue \n");
    printf("2: Dequeue \n");
    printf("3: Peek \n");
    printf("4: Display \n");
    printf("5: Exit \n");
    printf("=========END=========\n");

    printf("\nEnter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
      case 1: enq(); break;

      case 2: deq(); break;

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