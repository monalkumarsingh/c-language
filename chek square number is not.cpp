#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number check perfect square is not:\t");
	scanf("%d",&n);
	int c=n*n;
	int c1;
	printf("Enter the number how much square is:\t");
	scanf("%d",&c1);
	if(c1==c)
	{
		printf("your calculation is true:",c);
	}
	else
	{
		printf("your calculaton is not true:");
	}
}