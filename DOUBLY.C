#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  struct node *prev;
  int data;
  struct node *next;
};
struct node *head=NULL,*newnode,*temp;

void create()
{
 int choice=1;
	   while(choice)
     {
      newnode=(struct node *)malloc(sizeof(struct node));
     printf("\nEnter data: ");
     scanf("%d",&newnode->data);
     newnode->prev=NULL;
     newnode->next=NULL;
     if(head==NULL)
     {
       head=temp=newnode;
       }
       else
       {
	 temp->next=newnode;
	 newnode->prev=temp;
	 temp=newnode;
	 }
	 printf("\nDo you want to continue(1/0): ",);
	 scanf("%d",&choice);
     }
}
void display()
{
   temp=head;
   if(head==NULL)
   {
    printf("\nList is empty !");

    }
    else
    {
      printf("\nLinked List: ");
      while(temp!=NULL)
      {  printf("%d ->",temp->data);
	temp=temp->next;
	}
	printf("NULL");
     }
}
void ins_beg()
{
  newnode=(struct node)malloc(sizeof(struct node));
  printf("\nEnter data: ");
  scanf("%d",&newnode->data);

   newnode->prev=NULL;
   newnode->next=head;
   if(head!=NULL)
   {
     head->prev=newnode;
     }
     head=newnode;


}
void ins_end()
{
 newnode=(struct node *)malloc(sizeof(struct node));

 printf("\nEnter data: ");
 scanf("%d",&newnode->data);
 newnode->next=NULL;

 if(head==NULL)
 {
   head=newnode;
   newnode->prev=NULL;
   }
   else
   {
     temp=head;
     while(temp->next!=NULL)
     {
       temp=temp->next;
       }
       temp->next=newnode;
       newnode->prev=temp;
     }
}
void ins_pos()
{          int pos;
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("\nEnter data: ");
 scanf("%d",&newnode->data);

 printf("\nEnter position: ");
 scanf("%d",&pos);

 newnode->next=NULL;

 if(pos==1)
 {
   ins_beg();
   }
   else
   {  temp=head;
   for(i=1;i<pos-1;i++)
   {
     temp=temp->next;
     }
     newnode->next=temp->next;
     newnode->prev=temp;
     if(temp->next!=NULL)
     {
      temp->next->prev=newnode;
     }
     temp->next=newnode;

}
void main()
{
     int choice;

     do
     {
	  printf("\n\n=========MANU==========\n");
	  printf("1: Create\n");
	  printf("2: Insert at beggining \n");
	  printf("3: INsert at end \n");
	  printf("4: Insert at any position \n");
	  printf("5: Delete at beggining \n");
	  printf("6: Delete at end \n");;
	  printf("7: Delete at any position \n");
	  printf("8: Search \n");
	  printf("9: Display \n");
	  printf("10: Exit \n");

	  printf("\nEnter choice: ");
	  scanf("%d",&choice);

	  switch(choice)
	  {
		case 1: create(); break;

		case 2: ins_beg(); break;

		case 3: ins_end(); break;

		case 4: ins_pos(); break;

		case 5: del_beg(); break;

		case 6: del_end(); break;

		case 7: del_pos(); break;

		case 8: search(); break;

		case 9:  display(); break;

		case 10: printf("\nThanks for using me %c",1);
			  break;

		default: printf("\nEnter valid choice !");
			 break;
	  }
     } while (choice!=10);


     getch();
}
