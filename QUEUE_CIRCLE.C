#include <stdio.h>
int f=0,r=0,q[100],n;

void display()
{
    int i;
  if (f==r)
    {
     printf("\nQueue is empty");
    }
 else
{
for(i=(f+1)%n;i!=r;i=(i+1)%n)
{
printf("%d\t",q[i]);
}
printf("%d",q[r]);
}
}


void enqueue()
{    int item;
    if (f==(r+1)%n)
    {
	printf("queue is full");
	
    }
    else
{
    printf("\nEnter number to insert: ");
    scanf("%d", &item);
    r=(r+1)%n;
    q[r] = item;
}
}
void dequeue()
{
    if (f==r)
    {
     printf("\nQueue is empty");
    }
    else
    {   f=(f+1)%n;
	printf("\n %d deleted", q[f]);

    }
}
void main()
{
    int ch;
    clrscr();
    printf("Enter the size of the queue:");
    scanf("%d",&n);
    n++;
    do
    {
	printf("\n\n Circular Queue:\n1. Insert \n2. Delete\n3. Display\n4. Exit");
	printf("\nEnter Choice : ");
	scanf("%d", &ch);
	switch (ch)
	{
	    case 1:
		enqueue();
		break;
	    case 2:
		dequeue();
		break;
	    case 3:
		display();
		break;
	}
    }while (ch<4);
getch(); 
}




