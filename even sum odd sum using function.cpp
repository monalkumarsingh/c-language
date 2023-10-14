#include<stdio.h>
void arrays(int numbers[]);
int main()
{
	int numbers[]={10,15,35,40,50};
	arrays(numbers);
	
}
void arrays(int numbers[])
{
	int sum=0;
	int sub=0;
	for(int i=0;i<5;i++)
	{
	if(numbers[i]%2==0)
	{
		sum=sum+numbers[i];
	}
	else{
		sub=sub-numbers[i];
	}
	}
	printf("the sum  of even number in array %d\n",sum);
	printf("the subtraction of odd number in array %d\n",sub);
	
}

