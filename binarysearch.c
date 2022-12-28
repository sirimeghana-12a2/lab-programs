#include<stdio.h>
int binarysearch(int a[5],int n,int key)
{
	int i,low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key<a[mid])
		{
			high=mid-1;
		}
		else if(key>a[mid])
		{
			low=mid+1;
		}
		else
		{
			return mid;
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
	pos=binarysearch(a,n,key);
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
enter array:1  2 3 4 5
Enter key:2
element is found at 2
