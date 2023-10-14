#include<stdio.h>
int main()
{
	int a[5],i,n,count=0;
	printf("Enter the elemet in array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the whose element search:");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
	if(a[i]==n)
	{
		count++;
	}
}
	if(count>0)
	{
		printf("item is founded:");
	}
	else
	{
		printf("item is not founded:");
	}
	
	
}