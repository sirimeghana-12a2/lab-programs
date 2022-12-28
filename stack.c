#include<stdio.h>
int top=-1,stack[10],num,ch=1;
void pop();
void push();
void original();
int main()
{
	while(ch!=0)
	{
		printf("Enter choice:\n1.push\n2.pop\n3.display");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				original();
				break;
			default:
				printf("Enter choice between 1 to 3:");
		}
	}
}
void push()
{
	if(top==9)
	{
		printf("stack overflow");
	}
	else
	{
		printf("enter element to push:");
		scanf("%d",&num);
		top++;
		stack[top]=num;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("enter element to pop:");
		scanf("%d",&num);
		stack[top]=num;
		top--;
	}
}
void original()
{
	int i;
	if(top==-1)
	{
		printf("no elements");
	}
	for(i=0;i<9;i++)
	{
		printf("elements of stack are %d",stack[i]);
	}
}

