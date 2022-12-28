#include<stdio.h>
int linearsearch(int a[5],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int a[5],n,i,key,pos;
	printf("Enter n:");
	scanf("%d",&n);
	printf("enter array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter key:");
	scanf("%d",&key);
	pos=linearsearch(a,n,key);
	if(pos==-1)
	{
		printf("element is not found");
	}
	else
	{
		printf("element is found at %d position",pos+1);
	}
}
	Enter n:5
enter array:1 2 3 4 5
Enter key:3
element is found at 3
