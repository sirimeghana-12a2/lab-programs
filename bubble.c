#include<stdio.h>
int bubblesort(int a[5],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
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
	bubblesort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
Enter n:5
Enter array:2 4 3 7 6
23467
