#include<stdio.h>
int main()
{
	int n,a,d,i;// hrer this program create ap series
	printf("Enter the (limit of N):");
	scanf("%d",&n);
	printf("Enter the first term:");
	scanf("%d",&a);
	printf("Enter common differnce:");
	scanf("%d",&d);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		a=a+d;
	}
}