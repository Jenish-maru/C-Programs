8#include<stdio.h>
#include<conio.h>
#define max 5
int front=-1;
int rear=-1;
int que[max];

void enqueue()
{
 int x;

 if(front==(rear+1)%max)
 {
   printf("\nQueue is full =>Overflow !");
   }
  else
   {
   printf("\nEnter data:  ");
   scanf("%d",&x);

    if(front==-1 && rear==-1)
    {
      front=rear=0;
      }
      else
      {
	rear=(rear+1)%max;
	}
	que[rear]=x;
	printf("\nValue %d is inserted %c",x,1);
     }
}

void dequeue()
{
  if(front==-1)
  {
    printf("\nQueue is empty !");
    }
    else
    {
      if(front==rear)
      {
	printf("\n%d dequeued successfully %c",que[front],1);
	front=rear=-1;
	}
	else
	{     printf("\n%d dequeued successfully %c",que[front],1);

	  front=(front+1)%max;
	  }
      }
}

void peek()
{
  if(front==-1 && rear==-1)
  {
    printf("\nQueue is empty !");
    }
    else
    {
      printf("\nFront: ==> %d",que[front]);
      printf("\nRear:  ==> %d",que[rear]);
      }
}
void display()
{   int i;

   if(front==-1 && rear==-1)
   {
     printf("\nQueue is empty !");
     }
     else
     {              i=front;
       printf("\nQueue elements => ");
       while(i!=rear)
       {
	 printf("%d ",que[i]);
	 i=(i+1)%max;
	 }
	 printf("%d",que[rear]);
       }
}

void main()
{ int choice;

  clrscr();

  do
  {
    printf("\n======MANU=======\n");
    printf("\n1:Enqueue\n2:Dequeue\n3:Peek\n4:Display\n5:Exit\n");
    printf("========END========\n");

    printf("\nSelect choice: ");
    scanf("%d",&choice);

      switch(choice)
      {
	case 1: enqueue(); break;

	case 2: dequeue();  break;

	case 3: peek();  break;

	case 4: display(); break;

	case 5: printf("\nThank you for using me %c",1);
		   break;
	 default: printf("\nEnter valid choice !");
		     break;
       }

  }while(choice!=5);


  getch();
  }