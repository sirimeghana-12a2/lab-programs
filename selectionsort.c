#include<stdio.h>
int selectionsort(int a[5],int n)
{
	int i,j,temp,min;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[min])
			{
				min=j;
			}
		}
				temp=a[i];
				a[i]=a[min];
				a[min]=temp;
			
		
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
	selectionsort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
Enter n:5
Enter array:2 6 3 8 1
86321
