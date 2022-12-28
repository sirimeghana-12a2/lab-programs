#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,Q[5];
void insert()
{
	int num;
	printf("Enter element to insert:");
	scanf("%d",&num);
	if(rear>=5-1)
	{
		printf("Q is full");
	}
	if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear++;
	}
		Q[rear]=num;
}
void delete()
{
	int num;
	if(front==-1 || front>rear)
	{
		printf("Q is empty");
	}
	else
	{
		num=Q[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;
		}
		printf("Value deleted");
	}
}
void display()
{
	int i;
	if(rear==-1)
	{
		printf("No element in the Q");
	}
	for(i=front;i<=rear;i++)
	{
		printf("%d",Q[i]);
	}
}
void main()
{
	int ch;
	while(ch!=4)
	{
		printf("Enter choice:\n1.insert\n2,delete\n3.display\n4.default");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default :printf("Enter choices between 1 to3:");
		}
	}
}
