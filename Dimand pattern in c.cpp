#include<stdio.h>
int main()
{
	int i,j,n=4;
	for(i=1;i<=4;i++)//outer loop//Diimand pattern print
	{
		for(j=1;j<n-i;j++)//inner loop
		{
			printf(" ");//space
		}
		for(j=1;j<=2*i-1;j++)//inner loop
		{
		   printf("*");//star print
		}
		printf("\n");//new line
	}
		for(i=4;i>=1;i--)//outer loop//Diimand pattern print
	{
		for(j=1;j<n-i;j++)//inner loop
		{
			printf(" ");//space
		}
		for(j=1;j<=2*i-1;j++)//inner loop
		{
		   printf("*");//star print
		}
		printf("\n");//new line
	}
}