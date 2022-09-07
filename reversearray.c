#include<stdio.h>
void display_array(int *,int);
int main()
{ int a[] = {10,20,30,40,50,60,70};
	display_array(a,7);
	return 0;
}

void display_array(int *a,int size)
{ int i;
	for(i=size-1;i>=0;i--)
	{ printf("% d",a[i]);
	}
}	

