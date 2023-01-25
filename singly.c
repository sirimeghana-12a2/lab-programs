#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
}*First=NULL;
void createlist()
{
	int A[5],n,i;
	struct node *t,*last;
	printf("Enter array size:");
	scanf("%d",&n);
	First = (struct node*)malloc(sizeof(struct node));
	First->next=NULL;
	last = First;
	for(i=1;i<5;i++)
	{
		t =(struct node*)malloc(sizeof(struct node));
		t->info=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void traverse()
{
	struct node *temp;
	if(First==NULL)
	{
		printf("List is empty");
	}
	else
	{
		temp=First;
		while(temp!=NULL)
		{
			printf("%d",temp->info);
			temp=temp->next;
		}
	}
}
void insertatbeg()
{
	int data;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter element to be inserted:");
	scanf("%d",&data);
	temp->info=data;
	temp->next=First;
	First=temp;
}
void insertatend()
{
	int data;
	struct node *temp,*head;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter number to insert at end:");
	scanf("%d",&data);
	temp->next=NULL;
	temp->info=data;
	head=First;
	while(head->next!=NULL)
	{
		head=head->next;
	}
	head->next=temp;
}
void insertatpos()
{
	struct node *temp,*newnode;
	int pos,data,i=1;
	newnode=malloc(sizeof(struct node));
	printf("\nEnter position and data:");
	scanf("%d %d",&pos,&data);
	temp=First;
	newnode->info=data;
	newnode->next=0;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void deleteFirst()
{
	struct node *temp;
	if(First==NULL)
	{
		printf("\n List is empty\n");
	}
	else
	{
		temp=First;
		First=First->next;
		free(temp);
	}
}
void deleteend()
{
	struct node *temp,*prevnode;
	if(First==NULL)
	{
		printf("\nList is empty\n");
	}
	else
	{
		temp=First;
		while(temp->next!=0)
		{
			prevnode=temp;
			temp=temp->next;
		}
		free(temp);
		prevnode->next=0;
	}
}
void deletepos()
{
	struct node *temp,*position;
	int i=1,pos;
	if(First==NULL)
	{
		printf("\nList is empty\n");
	}
	else
	{
		printf("Enter pos:");
		scanf("%d",&pos);
		position=malloc(sizeof(struct node));
		temp=First;
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		position=temp->next;
		temp->next=position->next;
		free(position);
	}
}
int main()
{
	int choice;
	while(1)
	{
		printf("\n 1.To see list\n"
			"\n2.insertatbeg\n"
			"\n3.insertatend\n"
			"\n4.insertatpos\n"
			"\n5.deleteFirst\n"
			"\n6.deleteend\n"
			"\n7.deletepos\n"
			"\n8.Exit\n");
		printf("Enter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				traverse();
				break;
			case 2:
				insertatbeg();
				break;
			case 3:
				insertatend();
				break;
			case 4:
				insertatpos();
				break;
			case 5:
				deleteFirst();
				break;
			case 6:
				deleteend();
				break;
			case 7:
				deletepos();
				break;
			case 8:
				exit(0);
				break;
		}
	}
}

