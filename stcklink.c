#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
struct stack
{
	int a[MAXSIZE];
	int top;
};
void init_stk(struct stack *st)
{
	st->top=-1;
}
int push(struct stack *st,int num)
{
	if(st->top==MAXSIZE-1)
	{
		printf("stack is overflow");
	}
	else
	{
		st->top++;
		st->a[st->top]=num;
	}
}
int pop(struct stack *st)
{
	int num;
	if(st->top==-1)
	{
		printf("stack is underflow");
	}
	else
	{
		num=st->a[st->top];
		st->top--;
		return num;
	}
}
void display(struct stack *st)
{
	int i;
	if(st->top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		for(i=st->top;i>=0;i--)
		{
			printf("%d",st->a[i]);
		}
	}
}
int main()
{
	int element,val,opt;
	struct stack ptr;
	init_stk(&ptr);
	while(1)
	{
		printf("\n\nt STACK PRIMITIVE OPERATIONS");
		printf("\n1.PUSH");
		printf("\n2.POP");
		printf("\n3.DISPLAY");
		printf("\n4.QUIT");
		printf("\n");
		printf("Enter your option:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("\nEnter the element into stack:");
				scanf("%d",&val);
				push(&ptr,val);
				break;
			case 2:
				element=pop(&ptr);
				printf("\nThe element popped from stack is %d",element);
				break;
			case 3:
				printf("\nThe current stack elements are:");
				display(&ptr);
				break;
			case 4:
				exit(0);
			default:
				printf("\n enter correct option!Try again");
		}
	}
	return(0);
}

