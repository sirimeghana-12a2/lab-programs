#include<stdio.h>
int insertionsort(int a[5],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int a[5],i,n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertionsort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
Enter n:5
Enter array:1 5 3 8 2
12358
