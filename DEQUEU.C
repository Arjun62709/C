#include<stdio.h>
#include<conio.h>
int front=0,rear=0,q[50],n;
void rear_enqueue(int item)
{
   if(front==(rear+1)%n)
     printf("\nQueue is full");
   else
    {
      rear=(rear+1)%n;
      q[rear]=item;
      printf("\nItem inserted \n");
    }

}
void front_dequeue()
{
  if(front==rear)
    printf("\nQueue is empty");
  else
    {
      front=(front+1)%n;
      printf("\nDeleting %d from queue",q[front]);

    }

}
void display()
{
   int i;
   if(front==rear)
      printf("\nQueue is empty");
   else
    {
      i=front;
      printf("\n The Queue is\n");
      while(i!=rear)
      {
       i=(i+1)%n;
       printf("\n%d",q[i]);

      }
    }
}

void rear_dequeue()
{
   if(front==rear)
     {
       printf("\nQueue is empty");
      }
   else
     {
	printf("\nDeleting %d",q[rear]);
	rear=(n+(rear-1))%n;
     }
}
void front_enqueue(int item)
{
   front=(n+(front-1))%n;
   if(front==rear)
     {
	printf("\nQueue if full");
      }
   else
      {
       front=(n+(front+1))%n;
       q[front]=item;
       front=(n+(front-1))%n;
       printf("\nItem inserted");
      }
 }
void main()
{
  int i,ch,item,sh;
  clrscr();
  printf("\nEnter the no: of elements: ");
  scanf("%d",&n);
  do
   { printf("\n\tMAIN MENU\n OPERATIONS\n 1.INPUT RESTRICTED QUEUE(insertion through rear only)\n2.OUTPUT RESTRICTED QUEUE (deletion through front only)\n3.Exit\n");
		printf("\nEnter the choice: ");
		scanf("%d",&sh);

    switch(sh)
     {
       case 1:

	      {

		printf("\n\tMAIN MENU\nINPUT RESTRICTED QUEUE\n 1.INSERTION THROUGH REAR\n2.DELETION THROUGH REAR\n3.DELETION THROUGH FRONT\n4.DISPLAY\n5.EXIT\n");
		printf("\nEnter the choice: ");
		scanf("%d",&ch);
		switch(ch)
		 {
			case 1 :
				printf("\nEnter the item: ");
				scanf("%d",&item);
				rear_enqueue(item);
				break;
			case 2 :
				rear_dequeue();
				break;
			case 3 :
				front_dequeue();
				break;
			case 4 :
				 display();
				 break;
			case 5 :
				 exit(0);


		 }
	    }
	    break;

       case 2:

		{
		   printf("\n\tMAIN MENU\nOUTPUT RESTRICTED QUEUE\n 1.INSERTION THROUGH FRONT\n2.INSERTION THROUGH REAR\n3.DELETION THROUGH FRONT\n4.DISPLAY\n5.EXIT\n");
		printf("\nEnter the choice: ");
		scanf("%d",&ch);
		switch(ch)
		 {
			case 1 :
				printf("\nEnter the item: ");
				scanf("%d",&item);
				front_enqueue(item);
				break;
			case 2 :
				printf("\nEnter the item: ");
				scanf("%d",&item);
				rear_enqueue(item);
				break;
			case 3 :
				front_dequeue();
				break;

			case 4 :
				display();
				break;

			case 5 :
				exit(0);

		 }
	    }
	     break;

       case 3   :
		     exit(0);
	}
       }while(sh<=4);



   getch();
 }