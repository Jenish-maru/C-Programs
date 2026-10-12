#include<stdio.h>
#include<conio.h>

void main()
{
  int arr[20], i, r, pos, x, key;
  int choice, find,min;

  clrscr();

  printf("Enter total number of array elements: ");
  scanf("%d", &r);

  printf("Enter values:\n");
  for(i = 0; i < r; i++)
  {
    printf("Value at arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  do {
    printf("\n\n======= MENU ======\n");
    printf("1: Insert\n");
    printf("2: Delete\n");
    printf("3: Search\n");
    printf("4: Display\n");
    printf("5: Smallest Element\n");
    printf("6: Exit\n");
    printf("===================\n");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
      case 1:
	printf("\nEnter position to insert (1 to %d): ", r+1);
	scanf("%d", &pos);

	if(pos < 1 || pos > r+1)
	{
	  printf("\nPosition is not valid!");
	  break;
	}

	printf("Enter value: ");
	scanf("%d", &x);

	for(i = r - 1; i >= pos - 1; i--)
	{
	  arr[i + 1] = arr[i];
	}

	arr[pos - 1] = x;
	r++;

	printf("\nValue inserted!");
	break;

      case 2:  if(r==0)
	   { printf("\nArray is empty !");
	     break;}
	printf("\nEnter position to delete (1 to %d): ", r);
	scanf("%d", &pos);

	if(pos < 1 || pos > r)
	{
	  printf("\nPosition is not valid!");
	  break;
	}

	for(i = pos - 1; i < r - 1; i++)
	{
	  arr[i] = arr[i + 1];
	}

	r--;
	printf("\nValue deleted!");
	break;

      case 3:
	     if(r==0)
	   { printf("\nArray is empty !");
	     break;}
	find = 0;
	printf("\nEnter value to search: ");
	scanf("%d", &key);

	for(i = 0; i < r; i++)
	{
	  if(arr[i] == key)
	  {
	    printf("\nValue found at position => %d", i + 1);
	    find = 1;
	    break;
	  }
	}

	if(!find)
	{
	  printf("\nValue %d is not available in array!", key);
	}

	break;

      case 4:
		if(r==0)
	   { printf("\nArray is empty !");
	     break;}
	printf("\nArray: ");
	for(i = 0; i < r; i++)
	{
	  printf("%d ", arr[i]);
	}
	break;

      case 5:     if(r==0)
	   { printf("\nArray is empty !");
	     break;}
	       min=arr[0];

		  for(i=0;i<r;i++)
		 {
		    if(arr[i]<min)
		    {
		     min=arr[i];

		     }
		   }
		   printf("\nSmallest Element => %d",min);
		   break;

      case 6:
	printf("\n\nThank you for using me!");
	break;

      default:
	printf("\nSelect valid choice!");
    }

  } while(choice != 6);

  getch();
}