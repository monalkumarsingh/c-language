#include<stdio.h>
int cube_series(int n);
int main()
{
	int n;
	printf("Enter the (Limit of n):");
	scanf("%d",&n);
	cube_series(n);
}
int cube_series(int n)
{
	for(int i=1;i<=n;i++)
	{
		printf("%d\t",i*i*i);
	}
}