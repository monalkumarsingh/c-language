#include<stdio.h>
int main()
{
	while(1)
	{
		int num,num1;
		printf("Please Enter the number to exit -1:");
		scanf("%d",&num);
		if(num==-1)
		{
			break;
			
		}
		printf("Enter the any number:");
		scanf("%d",&num1);
		int i;
		for(i=1;i<=10;i++)
		{
			printf("%d\n",num1*i);
		}
		
	}
}
