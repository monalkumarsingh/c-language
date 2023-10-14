#include<stdio.h>
int main()
{
	

	
	
	while(1)
	{
		int num,num1,num2;
		printf("please Enter -1 to exit:\n");
			scanf("%d",&num);
		if(num==-1)
		{
		
		break;
	}
		printf("Please Enter the number:\n");
		scanf("%d",&num1);
		printf("Please Enter the number:\n");
		scanf("%d",&num2);
		printf("the sum of two number is=%d\n",num1+num2);
		printf("the sub of two number is=%d\n",num1-num2);
		printf("the mul of two number is=%d\n",num1*num2);
	}
}